#ifndef ARDUCAM_DDR_H
#define ARDUCAM_DDR_H

#include <stdint.h>

void arducam_init(void);
uint32_t arducam_capture_to_ddr(uint8_t *ddr);
uint32_t arducam_capture_jpeg(uint8_t *ddr);

#endif