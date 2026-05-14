#include <stdio.h>
#include <stdint.h>
#include "detect.h"

ClassificationResult current_result;

const char *class_names[NUM_CLASSES] = {
    "plastic", "paper", "cardboard", "glass", "metal", "E-waste", "Medical-waste"
};

void run_classification(int8_t *feature_map) {
    int32_t class_sum[NUM_CLASSES] = {0};

    // 1. Accumulate scores
    for (int i = 0; i < GRID_SIZE * GRID_SIZE; i++) {
        int base = i * CHANNELS; 
        for (int c = 0; c < NUM_CLASSES; c++) {
            class_sum[c] += (int32_t)feature_map[base + c];
        }
    }

    // 2. Find the Maximum Score
    int32_t max_score = -2147483648; 
    for (int c = 0; c < NUM_CLASSES; c++) {
        if (class_sum[c] > max_score) {
            max_score = class_sum[c];
        }
    }

    // 3. Print all winners if there is a tie
    printf("\n--- PREDICTION RESULTS ---\n");
    int winner_count = 0;
    for (int c = 0; c < NUM_CLASSES; c++) {
        if (class_sum[c] == max_score) {
            printf("WINNER [%d]: %s (Score: %ld)\n", winner_count + 1, class_names[c], (long)max_score);
            current_result.class_id = c; // Keeps the last one as the default
            winner_count++;
        }
    }

    if (winner_count > 1) {
        printf("NOTE: Classification is TIED between %d classes.\n", winner_count);
    }
}

void print_classification() {
    printf("\n================================\n");
    printf("  PREDICTION : %s\n", class_names[current_result.class_id]);
    printf("================================\n");
}