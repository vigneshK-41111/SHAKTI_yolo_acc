import cv2
import numpy as np
import os

# Configuration
OUTPUT_FOLDER = "webcam_captures"
CAMERA_INDEX = 0  # 0 is usually the integrated webcam

if not os.path.exists(OUTPUT_FOLDER):
    os.makedirs(OUTPUT_FOLDER)

# Start connection to webcam
cap = cv2.VideoCapture(CAMERA_INDEX)

if not cap.isOpened():
    print("Error: Could not access the webcam.")
    exit()

print(f"Webcam active. Saving to: {OUTPUT_FOLDER}")
print("Commands: 's' to Save | 'q' to Quit")

frame_count = 0

try:
    while True:
        ret, frame = cap.read()
        if not ret:
            print("Failed to grab frame.")
            break

        # Display the live feed
        cv2.imshow('Webcam Live Feed', frame)

        key = cv2.waitKey(1) & 0xFF
        
        if key == ord('s'):
            # 1. Save as Standard JPEG
            jpg_name = f"frame_{frame_count}.jpg"
            cv2.imwrite(os.path.join(OUTPUT_FOLDER, jpg_name), frame, [cv2.IMWRITE_JPEG_QUALITY, 95])
            
            # 2. Save as RAW Binary Data
            # This saves the raw BGR bytes without any headers or compression
            raw_name = f"frame_{frame_count}.raw"
            with open(os.path.join(OUTPUT_FOLDER, raw_name), "wb") as f:
                f.write(frame.tobytes())
            
            print(f"Captured Pair: {jpg_name} and {raw_name}")
            frame_count += 1

        elif key == ord('q'):
            break

finally:
    # Always release the hardware and close windows
    cap.release()
    cv2.destroyAllWindows()