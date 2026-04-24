#include "arducam_ddr.h"
#include "sspi.h"
#include "gpio_i2c.h"
#include "ov2640.h"

// ArduChip regs
#define ARDUCHIP_FIFO   0x04
#define ARDUCHIP_TRIG   0x41
#define FIFO_SIZE1      0x42
#define FIFO_SIZE2      0x43
#define FIFO_SIZE3      0x44
#define BURST_FIFO_READ 0x3C

#define SSPI_ID 0
#define SPI_DEV sspi_instance[SSPI_ID]

// ---------- BYTE TRANSFER ----------
static inline uint8_t sspi_transfer(uint8_t tx)
{
    sspi_struct *spi = SPI_DEV;

    // 🔥 Clear FIFO BEFORE transaction
    // sspi_clear_fifo(spi);

    sspi_configure_tx_rx_length(spi, 8, 8);
    sspi_configure_comm_mode(spi, FULL_DUPLEX);

    spi->data_tx = tx;

    // 🔥 Enable
    sspi_enable_txrx(spi, ENABLE);

    // 🔥 Wait with timeout (avoid infinite hang)
    int timeout = 10000;
    while ((spi->comm_status & 0x1) && timeout--);

    if (timeout <= 0) {
        printf("SPI STUCK!\n");
        return 0xFF;
    }

    return (uint8_t)(spi->data_rx);
}
// ---------- REG ACCESS ----------
static void wr_reg(uint8_t addr, uint8_t val)
{
    sspi_transfer(addr | 0x80);
    sspi_transfer(val);
}

static uint8_t rd_reg(uint8_t addr)
{
    sspi_transfer(addr & 0x7F);
    return sspi_transfer(0x00);
}

// ---------- FIFO ----------
static void flush_fifo() { wr_reg(ARDUCHIP_FIFO, 0x01); }
static void start_cap()  { wr_reg(ARDUCHIP_FIFO, 0x02); }

static int cap_done()
{
    return rd_reg(ARDUCHIP_TRIG) & 0x08;
}

static uint32_t fifo_len()
{
    uint32_t l = 0;
    l  = rd_reg(FIFO_SIZE1);
    l |= rd_reg(FIFO_SIZE2) << 8;
    l |= rd_reg(FIFO_SIZE3) << 16;
    return l & 0x07FFFFF;
}


// ---------- INIT ----------
void arducam_init()
{
    // 🔥 INIT GPIO I2C
    ov2640_write_reg(0xFF, 0x01);  // 🔥 SENSOR BANK
    I2cInit();

    // SPI INIT (UNCHANGED)
    sspi_init();

    sspi_struct *spi = sspi_instance[0];

    sspi_configure_mas_slv(spi, 1);
    sspi_configure_pins(spi, 1, 0, 1, 1);
    sspi_configure_clock_in_hz(spi, 8000000);
    sspi_configure_comm_mode(spi, FULL_DUPLEX);
    sspi_configure_lsb_first(spi, 0);

    // sspi_clear_fifo(spi);
    // wr_reg(0x00, 0x55);
    // uint8_t test = rd_reg(0x00);

    // printf("SPI TEST = %x\n", test);

    printf("SSPI ready\n");

    // 🔥 CAMERA INIT
    ov2640_init_rgb565_320x240();
}
// ---------- CAPTURE ----------
uint32_t arducam_capture(uint8_t *buf)
{
    flush_fifo();
    start_cap();

    // timeout protection
    int timeout = 1000000;
    while (!cap_done() && timeout--);

    if (timeout <= 0) {
        printf("Capture timeout\n");
        return 0;
    }

    uint32_t len = fifo_len();

    printf("FIFO len = %u\n", len);

    // 🚨 SAFETY CHECK (CRITICAL)
    if (len == 0 || len > 200000) {
        printf("Invalid FIFO length: %u\n", len);
        return 0;
    }

    // Burst read
    sspi_transfer(BURST_FIFO_READ);

    for (uint32_t i = 0; i < len; i++)
    {
        buf[i] = sspi_transfer(0x00);
    }

    return len;
}

uint32_t arducam_capture_jpeg(uint8_t *buf)
{
    printf("Capturing JPEG frame...\n");

    flush_fifo();
    printf("FIFO after flush = %x\n", rd_reg(ARDUCHIP_FIFO));

    start_cap();
    printf("FIFO after start = %x\n", rd_reg(ARDUCHIP_FIFO));

    int timeout = 500000;

    while (timeout--)
    {
        uint8_t trig = rd_reg(ARDUCHIP_TRIG);

        if (timeout % 100000 == 0)
            printf("TRIG = 0x%x\n", trig);

        if (trig & 0x08)
            break;
    }

    if (timeout <= 0) {
        printf("Capture timeout\n");
        return 0;
    }

    uint32_t len = fifo_len();

    printf("JPEG size = %u\n", len);

    // if (len == 0 || len > 200000) {
    //     printf("Invalid JPEG length\n");
    //     return 0;
    // }

    sspi_transfer(0x3C);

    for (uint32_t i = 0; i < 1000; i++) {
        buf[i] = sspi_transfer(0x00);
    }

    return len;
}