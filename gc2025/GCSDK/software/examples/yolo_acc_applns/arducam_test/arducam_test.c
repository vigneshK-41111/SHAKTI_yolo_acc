#include <stdio.h>
#include <stdint.h>
#include "gpio_i2c.h"
#include "ov2640.h"
#include "arducam_ddr.h"

#define MAX_BUF_SIZE 200000
#define CPU_FREQ 40000000   // 40 MHz
// 🔥 Place this in DDR (IMPORTANT for your system)
__attribute__((section(".ddr")))
uint8_t ddr_buffer[MAX_BUF_SIZE];

static inline uint32_t read_cycle() {
    uint32_t cycles;
    asm volatile ("rdcycle %0" : "=r"(cycles));
    return cycles;
}

int main()
{
    printf("===== ArduCAM Capture Start =====\n");

    // -----------------------------
    // INIT
    // -----------------------------
    I2cInit();          // GPIO I2C
    arducam_init();     // SPI + camera init

    // 🔥 Choose one:
    ov2640_init_jpeg();  
    // ov2640_init_rgb565_320x240();
    uint8_t pid = ov2640_read_reg(0x0A);
    uint8_t ver = ov2640_read_reg(0x0B);

    printf("PID=%x VER=%x\n", pid, ver);
    
    uint64_t start = read_cycle();  // or timer
    uint32_t len = arducam_capture_jpeg(ddr_buffer);
    uint64_t end = read_cycle();

    double time_sec = (double)(end - start) / CPU_FREQ;
    double fps = 1.0 / time_sec;

    printf("FPS = %.2f\n", fps);
    // -----------------------------
    // CAPTURE
    // -----------------------------
    // uint32_t len = arducam_capture(ddr_buffer);

    if (len == 0)
    {
        printf("❌ Capture failed\n");
        return -1;
    }

    printf("✅ Capture success: %u bytes\n", len);

    // -----------------------------
    // DEBUG: check JPEG markers
    // -----------------------------
    if (ddr_buffer[0] == 0xFF && ddr_buffer[1] == 0xD8)
        printf("✅ JPEG SOI OK\n");
    else
        printf("❌ JPEG SOI missing\n");

    if (ddr_buffer[len-2] == 0xFF && ddr_buffer[len-1] == 0xD9)
        printf("✅ JPEG EOI OK\n");
    else
        printf("❌ JPEG EOI missing\n");

    // -----------------------------
    // DONE
    // -----------------------------
    printf("Image stored in DDR @ %x\n", ddr_buffer);

    // while (1);

    return 0;
}