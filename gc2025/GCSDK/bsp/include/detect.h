#ifndef DETECT_H
#define DETECT_H

#include <stdint.h>

#define NUM_CLASSES 7
#define GRID_SIZE   13   
#define CHANNELS    64

typedef struct {
    float confidence;
    int class_id;
} ClassificationResult;

extern ClassificationResult current_result;

// Proper function prototypes
void run_classification(int8_t *feature_map);
void print_classification();

#endif