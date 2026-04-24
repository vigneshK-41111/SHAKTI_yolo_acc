#include "cnn_driver.h"

#define REG_CONTROL   0x00
#define REG_INPUT     0x10
#define REG_OUTPUT    0x18
#define REG_SIZE      0x20

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

void cnn_set_input(uint32_t addr)
{
    write_reg(REG_INPUT, addr);
}

void cnn_set_output(uint32_t addr)
{
    write_reg(REG_OUTPUT, addr);
}

void cnn_set_size(uint32_t size)
{
    write_reg(REG_SIZE, size);
}

void cnn_start()
{
    uint32_t val = read_reg(REG_CONTROL);
    write_reg(REG_CONTROL, 0x01);  // set ap_start
}

void cnn_wait_done()
{
    uint32_t val;

    do {
        val = read_reg(REG_CONTROL);
    } while (!(val & 0x2));  // wait for ap_done

    printf("✅ CNN done\n");
}