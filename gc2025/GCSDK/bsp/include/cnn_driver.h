#ifndef CNN_DRIVER_H
#define CNN_DRIVER_H

#include <stdint.h>

#define REG_CONTROL   0x00
#define REG_INPUT     0x10
#define REG_OUTPUT    0x18
#define REG_SIZE      0x20

// 🔧 Update this to your actual base address
#define CNN_BASE 0x00041600  

void cnn_set_input(uint32_t addr);
void cnn_set_output(uint32_t addr);
void cnn_set_size(uint32_t size);
void cnn_start();
void cnn_wait_done();

#endif