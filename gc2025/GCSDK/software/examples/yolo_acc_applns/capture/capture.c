#include <stdio.h>
#include <stdint.h>
#include "uart.h"

// Destination address in DDR (e.g., 0x80000000)
#define DDR_FRAME_BUFFER  0x80400000
#define MAX_BYTES         (416 * 416 * 3)

/**
 * @brief Handles the synchronization and reception of raw image data.
 * 
 * @param buffer Pointer to the DDR memory location where pixels will be stored.
 * @return int 0 on success, -1 on failure.
 */
int stream_image_to_ddr(uint8_t *buffer) {
    uint32_t incoming_size = 0;
    uint8_t size_header[4];

    // 1. Drain RX Buffer: Discard any noise/garbage before starting
    while ( (uart_instance[0]->status & STS_RX_NOT_EMPTY) ) {
        getchar(); 
    }

    // 2. Handshake: Signal Python script to begin transmission
    printf("READY\n");

    // 3. Receive 4-byte size (Little Endian)
    for (int i = 0; i < 4; i++) {
        size_header[i] = (uint8_t)getchar();
    }
    incoming_size = *(uint32_t*)size_header;

    // 4. Validation: Check if size fits our buffer
    if (incoming_size == 0 || incoming_size > MAX_BYTES) {
        printf("[ERROR] Protocol Mismatch. Got size: %u\n", incoming_size);
        return -1;
    }

    // 5. Binary Stream: Pull data from UART FIFO directly to DDR
    // WARNING: Do not put any 'printf' inside this loop!
    for (uint32_t i = 0; i < incoming_size; i++) {
        buffer[i] = (uint8_t)getchar();
    }

    return 0;
}

int main() {
    // Standard UART Setup
    uart_init();
    set_baud_rate(uart_instance[0], 115200);

    printf("[SYSTEM] UART Capture Module Initialized.\n");

    while (1) {
        // Attempt to capture a frame
        if (stream_image_to_ddr((uint8_t *)DDR_FRAME_BUFFER) == 0) {
            
            // On Success: Signal completion for the Python script
            printf("[SUCCESS] Frame stored at 0x%08x\n", DDR_FRAME_BUFFER);
            printf("DONE\n");
            // Add this inside main() after capture is done
            uint8_t *pixel_check = (uint8_t *)DDR_FRAME_BUFFER;
            printf("[DEBUG] First Pixel (R,G,B): %d, %d, %d\n", pixel_check[0], pixel_check[1], pixel_check[2]);
            
        } else {
            // On Failure: Brief pause before retrying
            printf("[RETRY] Sync failed.\n");
            for(volatile int d = 0; d < 1000000; d++);
        }
        
        // Cooldown delay between frames
        for(volatile int d = 0; d < 5000000; d++);
    }

    return 0;
}