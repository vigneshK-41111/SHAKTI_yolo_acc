#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "detect.h"

#define IMG_SIZE    416
#define NMS_THRESH  0.4
#define CHANNELS    64
#define MAX_KEEP    10   // keep top detections

Detection detections[MAX_DETECTIONS];
int det_count = 0;

// Waste class labels
const char *class_names[NUM_CLASSES] = {
    "plastic",
    "metal",
    "glass",
    "paper",
    "cardboard",
    "e-waste",
    "bio",
    "other"
};

// IoU
float iou(Detection a, Detection b) {
    float x1 = fmax(a.x, b.x);
    float y1 = fmax(a.y, b.y);
    float x2 = fmin(a.x + a.w, b.x + b.w);
    float y2 = fmin(a.y + a.h, b.y + b.h);

    float inter = fmax(0, x2 - x1) * fmax(0, y2 - y1);
    float areaA = a.w * a.h;
    float areaB = b.w * b.h;

    return inter / (areaA + areaB - inter + 1e-6f);
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

// Print results
void print_named_results() {
    printf("\nDetected Waste Objects:\n");

    for (int i = 0; i < det_count; i++) {
        if (detections[i].score == 0) continue;

        int cid = detections[i].class_id;

        if (cid < 0 || cid >= NUM_CLASSES)
            cid = 0;

        printf("Type: %s | Confidence: %.2f | Box[x=%d y=%d w=%d h=%d]\n",
               class_names[cid],
               detections[i].score,
               (int)detections[i].x,
               (int)detections[i].y,
               (int)detections[i].w,
               (int)detections[i].h);
    }
}


// ================= DETECTION =================
void run_detection(int8_t *feature_map) {

    det_count = 0;

    int stride = IMG_SIZE / GRID_SIZE;
    int group_size = CHANNELS / NUM_CLASSES;

    for (int gy = 0; gy < GRID_SIZE; gy++) {
        for (int gx = 0; gx < GRID_SIZE; gx++) {

            int idx = (gy * GRID_SIZE + gx) * CHANNELS;

            // ===============================
            // 1. Objectness (energy)
            // ===============================
            int energy = 0;

            for (int c = 0; c < CHANNELS; c++) {
                energy += abs(feature_map[idx + c]);
            }

            float obj_score = (float)energy / (CHANNELS * 50.0f);

            if (obj_score < 0.1f)
                continue;

            // ===============================
            // 2. Peak filtering (LOCAL MAX)
            // ===============================
            int is_peak = 1;

            for (int dy = -1; dy <= 1; dy++) {
                for (int dx = -1; dx <= 1; dx++) {

                    if (dx == 0 && dy == 0) continue;

                    int ny = gy + dy;
                    int nx = gx + dx;

                    if (ny >= 0 && ny < GRID_SIZE &&
                        nx >= 0 && nx < GRID_SIZE) {

                        int nidx = (ny * GRID_SIZE + nx) * CHANNELS;

                        int n_energy = 0;
                        for (int c = 0; c < CHANNELS; c++) {
                            n_energy += abs(feature_map[nidx + c]);
                        }

                        if (n_energy > energy) {
                            is_peak = 0;
                        }
                    }
                }
            }

            if (!is_peak)
                continue;

            // ===============================
            // 3. Class prediction
            // ===============================
            int best_class = 0;
            int best_score = -999999;

            for (int c = 0; c < NUM_CLASSES; c++) {

                int sum = 0;

                for (int k = 0; k < group_size; k++) {
                    int ch = c * group_size + k;
                    sum += feature_map[idx + ch];
                }

                if (sum > best_score) {
                    best_score = sum;
                    best_class = c;
                }
            }

            if (best_class < 0 || best_class >= NUM_CLASSES)
                best_class = 0;

            // ===============================
            // 4. Confidence
            // ===============================
            float cls_score = (float)best_score / (group_size * 50.0f);
            float score = obj_score * cls_score;

            if (score < 0.2f)
                continue;

            // ===============================
            // 5. Bounding box
            // ===============================
            int x = gx * stride;
            int y = gy * stride;
            int box = stride * 3;

            // ===============================
            // 6. Store
            // ===============================
            if (det_count >= MAX_DETECTIONS)
                break;

            detections[det_count].x = x;
            detections[det_count].y = y;
            detections[det_count].w = box;
            detections[det_count].h = box;
            detections[det_count].score = score;
            detections[det_count].class_id = best_class;

            det_count++;
        }
    }

    printf("Raw detections: %d\n", det_count);

    // ===============================
    // 7. NMS
    // ===============================
    apply_nms();

    // ===============================
    // 8. Top-K pruning (clean output)
    // ===============================
    for (int i = 0; i < det_count; i++) {
        for (int j = i + 1; j < det_count; j++) {
            if (detections[j].score > detections[i].score) {
                Detection tmp = detections[i];
                detections[i] = detections[j];
                detections[j] = tmp;
            }
        }
    }

    if (det_count > MAX_KEEP)
        det_count = MAX_KEEP;
}