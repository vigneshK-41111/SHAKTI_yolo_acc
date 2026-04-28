#include "jpeg_resize_rgb565.h"
#include "picojpeg.h"
#include <stdio.h>

#define IN_W  640
#define IN_H  480
#define OUT_W 416
#define OUT_H 416

static uint8_t *jpg_buf;
static uint32_t jpg_size, jpg_index;



unsigned char pj_get_byte(void)
{
    if (jpg_index >= jpg_size) return 0;
    return jpg_buf[jpg_index++];
}

int jpeg_to_rgb565_416(uint8_t *jpeg, uint32_t len, uint16_t *out)
{
    jpg_buf = jpeg;
    jpg_size = len;
    jpg_index = 0;

    pjpeg_image_info_t info;

    if (pjpeg_decode_init(&info, pj_get_byte, NULL, 0))
        return -1;

    int mcu_w = info.m_MCUWidth;
    int mcu_h = info.m_MCUHeight;
    
    int mcu_x = 0;
    int mcu_y = 0;
    printf("JPEG: %dx%d\n", info.m_width, info.m_height);
    while (1)
    {
        int status = pjpeg_decode_mcu();

        if (status)
        {
            if (status != PJPG_NO_MORE_BLOCKS)
                return -1;
            break;
        }

        // manually track MCU position
        for (int y = 0; y < mcu_h; y++)
        {
            int img_y = mcu_y * mcu_h + y;
            if (img_y >= IN_H) continue;

            int ry = (img_y * OUT_H) / IN_H;

            for (int x = 0; x < mcu_w; x++)
            {
                int img_x = mcu_x * mcu_w + x;
                if (img_x >= IN_W) continue;

                int rx = (img_x * OUT_W) / IN_W;

                uint8_t r = info.m_pMCUBufR[y * mcu_w + x];
                uint8_t g = info.m_pMCUBufG[y * mcu_w + x];
                uint8_t b = info.m_pMCUBufB[y * mcu_w + x];

                uint16_t rgb565 =
                    ((r & 0xF8) << 8) |
                    ((g & 0xFC) << 3) |
                    (b >> 3);

                out[ry * OUT_W + rx] = rgb565;
            }
        }

        // update MCU position
        mcu_x++;
        if (mcu_x * mcu_w >= IN_W)
        {
            mcu_x = 0;
            mcu_y++;
        }
    }

    return 0;
}