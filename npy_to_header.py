import numpy as np

files = [
    "conv1_weight.npy",
    "conv2_weight.npy",
    "conv3_weight.npy"
]

def convert(name):
    data = np.load(name)

    print(f"{name} shape: {data.shape}")

    flat = data.flatten()

    # Quantize to int8
    flat = np.clip(flat, -128, 127).astype(np.int8)

    header_name = name.replace(".npy", ".h")
    array_name = name.replace(".npy", "")

    with open(header_name, "w") as f:
        f.write("#include <stdint.h>\n\n")
        f.write(f"int8_t {array_name}[] = {{\n")

        for i, val in enumerate(flat):
            f.write(f"{val}, ")
            if i % 20 == 0:
                f.write("\n")

        f.write("\n};\n")

    print(f"Generated {header_name}")


for f in files:
    convert(f)
