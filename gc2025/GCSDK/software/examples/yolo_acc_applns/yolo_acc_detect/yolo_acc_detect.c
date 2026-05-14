#include <stdio.h>
#include <stdint.h>

#include "cnn_driver.h"
#include "detect.h"

#define INPUT_ADDR   0x80400000
#define OUTPUT_ADDR  0x81400000

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

   uint32_t *output = (uint32_t *)OUTPUT_ADDR;

    // ⏱️ Start timing


    cnn_set_input(INPUT_ADDR);
    cnn_set_output(OUTPUT_ADDR);
    cnn_set_size(GRID_SIZE * GRID_SIZE ); // 13*13*64 = 10816 bytes

    printf("SIZE REG = %x\n", read_reg(REG_SIZE));
    printf("Before start: %x\n", read_reg(REG_CONTROL));
    uint64_t start = read_mtime();

    cnn_start();

    printf("After start: %x\n", read_reg(REG_CONTROL));

    cnn_wait_done();

    uint64_t end = read_mtime();

    // printf("\n=== RAW OUTPUT WORDS ===\n");

    // for(int i = 0; i < 16; i++) {
    //     printf("[%d] = %u (0x%08x)\n",
    //         i,
    //         output[i],
    //         output[i]);
// }
    uint64_t cycles = end - start;

    #define MTIME_FREQ (CPU_FREQ/512.0f)  // adjust if needed

    float time_ms = (float)cycles * 1000.0f / (float)CPU_FREQ;

    printf("\n=== Performance ===\n");
    printf("Ticks: %llu\n", cycles);
    printf("Inference Time: %.3f ms\n", time_ms);

    printf("CNN inference done\n");

    run_classification(output);
    print_classification();

    while(1);
}
