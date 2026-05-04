import torch
import torch.nn.utils.prune as prune
from ultralytics import YOLO

# =========================
# CONFIG
# =========================
MODEL_PATH = "./best.pt"
PRUNE_AMOUNT = 0.3   # 30% channel pruning
EXPORT_BACKBONE = True

# =========================
# LOAD MODEL
# =========================
model = YOLO(MODEL_PATH)
net = model.model
net.eval()

print("Model loaded successfully")

# =========================
# PRUNING FUNCTION
# =========================
def prune_conv_layers(model, amount=0.3):
    print(f"Applying {amount*100}% structured pruning...")
    
    for name, module in model.named_modules():
        if isinstance(module, torch.nn.Conv2d):
            try:
                prune.ln_structured(
                    module,
                    name="weight",
                    amount=amount,
                    n=2,
                    dim=0  # prune output channels
                )
                prune.remove(module, "weight")  # make permanent
                print(f"Pruned layer: {name}")
            except Exception as e:
                print(f"Skipping layer {name}: {e}")

# =========================
# APPLY PRUNING
# =========================
prune_conv_layers(net, PRUNE_AMOUNT)

# =========================
# OPTIONAL: QUICK CHECK
# =========================
dummy = torch.randn(1, 3, 416, 416)
with torch.no_grad():
    out = net(dummy)
    print("Forward pass OK after pruning")

# =========================
# OPTIONAL: FINETUNE (recommended)
# =========================
# Uncomment if you want better accuracy
"""
print("Starting finetuning...")
model.train(
    data="data.yaml",
    epochs=10,
    imgsz=416
)
"""

# =========================
# EXPORT FULL MODEL TO ONNX
# =========================
print("Exporting full model to ONNX...")
model.export(format="onnx", opset=11)
print("Full ONNX exported")

# =========================
# EXPORT BACKBONE ONLY (FPGA FRIENDLY)
# =========================
if EXPORT_BACKBONE:
    print("Exporting backbone only...")

    # Take first few layers (adjust index if needed)
    backbone = net.model[:3]

    dummy = torch.randn(1, 3, 416, 416)

    torch.onnx.export(
        backbone,
        dummy,
        "backbone.onnx",
        opset_version=11,
        input_names=["input"],
        output_names=["output"]
    )

    print("Backbone ONNX exported as backbone.onnx")

print("DONE")
