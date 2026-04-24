import onnx
import numpy as np
from onnx import numpy_helper
import os

# ==============================
# CONFIG
# ==============================
ONNX_PATH = "/scratch1/iot/backbone.onnx"
OUTPUT_DIR = "./weights"

os.makedirs(OUTPUT_DIR, exist_ok=True)

# ==============================
# STEP 1: LOAD MODEL
# ==============================
model = onnx.load(ONNX_PATH)

print("\n=== Extracting Weights ===\n")

# ==============================
# STEP 2: EXTRACT + SAVE NPY
# ==============================
weight_files = []

for init in model.graph.initializer:
    name = init.name.replace(".", "_")  # safer for filenames
    data = numpy_helper.to_array(init)

    print(f"{name} -> shape {data.shape}")

    npy_path = os.path.join(OUTPUT_DIR, name + ".npy")
    np.save(npy_path, data)

    weight_files.append(npy_path)

print("\n=== Extraction Done ===\n")

# ==============================
# STEP 3: QUANTIZATION FUNCTION
# ==============================
def quantize_to_int8(data):
    flat = data.flatten()

    min_val = flat.min()
    max_val = flat.max()

    print(f"   min: {min_val}, max: {max_val}")

    # Avoid division by zero
    max_abs = max(abs(min_val), abs(max_val))
    if max_abs == 0:
        scale = 1.0
    else:
        scale = 127.0 / max_abs

    quantized = (flat * scale).round().astype(np.int8)

    return quantized, scale


# ==============================
# STEP 4: GENERATE HEADER FILES
# ==============================
print("\n=== Generating Header Files ===\n")

scale_table = []

for npy_file in weight_files:
    data = np.load(npy_file)

    print(f"\nProcessing: {npy_file}")
    print(f"Shape: {data.shape}")

    q_data, scale = quantize_to_int8(data)

    base_name = os.path.basename(npy_file).replace(".npy", "")
    header_path = os.path.join(OUTPUT_DIR, base_name + ".h")

    # Save header
    with open(header_path, "w") as f:
        f.write("#include <stdint.h>\n\n")

        f.write(f"// Shape: {data.shape}\n")
        f.write(f"// Scale: {scale}\n\n")

        f.write(f"int8_t {base_name}[] = {{\n")

        for i, val in enumerate(q_data):
            f.write(f"{val}, ")
            if (i + 1) % 20 == 0:
                f.write("\n")

        f.write("\n};\n")

    print(f"Generated: {header_path}")
    print(f"Scale: {scale}")

    scale_table.append((base_name, scale))


# ==============================
# STEP 5: SAVE SCALE TABLE
# ==============================
scale_file = os.path.join(OUTPUT_DIR, "scales.h")

with open(scale_file, "w") as f:
    f.write("#ifndef SCALES_H\n#define SCALES_H\n\n")

    for name, scale in scale_table:
        f.write(f"#define {name.upper()}_SCALE {scale}f\n")

    f.write("\n#endif\n")

print("\nGenerated scale table:", scale_file)

print("\n✅ DONE: All weights + headers + scales generated!\n")