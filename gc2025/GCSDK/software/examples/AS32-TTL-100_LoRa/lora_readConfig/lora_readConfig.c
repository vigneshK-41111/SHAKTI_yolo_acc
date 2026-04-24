/***************************************************************************
 * Project                     : SHAKTI Development Board
 * Name of the file            : Lora_read_config.c
 * Brief Description of file   : Reads configuration parameters from AS32 LoRa module using UART
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
/**
 * @file Lora_read_config.c
 * @brief Reads configuration parameters from AS32 LoRa module using UART.
 *
 * This program places the AS32 LoRa module in configuration mode and
 * reads its current configuration parameters by sending the command
 * sequence 0xC1, 0xC1, 0xC1 over UART.
 *
 * @section expected_output 
 * Expected Output
 *
 * --- SHAKTI AS32 Configuration Reader ---
 * Sending Read Command: 0xC1 0xC1 0xC1
 * Waiting for 6-byte response...
 *
 * --- Module Settings Found ---
 * HEAD: 0xC0 (Should be C0 or C2)
 * ADDH: 0x00
 * ADDL: 0x00
 * Speed: 0x1A
 * CHAN: 23 (Freq: 433 MHz)
 * Option: 0x40
 * -----------------------------  
 *
 * Command description:
 * 0xC1 + 0xC1 + 0xC1 : Read module parameters
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
 * @brief Main entry point for AS32 configuration read test.
 *
 * - Initializes UART
 * - Sends read-parameter command to AS32 module
 * - Receives and prints module configuration bytes
 *
 * This function runs indefinitely.
 */
void main() {
    /** Initialize UART */
    uart_init();

    /** Configure pinmux for UART */
    *(pinmux_config_reg) = 0x55;

    /** Get UART instance connected to AS32 LoRa module */
    uart_struct *lora_uart = uart_instance[1];

    /** Set UART baud rate for AS32 configuration mode */
    set_baud_rate(lora_uart, 9600);

    /** Clear RX buffer before communication */
    flush_uart(lora_uart);

    printf("\n--- SHAKTI AS32 Configuration Reader ---\n");

    /**
     * AS32 read configuration command:
     * 0xC1 0xC1 0xC1
     */
    uint8_t readCmd[] = {0xC1, 0xC1, 0xC1};
    printf("Sending Read Command: 0xC1 0xC1 0xC1\n");

    /** Transmit read command to LoRa module */
    for (int i = 0; i < 3; i++) {
        /** Wait until TX FIFO is not full (STS_TX_FULL = bit 1) */
        while(lora_uart->status & 0x02);
        lora_uart->tx_reg = readCmd[i];
    }

    /** Buffer to store received configuration bytes */
    uint8_t settings[6];

    /** Counter for received bytes */
    int bytes_received = 0;

    printf("Waiting for 6-byte response...\n");

    /**
     * Receive and decode configuration response
     */
    while(1) {
        /** Check if RX FIFO contains data (STS_RX_NOT_EMPTY = bit 2) */
        if (lora_uart->status & 0x04) {
            /** Read received byte */
            uint8_t raw_byte = (uint8_t)(lora_uart->rcv_reg & 0xFF);

            /** Ignore leading zero bytes if any */
            if (raw_byte == 0 && bytes_received == 0)
                continue;

            settings[bytes_received] = raw_byte;
            bytes_received++;

            /** Once full configuration frame is received */
            if (bytes_received == 6) {
                printf("\n--- Module Settings Found ---\n");
                printf("HEAD  : 0x%x (Expected: C0 or C2)\n", settings[0]);
                printf("ADDH  : 0x%x\n", settings[1]);
                printf("ADDL  : 0x%x\n", settings[2]);
                printf("Speed : 0x%x\n", settings[3]);
                printf("CHAN  : %d (Freq: %d MHz)\n",
                       settings[4], (410 + settings[4]));
                printf("Option: 0x%x\n", settings[5]);
                printf("-----------------------------\n");

                /** Reset counter to allow continuous reads */
                bytes_received = 0;
            }
        }
    }
}
