from ultralytics import YOLO

model = YOLO("/scratch1/iot/satya_files/best.pt")
print(model.model)
