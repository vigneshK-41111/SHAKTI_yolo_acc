from PIL import Image
import numpy as np

# Load image
img = Image.open("input1.jpg")

# Resize to model input (IMPORTANT)
img = img.resize((416, 416))

# Convert to RGB (removes alpha if present)
img = img.convert("RGB")

# Convert to numpy
arr = np.array(img)

# 🔥 OPTION 1: uint8 (0–255)
arr.tofile("image_pl.raw")

# 🔥 OPTION 2 (if your CNN expects int8)
# arr = arr.astype(np.int16) - 128
# arr = arr.astype(np.int8)
# arr.tofile("image.raw")

print("RAW file generated")
