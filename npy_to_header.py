import numpy as np
import os

# =========================
# CONFIG
# =========================
WEIGHT_DIR = "./weights"

# Load scales from your generated table manually
# (or parse scales.h if you want later)
SCALES = {
    "0_conv_weight": 6.2042717933654785,
    "1_conv_weight": 45.03623580932617,
    "2_cv1_conv_weight": 97.88905334472656,
    "2_cv2_conv_weight": 103.63712310791016,
    "2_m_0_cv1_conv_weight": 46.86685562133789,
    "2_m_0_cv2_conv_weight": 120.15339660644531,

    "0_conv_weight_bias": 12.28076457977295,
    "1_conv_weight_bias": 22.66077995300293,
    "2_cv1_conv_weight_bias": 30.921875,
    "2_m_0_cv1_conv_weight_bias": 14.9540433883667,
    "2_m_0_cv2_conv_weight_bias": 30.717472076416016,
    "2_cv2_conv_weight_bias": 28.490041732788086,
}

# =========================
# QUANTIZATION FUNCTION
# =========================
def quantize(data, scale):
    q = data * scale
    q = np.round(q)
    q = np.clip(q, -128, 127)
    return q.astype(np.int8)

# =========================
# HEADER GENERATOR
# =========================
def generate_header(name, data):
    flat = data.flatten()
    size = flat.shape[0]

    header_name = os.path.join(WEIGHT_DIR, name + ".h")

    with open(header_name, "w") as f:
        f.write("#include <stdint.h>\n\n")
        f.write(f"#define {name.upper()}_SIZE {size}\n\n")
        f.write(f"int8_t {name}[{size}] = {{\n")

        for i, val in enumerate(flat):
            f.write(f"{int(val)}, ")
            if (i + 1) % 16 == 0:
                f.write("\n")

        f.write("\n};\n")

    print(f"Generated: {header_name}")

# =========================
# MAIN
# =========================
def process_all():
    for file in os.listdir(WEIGHT_DIR):
        if not file.endswith(".npy"):
            continue

        name = file.replace(".npy", "")
        path = os.path.join(WEIGHT_DIR, file)

        print(f"\nProcessing: {file}")

        data = np.load(path)
        print(f"Shape: {data.shape}")

        if name not in SCALES:
            print(f"⚠ No scale found for {name}, skipping...")
            continue

        scale = SCALES[name]
        print(f"Using scale: {scale}")

        q_data = quantize(data, scale)

        print(f"Quantized range: {q_data.min()} to {q_data.max()}")

        generate_header(name, q_data)

    print("\n✅ DONE")

# =========================
# RUN
# =========================
if __name__ == "__main__":
    process_all()
