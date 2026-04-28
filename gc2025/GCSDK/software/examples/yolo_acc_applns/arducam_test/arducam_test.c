#include <stdio.h>
#include <stdint.h>
#include "gpio_i2c.h"
#include "ov2640.h"
#include "arducam_ddr.h"
#include "jpeg_resize_rgb565.h"

#define MAX_BUF_SIZE 300000
#define OUT_W 416
#define OUT_H 416
#define CPU_FREQ 40000000

__attribute__((section(".ddr")))
uint8_t jpeg_buffer[MAX_BUF_SIZE];

__attribute__((section(".ddr")))
uint16_t rgb565_buffer[OUT_W * OUT_H];

static inline uint32_t read_cycle() {
    uint32_t cycles;
    asm volatile ("rdcycle %0" : "=r"(cycles));
    return cycles;
}

int main()
{
    printf("===== JPEG → 416x416 RGB565 =====\n");

    // ---------------- INIT ----------------
    I2cInit();
    arducam_init();

    ov2640_init_jpeg_vga();

    // ---------------- SENSOR CHECK ----------------
    uint8_t pid = ov2640_read_reg(0x0A);
    uint8_t ver = ov2640_read_reg(0x0B);
    printf("PID=%x VER=%x\n", pid, ver);

    // 🔥 FIX: correct bank before MID read
    ov2640_write_reg(0xFF, 0x01);
    uint8_t midh = ov2640_read_reg(0x1C);
    uint8_t midl = ov2640_read_reg(0x1D);
    printf("MID=%x %x\n", midh, midl);

    // back to DSP bank
    ov2640_write_reg(0xFF, 0x00);

    // if (midh == 0xFF || midl == 0xFF) {
    //     printf("❌ I2C read issue (MID invalid)\n");
    //     return -1;
    // }

    // ---------------- CAPTURE ----------------
    uint32_t start = read_cycle();

    uint32_t jpeg_len = arducam_capture_jpeg(jpeg_buffer);

    if (jpeg_len == 0 || jpeg_len > MAX_BUF_SIZE) {
        printf("❌ Capture failed\n");
        return -1;
    }

    printf("JPEG size = %u\n", jpeg_len);

    // ---------------- VALIDATE JPEG ----------------
    if (!(jpeg_buffer[0] == 0xFF && jpeg_buffer[1] == 0xD8)) {
        printf("❌ Invalid JPEG (SOI missing)\n");
        return -1;
    }

    if (!(jpeg_buffer[jpeg_len-2] == 0xFF && jpeg_buffer[jpeg_len-1] == 0xD9)) {
        printf("❌ Invalid JPEG (EOI missing)\n");
        return -1;
    }

    printf("Decoding + Resizing...\n");

    // ---------------- DECODE ----------------
    if (jpeg_to_rgb565_416(jpeg_buffer, jpeg_len, rgb565_buffer) != 0) {
        printf("❌ Decode failed\n");
        return -1;
    }

    uint32_t end = read_cycle();
    double fps = CPU_FREQ / (double)(end - start);

    printf("✅ RGB565 (416x416) @ %x\n", rgb565_buffer);
    printf("FPS = %.2f\n", fps);

    return 0;
}