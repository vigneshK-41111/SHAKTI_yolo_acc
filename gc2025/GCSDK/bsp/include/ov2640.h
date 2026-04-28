#ifndef OV2640_H
#define OV2640_H
#include <stdint.h>

void ov2640_init_rgb565_320x240(void);
void ov2640_init_jpeg(void);
uint8_t ov2640_read_reg(uint8_t reg);
void ov2640_init_jpeg_vga(void);

#endif