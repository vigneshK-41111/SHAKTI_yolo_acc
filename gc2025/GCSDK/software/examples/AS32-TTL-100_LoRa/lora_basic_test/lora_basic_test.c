/***************************************************************************
 * Project                     : SHAKTI Development Board
 * Name of the file            : Lora_basic_test.c
 * Brief Description of file   : Basic test to check LoRa
 * Name of Author              : Balaji Sivanallaperumal
 * Email ID                    : ospbalaji@gmail.com
 *
 * Copyright (C) 2026
 * Indian Institute of Technology Madras. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 *
 ***************************************************************************/
/**
 * @file Lora_basic_test.c
 * @brief Basic UART test to put AS32 LoRa module into sleep operation mode
 *        and read its hardware version.
 *
 * This program initializes UART peripherals, configures pin multiplexing,
 * sends the AS32 configuration command (0xC3, 0xC3, 0xC3),
 * and continuously listens for the response from the LoRa module.
 *
 * Expected output:
 * AS32-TTL-100-V8.0
 *
 * Command description:
 * 0xC3 + 0xC3 + 0xC3 : Read the hardware version of the module
 * 
 * @section pin_connections Pin Connections (AS32-TTL-100)
 *
 * | AS32 Pin | Connection        |
 * |----------|-------------------|
 * | VCC      | 3V3               |
 * | GND      | GND               |
 * | MD0      | 3V3               |
 * | MD1      | 3V3               |
 * | TXD      | UART1-RX          |
 * | RXD      | UART1-TX          |
 * | AUX      | Optional          |
 *
 */

#include "uart.h"
#include "pinmux.h"

/**
 * @brief Main entry point of the LoRa basic test application.
 *
 * - Initializes UART hardware
 * - Configures pin multiplexing
 * - Sets baud rates for debug UART and LoRa UART
 * - Sends AS32 version-read command
 * - Continuously prints received UART data
 *
 * This function never returns.
 */
void main() {
    /** Initialize UART peripherals */
    uart_init();

    /** Configure pin multiplexing for UART signals */
    *(pinmux_config_reg) = 0x55;

    /** Get pointer to LoRa UART instance (UART1) */
    uart_struct *lora_uart = uart_instance[1];

    /** Set baud rate for debug UART (UART0) */
    set_baud_rate(uart_instance[0], 19200);

    /** Set baud rate for LoRa UART (UART1) */
    set_baud_rate(uart_instance[1], 9600);

    /** UART control value (currently unused, kept for reference) */
    uint16_t control_val = (7 << 5) | (0 << 3) | (0 << 1);

    /** Flush any stale data from LoRa UART RX buffer */
    flush_uart(lora_uart);

    printf("--- LoRa AS32 Configuration Mode ---\n");

    /**
     * AS32 command sequence:
     * 0xC3 0xC3 0xC3
     * Reads the hardware version of the LoRa module
     */
    uint8_t cmd[] = {0xC3, 0xC3, 0xC3};

    printf("Sending hex: C3 C3 C3\n");

    /**
     * Transmit command bytes to LoRa module
     * Waits for TX FIFO to be available before each write
     */
    for(int i = 0; i < 3; i++) {
        /** Wait while TX FIFO is full (STS_TX_FULL = bit 1) */
        while(lora_uart->status & 0x02);
        lora_uart->tx_reg = cmd[i];
    }

    printf("Listening for response (Press Reset to stop)...\n");

    /**
     * Infinite loop to receive and print LoRa module response
     */
    while(1) {
        /** Check if RX FIFO has data (STS_RX_NOT_EMPTY = bit 2) */
        if (lora_uart->status & 0x04) {
            /** Read raw received value */
            uint32_t raw_val = lora_uart->rcv_reg;

            /** Extract lower 8 bits (actual received byte) */
            uint8_t clean_char = (uint8_t)(raw_val & 0xFF);

            /** Print ASCII characters directly, others as hex */
            if (clean_char >= 32 && clean_char <= 126) {
                printf("%c", clean_char);
            } else {
                printf("[0x%x]", clean_char);
            }
        }
    }
}
