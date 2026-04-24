#include <stdio.h>
#include <stdint.h>

#include "cnn_driver.h"
#include "detect.h"

#define INPUT_ADDR   0x80200000
#define OUTPUT_ADDR  0x81200000

#define CPU_FREQ 40000000   // 40 MHz

static inline uint32_t read_reg(uint32_t offset)
{
    volatile uint32_t *ptr = (uint32_t *)(CNN_BASE + offset);
    return *ptr;
}

static inline uint32_t read_cycle() {
    uint32_t cycles;
    asm volatile ("rdcycle %0" : "=r"(cycles));
    return cycles;
}

int main()
{
    printf("Waste Detection System Start\n");

    int8_t *output = (int8_t *)OUTPUT_ADDR;

    // ⏱️ Start timing
uint32_t start = read_cycle();

cnn_set_input(INPUT_ADDR);
cnn_set_output(OUTPUT_ADDR);
cnn_set_size(16);   // VERY IMPORTANT
printf("SIZE REG = %x\n", read_reg(REG_SIZE));

printf("Before start: %x\n", read_reg(REG_CONTROL));

cnn_start();

printf("After start: %x\n", read_reg(REG_CONTROL));

cnn_wait_done();

uint32_t end = read_cycle();

uint32_t cycles = end - start;
float time_ms = (float)cycles / (40000000.0f / 1000.0f);

printf("\n=== Performance ===\n");
printf("Cycles: %u\n", cycles);
printf("Inference Time: %.3f ms\n", time_ms);

    printf("CNN inference done\n");

    run_detection(output);
    print_named_results();

    while (1);

    return 0;
}