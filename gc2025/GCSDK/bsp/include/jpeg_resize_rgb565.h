#ifndef JPEG_RESIZE_RGB565_H
#define JPEG_RESIZE_RGB565_H

#include <stdint.h>

int jpeg_to_rgb565_416(uint8_t *jpeg, uint32_t len, uint16_t *out);

#endif