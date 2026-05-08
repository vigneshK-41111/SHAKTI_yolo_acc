import cv2
import serial
import time

ser = serial.Serial('/dev/ttyUSB2', 115200, timeout=2)

# -------------------------
# WAIT FOR FPGA READY
# -------------------------
# print("Waiting for FPGA...")

# while True:
#     line = ser.readline().decode(errors='ignore')
#     if "READY" in line:
#         break

# print("FPGA ready, sending image...")

# -------------------------
# CAPTURE IMAGE
# -------------------------
cap = cv2.VideoCapture(0)
ret, frame = cap.read()

frame = cv2.resize(frame, (416, 416))
frame = frame[:, :, ::-1]  # BGR → RGB

data = frame.tobytes()
size = len(data)

# -------------------------
# SEND
# -------------------------
ser.write(size.to_bytes(4, 'little'))
time.sleep(0.05)

for i in range(0, size, 256):
    ser.write(data[i:i+256])
    time.sleep(0.001)

print("Sent live frame:", size)
