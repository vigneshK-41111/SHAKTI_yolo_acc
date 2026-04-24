import torch
import torch.nn as nn
from brevitas.nn import QuantConv2d, QuantReLU


class QuantYOLOBackbone(nn.Module):
    def __init__(self):
        super().__init__()

        # ===== Layer 0 (matches YOLOv8 first conv) =====
        self.conv1 = QuantConv2d(
            in_channels=3,
            out_channels=16,
            kernel_size=3,
            stride=2,
            padding=1,
            bias=False,
            weight_bit_width=8
        )
        self.relu1 = QuantReLU(bit_width=8)

        # ===== Layer 1 =====
        self.conv2 = QuantConv2d(
            in_channels=16,
            out_channels=32,
            kernel_size=3,
            stride=2,
            padding=1,
            bias=False,
            weight_bit_width=8
        )
        self.relu2 = QuantReLU(bit_width=8)

        # ===== Layer 2 (skip C2f, directly next conv) =====
        self.conv3 = QuantConv2d(
            in_channels=32,
            out_channels=64,
            kernel_size=3,
            stride=2,
            padding=1,
            bias=False,
            weight_bit_width=8
        )
        self.relu3 = QuantReLU(bit_width=8)

    def forward(self, x):
        x = self.relu1(self.conv1(x))  # 224 -> 112
        x = self.relu2(self.conv2(x))  # 112 -> 56
        x = self.relu3(self.conv3(x))  # 56 -> 28
        return x


# ===== Test + Export =====
if __name__ == "__main__":
    model = QuantYOLOBackbone()
    model.eval()

    # Dummy input (change size if needed)
    dummy_input = torch.randn(1, 3, 416, 416)

    output = model(dummy_input)
    print("Output shape:", output.shape)

    torch.onnx.export(
        model,
        dummy_input,
        "backbone.onnx",
        opset_version=11,
        input_names=["input"],
        output_names=["output"],
        dynamo=False
    )

    print("ONNX model exported as backbone.onnx")
