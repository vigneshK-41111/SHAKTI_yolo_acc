#include "ov2640.h"
#include "gpio_i2c.h"
#include <stdint.h>
#include <stdio.h>

#define OV2640_ADDR 0x60   // keep 8-bit
#define I2C_DELAY   10     // 🔥 tune this if unstable

// ---------- WRITE REGISTER ----------
void ov2640_write_reg(uint8_t reg, uint8_t val)
{
    I2cSendSlaveAddress(0x60, I2C_WRITE, 10);
    I2cWriteData(reg, 10);
    I2cWriteData(val, 10);
    I2cStop(10);
}

// ---------- READ REGISTER ----------
uint8_t ov2640_read_reg(uint8_t reg)
{
    uint8_t val;

    // select register
    I2cSendSlaveAddress(0x60, I2C_WRITE, 10);
    I2cWriteData(reg, 10);

    // repeated start
    I2cStart(10);

    // read
    I2cSendSlaveAddress(0x60, I2C_READ, 10);
    val = I2cReadDataNack(10);

    I2cStop(10);

    return val;
}

// ---------- INIT RGB565 ----------
void ov2640_init_rgb565_320x240(void)
{
    printf("OV2640 init start\n");

    I2cInit();  // 🔥 IMPORTANT

    // RESET
    ov2640_write_reg(0xFF, 0x01);
    ov2640_write_reg(0x12, 0x80);

    for (volatile int i = 0; i < 200000; i++);

    // RGB565
    ov2640_write_reg(0xFF, 0x00);
    ov2640_write_reg(0xDA, 0x08);

    // QVGA
    ov2640_write_reg(0xFF, 0x01);
    ov2640_write_reg(0x12, 0x40);

    printf("OV2640 init done\n");
}

// ---------- INIT JPEG ----------
void ov2640_init_jpeg(void)
{
    printf("OV2640 JPEG init\n");

    ov2640_write_reg(0xFF, 0x01);
    ov2640_write_reg(0x12, 0x80); // reset

    for (volatile int i = 0; i < 200000; i++);

    // JPEG mode
    ov2640_write_reg(0xFF, 0x00);
    ov2640_write_reg(0xE0, 0x14); // JPEG enable
    ov2640_write_reg(0xDA, 0x10);

    // QVGA
    ov2640_write_reg(0xFF, 0x01);
    ov2640_write_reg(0x12, 0x40);

    printf("OV2640 JPEG init done\n");
}