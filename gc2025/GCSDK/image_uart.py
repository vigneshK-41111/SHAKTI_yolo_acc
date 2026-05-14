import cv2
import serial
import numpy as np

# Configure serial and camera
ser = serial.Serial('/dev/ttyUSB0', 115200, timeout=0.1)
cap = cv2.VideoCapture(0)

def preprocess_frame(frame):
    # 1. Resize to match your model's input dimensions
    img = cv2.resize(frame, (416, 416))
    
    # 2. BGR to RGB: Crucial for correctly identifying E-waste (green PCBs)
    img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
    
    # 3. Normalization: Standard models expect float 0:1. 
    # For int8 FPGA, we map 0:255 to -128:127 to prevent "3.3% confidence" noise.
    img = img.astype(np.int16)
    img = (img - 128).astype(np.int8)
    return img.tobytes()

print("[PC] System Online. Waiting for READY...")

while True:
    line = ser.readline().decode(errors='ignore').strip()

    if "READY" in line:
        ret, frame = cap.read()
        if not ret: continue

        data = preprocess_frame(frame)
        
        # Send Size Header (4 bytes)
        ser.write(len(data).to_bytes(4, 'little'))
        
        # Send Data in chunks to avoid overwhelming UART buffer
        chunk_size = 4096
        for i in range(0, len(data), chunk_size):
            ser.write(data[i:i + chunk_size])
        ser.flush()
        print(f"[PC] Sent frame ({len(data)} bytes).")

    elif line:
        print(f" FPGA >> {line}")