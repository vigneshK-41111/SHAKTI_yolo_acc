#ifndef CNN_DRIVER_H
#define CNN_DRIVER_H

#include <stdint.h>

#define REG_CONTROL   0x00
#define REG_INPUT_L   0x10
#define REG_INPUT_H   0x14
#define REG_OUTPUT_L  0x1C
#define REG_OUTPUT_H  0x20
#define REG_SIZE      0x28

// 🔧 Update this to your actual base address
#define CNN_BASE 0x00041600  

void cnn_set_input(uint32_t addr);
void cnn_set_output(uint32_t addr);
void cnn_set_size(uint32_t size);
void cnn_start();
void cnn_wait_done();

#endif