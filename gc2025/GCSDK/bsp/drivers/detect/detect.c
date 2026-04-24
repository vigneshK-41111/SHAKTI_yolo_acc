#include <stdio.h>
#include <math.h>
#include "detect.h"

#define CONF_THRESH 0.5
#define NMS_THRESH  0.4
#define IMG_SIZE    416

Detection detections[MAX_DETECTIONS];
int det_count = 0;

// ♻️ Waste class labels
const char *class_names[NUM_CLASSES] = {
    "biodegradable",
    "plastic",
    "metal",
    "glass",
    "paper",
    "cardboard",
    "e-waste",
    "hazardous"
};

// Sigmoid
float sigmoid(float x) {
    return 1.0f / (1.0f + expf(-x));
}

// Dequant (adjust if needed)
float dequant(int8_t x) {
    return (float)x / 127.0f;
}

// IoU
float iou(Detection a, Detection b) {
    float x1 = fmax(a.x, b.x);
    float y1 = fmax(a.y, b.y);
    float x2 = fmin(a.x + a.w, b.x + b.w);
    float y2 = fmin(a.y + a.h, b.y + b.h);

    float inter = fmax(0, x2 - x1) * fmax(0, y2 - y1);
    float areaA = a.w * a.h;
    float areaB = b.w * b.h;

    return inter / (areaA + areaB - inter + 1e-6);
}

// NMS
void apply_nms() {
    for (int i = 0; i < det_count; i++) {
        if (detections[i].score == 0) continue;

        for (int j = i + 1; j < det_count; j++) {
            if (detections[j].score == 0) continue;

            if (detections[i].class_id != detections[j].class_id)
                continue;

            if (iou(detections[i], detections[j]) > NMS_THRESH) {
                if (detections[i].score > detections[j].score)
                    detections[j].score = 0;
                else
                    detections[i].score = 0;
            }
        }
    }
}

// Print results (WITH CLASS NAMES)
void print_named_results() {
    printf("\nDetected Waste Objects:\n");

    for (int i = 0; i < det_count; i++) {
        if (detections[i].score == 0) continue;

        int cid = detections[i].class_id;

        const char *name = "unknown";
        if (cid >= 0 && cid < NUM_CLASSES) {
            name = class_names[cid];
        }

                printf("Type: %s | Confidence: %.2f | Box[x=%d y=%d w=%d h=%d]\n",
               name,
               detections[i].score,
               (int)detections[i].x,
               (int)detections[i].y,
               (int)detections[i].w,
               (int)detections[i].h);
    }
}

// Main detection
void run_detection(int8_t *feature_map) {

    det_count = 0;

    for (int gy = 0; gy < GRID_SIZE; gy++) {
        for (int gx = 0; gx < GRID_SIZE; gx++) {

            int idx = (gy * GRID_SIZE + gx) * CHANNELS;

            float obj = sigmoid(dequant(feature_map[idx]));
            if (obj < CONF_THRESH) continue;

            float bx = (gx + sigmoid(dequant(feature_map[idx + 1]))) / GRID_SIZE;
            float by = (gy + sigmoid(dequant(feature_map[idx + 2]))) / GRID_SIZE;
            float bw = expf(dequant(feature_map[idx + 3]));
            float bh = expf(dequant(feature_map[idx + 4]));

            float px = bx * IMG_SIZE;
            float py = by * IMG_SIZE;
            float pw = bw * IMG_SIZE;
            float ph = bh * IMG_SIZE;

            if (pw > IMG_SIZE) pw = IMG_SIZE;
            if (ph > IMG_SIZE) ph = IMG_SIZE;

            int best_class = -1;
            float best_score = 0;

            for (int c = 0; c < NUM_CLASSES; c++) {
                float score = sigmoid(dequant(feature_map[idx + 5 + c]));
                if (score > best_score) {
                    best_score = score;
                    best_class = c;
                }
            }

            float final_score = obj * best_score;
            if (final_score < CONF_THRESH) continue;

            if (det_count < MAX_DETECTIONS) {
                detections[det_count++] = (Detection){
                    px, py, pw, ph, final_score, best_class
                };
            }
        }
    }

    printf("Raw detections: %d\n", det_count);

    apply_nms();
}