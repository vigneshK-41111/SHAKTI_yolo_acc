#ifndef RESIZE_H
#define RESIZE_H

#include <stdint.h>

void resize_rgb565_to_416(
    uint8_t *src, int sw, int sh,
    uint8_t *dst, int dw, int dh);

#endif