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
    uint8_t b1, b2, b3;

    b1 = rd_reg(FIFO_SIZE1);
    for (volatile int i = 0; i < 500; i++);

    b2 = rd_reg(FIFO_SIZE2);
    for (volatile int i = 0; i < 500; i++);

    b3 = rd_reg(FIFO_SIZE3);
    for (volatile int i = 0; i < 500; i++);

    printf("SIZE1=%x SIZE2=%x SIZE3=%x\n", b1, b2, b3);

    return ((uint32_t)b3 << 16) | ((uint32_t)b2 << 8) | b1;
}


// ---------- INIT ----------
void arducam_init()
{
    sspi_init();

    sspi_struct *spi = sspi_instance[0];


    sspi_configure_mas_slv(spi, 1);
    sspi_configure_pins(spi, 1, 0, 1, 1);
    sspi_configure_clock_in_hz(spi, 500000); // 🔥 SLOW DOWN
    sspi_configure_comm_mode(spi, FULL_DUPLEX);
    sspi_configure_lsb_first(spi, 0);
    sspi_configure_clock_phase(spi, 1);
    sspi_configure_clock_pol(spi ,1);  // CPOL=0, CPHA=0
    sspi_configure_tx_setup_time(spi, 20);  // CS setup delay
    sspi_configure_tx_hold_time(spi, 20);   // CS hold delay

    printf("REG0 = %x\n", rd_reg(0x00));
    printf("REG0 = %x\n", rd_reg(0x00));

    printf("SSPI ready\n");
    wr_reg(0x07, 0x80);  // reset ArduChip
    for (volatile int i = 0; i < 100000; i++);

    wr_reg(0x07, 0x00);  // normal mode
    wr_reg(0x01, 0x00);  // FIFO clear flags

        uint8_t a = rd_reg(0x00);
    uint8_t b = rd_reg(0x00);

printf("TEST: %x %x\n", a, b);
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
// Step 1: clear FIFO + clear done flag
wr_reg(ARDUCHIP_FIFO, 0x01);  // flush
wr_reg(ARDUCHIP_FIFO, 0x00);  // clear

// Step 2: start capture
wr_reg(ARDUCHIP_FIFO, 0x02);

    // 🔥 REQUIRED delay
    for (volatile int i = 0; i < 200000; i++);
    printf("FIFO after start = %x\n", rd_reg(ARDUCHIP_FIFO));
    printf("TRIG FINAL = %x\n", rd_reg(ARDUCHIP_TRIG));

    // 🔥 wait for capture complete
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

    // 🔥 read FIFO length
    uint32_t len = fifo_len();
    printf("JPEG size = %u\n", len);

    if (len == 0 || len > 200000) {
        printf("Invalid JPEG length\n");
        return 0;
    }

    // ============================================
    // 🔥 CRITICAL FIX: continuous burst emulation
    // ============================================

    for (uint32_t i = 0; i < len; i++)
    {
        // send BURST command every time (hack for broken CS)
        sspi_transfer(0x3C);
        buf[i] = sspi_transfer(0x00);
    }

    return len;
}