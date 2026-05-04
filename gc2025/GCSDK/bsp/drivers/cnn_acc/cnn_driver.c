#include "cnn_driver.h"
#include <stdint.h>
#include <stdio.h>

#define REG_CONTROL     0x00

#define REG_INPUT_L     0x10
#define REG_INPUT_H     0x14

#define REG_OUTPUT_L    0x1C
#define REG_OUTPUT_H    0x20

#define REG_SIZE        0x28

static inline void write_reg(uint32_t offset, uint32_t value)
{
    volatile uint32_t *ptr = (uint32_t *)(CNN_BASE + offset);
    *ptr = value;
}

static inline uint32_t read_reg(uint32_t offset)
{
    volatile uint32_t *ptr = (uint32_t *)(CNN_BASE + offset);
    return *ptr;
}

// ---------------- CONFIG ----------------

void cnn_set_input(uint32_t addr)
{
    write_reg(REG_INPUT_L, addr);
    write_reg(REG_INPUT_H, 0x0);   // upper 32 bits (important!)
}

void cnn_set_output(uint32_t addr)
{
    write_reg(REG_OUTPUT_L, addr);
    write_reg(REG_OUTPUT_H, 0x0);  // upper 32 bits
}

void cnn_set_size(uint32_t size)
{
    write_reg(REG_SIZE, size);
}

// ---------------- CONTROL ----------------

void cnn_start()
{
    write_reg(REG_CONTROL, 0x01);  // ap_start
}

void cnn_wait_done()
{
    uint32_t val;

    do {
        val = read_reg(REG_CONTROL);
    } while (!(val & 0x2));  // wait for ap_done

    printf("✅ CNN done\n");
}