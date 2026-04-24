#include "resize.h"

void resize_rgb565_to_416(
    uint8_t *src, int sw, int sh,
    uint8_t *dst, int dw, int dh)
{
    for (int y = 0; y < dh; y++)
    {
        for (int x = 0; x < dw; x++)
        {
            int sx = x * sw / dw;
            int sy = y * sh / dh;

            int idx = (sy * sw + sx) * 2;

            uint16_t p = (src[idx] << 8) | src[idx + 1];

            uint8_t r = (p >> 11) & 0x1F;
            uint8_t g = (p >> 5)  & 0x3F;
            uint8_t b = p & 0x1F;

            // expand
            r <<= 3;
            g <<= 2;
            b <<= 3;

            int didx = (y * dw + x) * 3;

            dst[didx + 0] = r;
            dst[didx + 1] = g;
            dst[didx + 2] = b;
        }
    }
}