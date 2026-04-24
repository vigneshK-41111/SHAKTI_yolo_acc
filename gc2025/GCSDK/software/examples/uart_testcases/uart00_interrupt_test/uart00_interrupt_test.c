/***************************************************************************
* Project           			:  shakti devt board
* Name of the file	     		: uart00_interrupt_test
* Created date			        :  26.02.2019
* Brief Description of file             :  UART 0 Interrupt test case
* Name of Author    	                :  Akshaya B
* Email ID                              :  akshayabarat@gmail.com

 Copyright (C) 2019  IIT Madras. All rights reserved.

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <https://www.gnu.org/licenses/>.

 ***************************************************************************/
#include "gpio.h"
#include "pinmux.h"
#include "traps.h"
#include "platform.h"
#include "plic_driver.h"
#include "log.h"
#include "uart.h"

unsigned int uart0_prev_rcv_isr_count_flag = 0;
unsigned int uart1_prev_rcv_isr_count_flag = 0;
unsigned int uart2_prev_rcv_isr_count_flag = 0;

unsigned int uart0_prev_tx_isr_count_flag = 0;
unsigned int uart1_prev_tx_isr_count_flag = 0;
unsigned int uart2_prev_tx_isr_count_flag = 0;


void init_variables()
{
	uart0_complete = 0;
	uart1_complete = 0;
	uart2_complete = 0;
	uart0_tx_isr_count = 0;
	uart0_rcv_isr_count = 0;
	uart1_tx_isr_count = 0;
	uart1_rcv_isr_count = 0;
	uart2_tx_isr_count = 0;
	uart2_rcv_isr_count = 0;
	memset(u0_rcv_char,'\0', UARTX_BUFFER_SIZE);
	memset(u1_rcv_char,'\0', UARTX_BUFFER_SIZE);
	memset(u2_rcv_char,'\0', UARTX_BUFFER_SIZE);
	uart0_prev_rcv_isr_count_flag = 0;
	uart1_prev_rcv_isr_count_flag = 0;
	uart2_prev_rcv_isr_count_flag = 0;

	uart0_prev_tx_isr_count_flag = 0;
	uart1_prev_tx_isr_count_flag = 0;
	uart2_prev_tx_isr_count_flag = 0;
}


/**
 * @fn int main(void)
 * @brief UART0 interrupt test application.
 * @details
 * This function tests UART0 interrupt functionality on the Shakti SoC.
 * It initializes UART0, configures the PLIC for UART interrupt (ID 29),
 * enables global machine interrupts, and continuously monitors transmit
 * (TX) and receive (RX) interrupt flags. It periodically prints received
 * characters and interrupt counts to the console. prints what we types in console with count
 * @warning
 * Incorrect interrupt id mention may cause unexpected behavior.
 * @return Always returns 0 on success.
 */
int main(void){
	unsigned int int_id = 1;
	register uint32_t retval;
	int i;
	printf("\tUart 0 Interrupt Test\n");
	init_variables();
	printf("1"	);
	//set_baud_rate(uart_instance[0], 19200);
	printf("1"	);
	plic_init();
	configure_interrupt(29);
	isr_table[PLIC_INTERRUPT_29] = uart0_isr;
	enable_machine_global_interrupts();
	uart0_prev_tx_isr_count_flag = uart0_tx_isr_count;
	uart0_prev_rcv_isr_count_flag = uart0_rcv_isr_count;
	enable_uart_interrupts(uart_instance[0],  ENABLE_RX_NOT_EMPTY | ENABLE_RX_FULL);
	write_uart_string(uart_instance[0], "Uart 0 Interrupt TeSt");
	i = 0;
	while(1)
	{
		delay_loop(2000,1000);
		if(uart0_prev_tx_isr_count_flag != uart0_tx_isr_count)
		{
			uart0_prev_tx_isr_count_flag = uart0_tx_isr_count;
		}
		if(uart0_prev_rcv_isr_count_flag != uart0_rcv_isr_count)
		{
			uart0_prev_rcv_isr_count_flag = uart0_rcv_isr_count;
		}
		if(i++ >= 20)
		{
			u0_rcv_char[++uart0_rcv_isr_count] = '\0';
//			printf("\n TxISR Count Flag: %d", uart0_tx_isr_count_flag);
			printf("\n Rcv ISR Count Flag: %d", uart0_rcv_isr_count);
			printf("\n recv. Chars: %s", u0_rcv_char);
			i = 0;
			i = 0;
			uart0_rcv_isr_count = 0;
			memset(u0_rcv_char,'\0', UARTX_BUFFER_SIZE);
		}
	};
	return 0;
}
