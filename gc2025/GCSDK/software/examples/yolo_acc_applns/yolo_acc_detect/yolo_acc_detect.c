#include <stdio.h>
#include <stdint.h>

#include "cnn_driver.h"
#include "detect.h"
// ===============================
// CONFIG
// ===============================
#define DDR_BASE        0x80000000
#define MAX_IMAGE_SIZE  (600 * 1024)   // ~600KB safety

// UART registers (adjust if needed)
#define UART_BASE       0x11300
#define UART_BAUD   (*(volatile uint32_t *)(UART_BASE + 0x00))
#define UART_TX     (*(volatile uint32_t *)(UART_BASE + 0x04))
#define UART_RX     (*(volatile uint32_t *)(UART_BASE + 0x08))
#define UART_STATUS (*(volatile uint32_t *)(UART_BASE + 0x0C))

#define RX_NOT_EMPTY (1 << 2)
#define INPUT_ADDR   0x80000000
#define OUTPUT_ADDR  0x81000000

#define CPU_FREQ 50000000   // 40 MHz
// ===============================
// GLOBAL BUFFER + FLAG
// ===============================
volatile uint8_t *img_buf = (uint8_t *)DDR_BASE;
volatile int uart_done = 0;


// ===============================
// UART READ HELPERS
// ===============================
static inline uint8_t uart_read_byte() {
    return getchar();   // uses correct UART mapping
}

static void uart_read_bytes(uint8_t *buf, uint32_t len) {
    for (uint32_t i = 0; i < len; i++) {
        buf[i] = uart_read_byte();
    }
}

static inline uint32_t read_reg(uint32_t offset)
{
    volatile uint32_t *ptr = (uint32_t *)(CNN_BASE + offset);
    return *ptr;
}
static inline uint64_t read_mtime()
{
    volatile uint32_t *mtime_lo = (uint32_t *)0x0200BFF8;
    volatile uint32_t *mtime_hi = (uint32_t *)0x0200BFFC;

    uint32_t hi1, lo, hi2;

    do {
        hi1 = *mtime_hi;
        lo  = *mtime_lo;
        hi2 = *mtime_hi;
    } while (hi1 != hi2);

    return ((uint64_t)hi1 << 32) | lo;
}


// ===============================
// RECEIVE IMAGE FUNCTION
// ===============================
int receive_image(uint32_t *out_size) {

    uint32_t size = 0;

    printf("Waiting for image size...\n");

    // ---------------------------
    // 1. Read size (4 bytes)
    // ---------------------------
    uart_read_bytes((uint8_t *)&size, 4);

    printf("Incoming size: %u bytes\n", size);

    // ---------------------------
    // 2. Safety check
    // ---------------------------
    if (size == 0 || size > MAX_IMAGE_SIZE) {
        printf("ERROR: Invalid size!\n");
        return -1;
    }

    // ---------------------------
    // 3. Receive data → DDR
    // ---------------------------
    printf("Receiving image...\n");

    for (uint32_t i = 0; i < size; i++) {
        img_buf[i] = uart_read_byte();
    }

    printf("Image received successfully!\n");

    // ---------------------------
    // 4. Cache flush (IMPORTANT)
    // ---------------------------

    // ---------------------------
    // 5. Debug verification
    // ---------------------------
    printf("First 8 bytes: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", img_buf[i]);
    }
    printf("\n");

    // ---------------------------
    // 6. Output + flag
    // ---------------------------
    *out_size = size;
    uart_done = 1;

    return 0;
}


int main()
{
    printf("Waste Detection System Start\n");

    int8_t *output = (int8_t *)OUTPUT_ADDR;

    // ⏱️ Start timing


cnn_set_input(INPUT_ADDR);
cnn_set_output(OUTPUT_ADDR);
cnn_set_size(16);

printf("SIZE REG = %x\n", read_reg(REG_SIZE));
printf("Before start: %x\n", read_reg(REG_CONTROL));
while (1) {
    uint32_t img_size;
    printf("READY\n");
    delay(1000);   // small delay so Python catches it
    // ---------------------------
    // 1. Receive image
    // ---------------------------
    if (!uart_done) {
        if (receive_image(&img_size) != 0) {
            continue;
        }
    }

    // ---------------------------
    // 2. Run CNN only after full receive
    // ---------------------------
    if (uart_done) {

        printf("[CNN] Starting...\n");
        uint64_t start = read_mtime();
        cnn_start();

        printf("After start: %x\n", read_reg(REG_CONTROL));

        cnn_wait_done();

        uint64_t end = read_mtime();

        uint64_t cycles = end - start;

        printf("[CNN] Done\n");

        // ---------------------------
        // 3. Post-process
        // ---------------------------
        #define MTIME_FREQ 50000000  // adjust if needed

        float time_ms = (float)cycles / (MTIME_FREQ / 512.0f);

        printf("\n=== Performance ===\n");
        printf("Ticks: %llu\n", cycles);
        printf("Inference Time: %.3f ms\n", time_ms);

            printf("CNN inference done\n");

            run_classification(output);
            print_named_results();

        // ---------------------------
        // 4. Reset for next frame
        // ---------------------------
        uart_done = 0;
    }
}



// // ================= DEBUG START =================

// // 1. Raw dump (first 64 values)
// printf("\n=== FEATURE MAP (first 64) ===\n");
// for (int i = 0; i < 64; i++) {
//     printf("%d ", output[i]);
// }
// printf("\n");


// // 2. Min / Max / Mean
// int min = 127, max = -128, sum = 0;

// for (int i = 0; i < GRID_SIZE * GRID_SIZE; i++) {
//     int v = output[i];
//     if (v < min) min = v;
//     if (v > max) max = v;
//     sum += v;
// }

// float mean = (float)sum / (GRID_SIZE * GRID_SIZE);

// printf("MIN=%d MAX=%d MEAN=%.2f\n", min, max, mean);


// // 3. Histogram
// int hist[256] = {0};

// for (int i = 0; i < GRID_SIZE * GRID_SIZE; i++) {
//     hist[(uint8_t)output[i]]++;
// }

// printf("\n=== HISTOGRAM ===\n");
// for (int i = 0; i < 256; i++) {
//     if (hist[i] > 0) {
//         printf("val %d count %d\n", (int8_t)i, hist[i]);
//     }
// }


// // 4. 2D view (optional but VERY useful)
// printf("\n=== FEATURE MAP GRID ===\n");
// for (int y = 0; y < GRID_SIZE; y++) {
//     for (int x = 0; x < GRID_SIZE; x++) {
//         printf("%.3d ", output[y * GRID_SIZE + x]);
//     }
//     printf("\n");
// }


    while (1);

    return 0;
}