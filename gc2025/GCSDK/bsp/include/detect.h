#ifndef DETECT_H
#define DETECT_H

#include <stdint.h>

#define GRID_SIZE      13        // adjust based on your model
#define NUM_CLASSES    7
#define CHANNELS       64
#define MAX_DETECTIONS 100

typedef struct {
    float x, y, w, h;
    float score;
    int class_id;
} Detection;

// Global detection storage
extern Detection detections[MAX_DETECTIONS];
extern int det_count;

// Functions
void run_detection(int8_t *feature_map);
void print_named_results();

#endif