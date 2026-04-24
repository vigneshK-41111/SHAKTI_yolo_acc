/***************************************************************************
 * Project               	    	    :  shakti devt board
 * Name of the file	            	    :  sspi_rx_empty_interrupt.c
 * Brief Description of file            :  sspi rx empty interrupt code.
 * Name of Author    	                :  Kotteeswaran
 * Email ID                             :  kottee.1@gmail.com

 Copyright (C) 2025  IIT Madras. All rights reserved.

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
/*Connection Details:
In FPGA Board check the Pinmux pins for SPI1 and short the MOSI and MISO pins of SPI1 according to board schematics.
*/
#include "platform.h"
#include "plic_driver.h"
#include "log.h"
#include "pinmux.h"
#include "sspi.h"
#ifdef BSOC
#include "uartv3.h"
#else
#include "uart.h"
#endif

#define USE_INTERRUPT 1
#define SSPI_SIZE 8
#define DATA_SIZE 8
#define SSPI_INSTANCE 1

uint8_t spi0_tx[SSPI_SIZE] = {0};
uint8_t spi0_rx[SSPI_SIZE] = {0};

uint8_t spi1_tx[SSPI_SIZE] = {0};
uint8_t spi1_rx[SSPI_SIZE] = {0};

uint8_t spi0_intr_flag = 0;
uint8_t spi1_intr_flag = 0;
uint8_t spi2_intr_flag = 0;
uint8_t spi3_intr_flag = 0;

/**
 * @brief Interrupt handler for SPI0 RX Empty interrupt.
 * This function is triggered when the SPI0 RX FIFO is empty, indicating that
 * the receiver is ready for more data. It enables the TX/RX functionality 
 * of the SPI interface and sets a flag to indicate that the interrupt has occurred.
 * @param num The interrupt number or identifier.
 */
unsigned spi0_rx_interrupt (unsigned num)
{
	sspi_enable_txrx(sspi_instance[SSPI_INSTANCE], ENABLE);
	printf("\nSPI 0 Receive Empty Interrupt Occurred\n", num);
	spi0_intr_flag = 1;
}

/**
 * @brief Interrupt handler for SPI1 RX Empty interrupt.
 * This function is triggered when the SPI1 RX FIFO is empty, indicating that
 * the receiver is ready for more data. It enables the TX/RX functionality 
 * of the SPI interface and sets a flag to indicate that the interrupt has occurred.
 * @param num The interrupt number or identifier.
 */
unsigned spi1_rx_interrupt (unsigned num)
{
	printf("\nSPI 1 Receive Empty Interrupt Occurred\n", num);
	sspi_enable_txrx(sspi_instance[SSPI_INSTANCE], ENABLE);
	spi1_intr_flag = 1;
}



/** @fn sspi_configure(sspi_struct *sspi_instance, uint32_t clk_rate, uint8_t clk_pol, uint8_t clk_phase, uint8_t pins_master, uint8_t mas_slv, uint8_t lsb_first, uint8_t setup_time, uint8_t hold_time) 
 * @brief sspi configuration function which configures the SSPI registers
 * @details Configures the SSPI registers like control register, clock register, etc. 
 * @warning No warning
 * @param[in] sspi_struct *sspi_instance ---> instance of SSPI that needs to be configured
 * 			  clk_rate --> SSPI clock frequency.
 * 			  clk_pol --> Polarity of the clock
 * 			  clk_phase --> Phase of the clock, 
 * 			  pins_master --> SPI pin functionality (master or slave)
 * 			  mas_slv --> SSPI Master / SSPI Slave, 
 * 			  lsb_first --> Bit transfer (MSB first / LSB first),
 *  		  setup_time --> Delay in data transfer after CS is low and before the data transmit starts,
 * 			  hold_time ---> Delay after data transfer completes and before CS becomes high.
 * @param[Out] No output parameter
 */
void sspi_configure(sspi_struct *sspi_instance, uint32_t clk_rate, uint8_t clk_pol, uint8_t clk_phase, uint8_t pins_master, uint8_t mas_slv, uint8_t lsb_first, uint8_t setup_time, uint8_t hold_time)
{
 	sspi_enable_txrx(sspi_instance, DISABLE);
	sspi_configure_clock(sspi_instance, clk_rate, clk_pol, clk_phase);
	sspi_configure_clock_in_hz(sspi_instance, clk_rate); /* Currently configuring for 100kHz, as the maximum clock is 20MHz */
	sspi_configure_clock_pol(sspi_instance, clk_pol);
	sspi_configure_clock_phase(sspi_instance, clk_phase);	
	if(pins_master)
		sspi_configure_pins(sspi_instance, 1, 0 ,  1 , 1);
	else
		sspi_configure_pins(sspi_instance, 0, 1 ,  0 , 0);
	if(mas_slv)
		sspi_configure_mas_slv(sspi_instance, SPI_MASTER);
	if(!lsb_first)
		sspi_configure_lsb_first(sspi_instance, MSB_FIRST);
	sspi_configure_tx_setup_time(sspi_instance, setup_time);
	sspi_configure_tx_hold_time(sspi_instance, hold_time);
}

/**
 * @brief Main function for setting up and handling SPI communication with RX Empty Interrupt.
 * @details function configures the SSPI for full-duplex communication, 
 * sets up the RX Empty interrupt, and transmits data from the TX buffer. The function 
 * waits for interrupts to handle received data through the SPI interface.
 * @return int Returns 0 upon successful completion (although this is unreachable in this infinite loop).
 */
int main()
{
	uint32_t temp = 0, retval = 0;
	uint8_t i = 0, j = 0;
	uint8_t temp_data = 0;
	uint32_t clk_rate = SSPI_CLOCK_FREQUENCY;
	uint8_t setup_time = SETUP_TIME_CYCLES, hold_time = HOLD_TIME_CYCLES;

	*(pinmux_config_reg) = 0x154000;
	sspi_init();
	printf("\n SSPI1 rx empty Interrupt Check");
	sspi_clear_fifo(sspi_instance[SSPI_INSTANCE]);
	temp = sspi_notbusy(sspi_instance[SSPI_INSTANCE]);
	sspi_configure(sspi_instance[SSPI_INSTANCE], clk_rate, CLK_POLARITY_HIGH, CLK_PHASE_HIGH, MASTER, SPI_MASTER, MSB_FIRST, setup_time, hold_time);
	temp = sspi_notbusy(sspi_instance[SSPI_INSTANCE]);
	plic_init();
	configure_interrupt(PLIC_INTERRUPT_35);
	isr_table[PLIC_INTERRUPT_35] = spi1_rx_interrupt;
	enable_machine_global_interrupts();
	temp_data = 0x01;
	for (i = 0; i < SSPI_SIZE; i++)
	{
		spi1_rx[i] = 0;
		spi1_tx[i] = temp_data;
		temp_data += 0x01;
	}
	for (i = 0; i < SSPI_SIZE; i++)
	{
		sspi_instance[SSPI_INSTANCE]->data_tx = spi1_tx[i];
	}
	sspi_configure_tx_rx_length(sspi_instance[SSPI_INSTANCE], SSPI_SIZE * DATA_SIZE, SSPI_SIZE * DATA_SIZE);
	sspi_configure_comm_mode(sspi_instance[SSPI_INSTANCE], FULL_DUPLEX);
	sspi_instance[SSPI_INSTANCE]->intr_en = SPI_RX_EMPTY_INTR_EN;
	delay_loop(1000, 1000);
	while (1)
		;
	return 0;
}
