#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
#include "detect.h"

#define IMG_SIZE    416
#define NMS_THRESH  0.4
#define CHANNELS    64
#define MAX_KEEP    10

#define ENABLE_ACCURACY 1   // set 0 to disable accuracy print

Detection detections[MAX_DETECTIONS];
int det_count = 0;

// ===============================
// Ground Truth Struct (for accuracy)
// ===============================
typedef struct {
    int x, y, w, h;
    int class_id;
} GroundTruth;


// ===============================
// Class names
// ===============================
const char *class_names[NUM_CLASSES] = {
    "glass",
    "paper",
    "cardboard",
    "plastic",
    "metal",
    "E-wast",
    "Medical_Wast"
};


// ===============================
// IoU
// ===============================
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


// ===============================
// NMS
// ===============================
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


// ===============================
// Print Results
// ===============================
void print_named_results() {
    printf("\nDetected Waste Objects:\n");

    for (int i = 0; i < det_count; i++) {
        if (detections[i].score == 0) continue;

        int cid = detections[i].class_id;
        if (cid < 0 || cid >= NUM_CLASSES)
            cid = 0;

        printf("Type: %s | Confidence: %.3f | Box[x=%d y=%d w=%d h=%d]\n",
               class_names[cid],
               detections[i].score,
               (int)detections[i].x,
               (int)detections[i].y,
               (int)detections[i].w,
               (int)detections[i].h);
    }
}


// ===============================
// Accuracy (IoU based)
// ===============================
float compute_accuracy(GroundTruth *gt, int gt_count) {

    if (gt_count == 0) return 0.0f;

    int correct = 0;

    for (int i = 0; i < gt_count; i++) {

        float best_iou = 0.0f;

        for (int j = 0; j < det_count; j++) {

            if (detections[j].score == 0) continue;

            if (detections[j].class_id != gt[i].class_id)
                continue;

            Detection gt_det = {
                gt[i].x, gt[i].y, gt[i].w, gt[i].h, 1.0f, gt[i].class_id
            };

            float iou_val = iou(detections[j], gt_det);

            if (iou_val > best_iou) {
                best_iou = iou_val;
            }
        }

        if (best_iou > 0.5f) {
            correct++;
        }
    }

    return (float)correct / gt_count;
}


// ===============================
// DETECTION PIPELINE
// ===============================
void run_classification(int8_t *feature_map) {

    int class_sum[NUM_CLASSES];

    // initialize
    for (int c = 0; c < NUM_CLASSES; c++)
        class_sum[c] = 0;

    // ===============================
    // 1. GLOBAL FEATURE ACCUMULATION
    // ===============================
    for (int i = 0; i < GRID_SIZE * GRID_SIZE; i++) {

        int base = i * CHANNELS;

        for (int ch = 0; ch < CHANNELS; ch++) {

            int val = feature_map[base + ch];

            // map channel to class (simple modulo mapping)
            int c = ch % NUM_CLASSES;

            class_sum[c] += val;
        }
    }

    // ===============================
    // 2. Find best class
    // ===============================
    int best_class = 0;
    int best_score = class_sum[0];

    for (int c = 1; c < NUM_CLASSES; c++) {
        if (class_sum[c] > best_score) {
            best_score = class_sum[c];
            best_class = c;
        }
    }

    // ===============================
    // 3. Normalize confidence
    // ===============================
    float confidence = (float)best_score / (GRID_SIZE * GRID_SIZE * CHANNELS);

    if (confidence < 0) confidence = 0;

    // ===============================
    // 4. Debug print
    // ===============================
    printf("\n=== CLASS SCORES ===\n");
    for (int c = 0; c < NUM_CLASSES; c++) {
        printf("%s : %d\n", class_names[c], class_sum[c]);
    }

    // ===============================
    // 5. Final output
    // ===============================
    printf("\n=== FINAL CLASSIFICATION ===\n");
    printf("Type: %s | Confidence: %.3f\n",
           class_names[best_class],
           confidence);
}