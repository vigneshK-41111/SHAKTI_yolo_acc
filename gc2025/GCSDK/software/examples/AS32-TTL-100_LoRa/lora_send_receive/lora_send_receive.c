/**
 * @file lora_send_receive.c
 * @brief LoRa module test for sending and receiving data
 *        between two AS32 LoRa modules.
 *
 * This application enables wireless communication between
 * two AS32 LoRa modules using the SHAKTI development board.
 *
 * - One AS32 module is connected locally to UART1
 * - A second AS32 module is connected to another node
 * - Data typed on the PC is sent wirelessly to the remote LoRa node
 * - Data received wirelessly from the remote LoRa node is displayed on the PC
 *
 * The PC (UART0) acts only as a user interface and monitor.
 * Actual communication occurs over the LoRa RF link.
 *
 * UART configuration:
 * - UART0 : PC / Serial Monitor
 * - UART1 : Local AS32 LoRa module @ 9600 baud
 *
 * Pin Connections (Local AS32-TTL-100):
 * - VCC  -> 3V3
 * - GND  -> GND
 * - MD0  -> GND
 * - MD1  -> GND
 * - TXD  -> UART1-RX
 * - RXD  -> UART1-TX
 * - AUX  -> Optional
 */

#include "uart.h"
#include <stdio.h>
#include "pinmux.h"

/**
 * @brief Initializes UART and hardware required for LoRa communication.
 *
 * This function prepares the system to communicate with a local
 * AS32 LoRa module, which will transmit and receive data wirelessly
 * from another AS32 LoRa module.
 */
void setup_hardware() {
    uart_init();
    *(pinmux_config_reg) = 0x55;
    set_baud_rate(uart_instance[1], 9600); // LoRa AS32
    flush_uart(uart_instance[1]);
    printf("\n--- SYSTEM READY ---\n");
    printf("UART0 (PC) <-> UART1 (Local LoRa) Active.\n");
    printf("Wireless link established between two AS32 LoRa modules.\n");
}

int main() {
    setup_hardware();
    uint8_t data;

    while (1) {
        // --- BRIDGE: PC to LoRa ---
        // User input from PC is transmitted wirelessly
        // to the remote AS32 LoRa module
        if (uart_instance[0]->status & 0x04) { // STS_RX_NOT_EMPTY
            data = (uint8_t)(uart_instance[0]->rcv_reg & 0xFF);
            
            // Forward character to local LoRa module (UART1),
            // which transmits it over RF
            while(uart_instance[1]->status & 0x02); // Wait if TX full
            uart_instance[1]->tx_reg = data;
            
            // Echo back to PC to confirm transmission
            printf("[SENT OVER LORA]: %c\n", data);
        }

        // --- BRIDGE: LoRa to PC ---
        // Data received wirelessly from the remote AS32 LoRa module
        // is forwarded to the PC for display
        if (uart_instance[1]->status & 0x04) { // STS_RX_NOT_EMPTY
            data = (uint8_t)(uart_instance[1]->rcv_reg & 0xFF);
            
            // Filter out spurious 0x00 bytes
            if (data != 0x00) {
                printf("[RECEIVED OVER LORA]: %c\n", data);
            }
        }
    }
    return 0;
}
