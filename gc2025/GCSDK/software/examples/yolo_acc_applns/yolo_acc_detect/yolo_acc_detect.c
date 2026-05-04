#include <stdio.h>
#include <stdint.h>

#include "cnn_driver.h"
#include "detect.h"

#define INPUT_ADDR   0x80700000
#define OUTPUT_ADDR  0x81700000

#define CPU_FREQ 50000000   // 40 MHz

static inline uint32_t read_reg(uint32_t offset)
{
    volatile uint32_t *ptr = (uint32_t *)(CNN_BASE + offset);
    return *ptr;
}
static inline uint64_t read_mtime()
{
    volatile uint32_t *mtime_lo = (uint32_t *)0x0200BFF8;
    volatile uint32_t *mtime_hi = (uint32_t *)0x0200BFFC;

    uint32_t hi1, lo, hi2;

    do {
        hi1 = *mtime_hi;
        lo  = *mtime_lo;
        hi2 = *mtime_hi;
    } while (hi1 != hi2);

    return ((uint64_t)hi1 << 32) | lo;
}

int main()
{
    printf("Waste Detection System Start\n");

    int8_t *output = (int8_t *)OUTPUT_ADDR;

    // ⏱️ Start timing


cnn_set_input(INPUT_ADDR);
cnn_set_output(OUTPUT_ADDR);
cnn_set_size(16);

printf("SIZE REG = %x\n", read_reg(REG_SIZE));
printf("Before start: %x\n", read_reg(REG_CONTROL));
uint64_t start = read_mtime();

cnn_start();

printf("After start: %x\n", read_reg(REG_CONTROL));

cnn_wait_done();

uint64_t end = read_mtime();

uint64_t cycles = end - start;


// // ================= DEBUG START =================

// // 1. Raw dump (first 64 values)
// printf("\n=== FEATURE MAP (first 64) ===\n");
// for (int i = 0; i < 64; i++) {
//     printf("%d ", output[i]);
// }
// printf("\n");


// // 2. Min / Max / Mean
// int min = 127, max = -128, sum = 0;

// for (int i = 0; i < GRID_SIZE * GRID_SIZE; i++) {
//     int v = output[i];
//     if (v < min) min = v;
//     if (v > max) max = v;
//     sum += v;
// }

// float mean = (float)sum / (GRID_SIZE * GRID_SIZE);

// printf("MIN=%d MAX=%d MEAN=%.2f\n", min, max, mean);


// // 3. Histogram
// int hist[256] = {0};

// for (int i = 0; i < GRID_SIZE * GRID_SIZE; i++) {
//     hist[(uint8_t)output[i]]++;
// }

// printf("\n=== HISTOGRAM ===\n");
// for (int i = 0; i < 256; i++) {
//     if (hist[i] > 0) {
//         printf("val %d count %d\n", (int8_t)i, hist[i]);
//     }
// }


// // 4. 2D view (optional but VERY useful)
// printf("\n=== FEATURE MAP GRID ===\n");
// for (int y = 0; y < GRID_SIZE; y++) {
//     for (int x = 0; x < GRID_SIZE; x++) {
//         printf("%3d ", output[y * GRID_SIZE + x]);
//     }
//     printf("\n");
// }

#define MTIME_FREQ 50000000  // adjust if needed

float time_ms = (float)cycles / (MTIME_FREQ / 512.0f);

printf("\n=== Performance ===\n");
printf("Ticks: %llu\n", cycles);
printf("Inference Time: %.3f ms\n", time_ms);

    printf("CNN inference done\n");

    run_detection(output);
    print_named_results();

    while (1);

    return 0;
}