/***************************************************************************
 * Project               	    	    :  shakti devt board
 * Name of the file	            	    :  sspi_tx_quad_interrupt.c
 * Brief Description of file            :  sspi tx quad interrupt code.
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
#include  "pinmux.h"
#include "log.h"
#include "sspi.h"
#include "uart.h"


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
 * @fn unsigned spi0_tx_quad_interrupt(unsigned num)
 * @brief SPI0 Transmit Quad interrupt service routine
 * @details This ISR handles the SPI0 transmit quad interrupt. It checks if the `SPI_TX_QUAD` flag is set 
 * in the FIFO status register and logs an info message. Then, it writes `0x0A` to the data transmit register 
 * for stopping the interrupt.and sets the `spi0_intr_flag`.
 * @param num Interrupt number
 * @return Always returns 0
 */
unsigned spi0_tx_quad_interrupt (unsigned num)
{
	log_debug("\n sspi_instance[SSPI0_INSTANCE]->fifo_status: %x", sspi_instance[SSPI_INSTANCE]->fifo_status);
	log_debug("\n sspi_instance[SSPI0_INSTANCE]->comm_status: %x", sspi_instance[SSPI_INSTANCE]->comm_status);
if(sspi_instance[SSPI_INSTANCE]->fifo_status & SPI_TX_QUAD)
	{
		log_info("\n SPI 0 Transmit Quad interrupt occurred");
	}
	sspi_instance[SSPI_INSTANCE]->data_tx = 0x0a;
	spi0_intr_flag = 1;
	log_debug("\n sspi_instance[SSPI_INSTANCE]->fifo_status: %x", sspi_instance[SSPI_INSTANCE]->fifo_status);
	log_debug("\n sspi_instance[SSPI_INSTANCE]->comm_status: %x", sspi_instance[SSPI_INSTANCE]->comm_status);
}
/**
 * @fn unsigned spi1_tx_quad_interrupt(unsigned num)
 * @brief SPI1 Transmit Quad interrupt service routine
 * @details This ISR handles the SPI1 transmit quad interrupt. It checks if the `SPI_TX_QUAD` flag is set 
 * in the FIFO status register and logs an info message. Then, it writes `0x0A` to the data transmit register 
 * for stopping the interrupt.and sets the `spi1_intr_flag`.
 * @param num Interrupt number
 * @return Always returns 0
 */
unsigned spi1_tx_quad_interrupt (unsigned num)
{
	log_debug("\n sspi_instance[SSPI_INSTANCE]->fifo_status: %x", sspi_instance[SSPI_INSTANCE]->fifo_status);
	log_debug("\n sspi_instance[SSPI_INSTANCE]->comm_status: %x", sspi_instance[SSPI_INSTANCE]->comm_status);
	if(sspi_instance[SSPI_INSTANCE]->fifo_status & SPI_TX_QUAD)
	{
		log_info("\n SPI 1 Transmit Quad interrupt occurred");
	}
	sspi_instance[SSPI_INSTANCE]->data_tx = 0x0a;
	spi1_intr_flag = 1;
	log_debug("\n sspi_instance[SSPI_INSTANCE]->fifo_status: %x", sspi_instance[SSPI_INSTANCE]->fifo_status);
	log_debug("\n sspi_instance[SSPI_INSTANCE]->comm_status: %x", sspi_instance[SSPI_INSTANCE]->comm_status);
}

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
//	else
//		sspi_configure_mas_slv(sspi_instance[SSPI_INSTANCE], ~SPI_MASTER );
	if(!lsb_first)
		sspi_configure_lsb_first(sspi_instance, MSB_FIRST);
	sspi_configure_tx_setup_time(sspi_instance, setup_time);
	sspi_configure_tx_hold_time(sspi_instance, hold_time);
}


/**
 * @brief Main function to test SSPI1 TX Quad Interrupt functionality.
 * @details This test program performs the following operations:Sets up the pinmux configuration for SSPI0.Initializes the SSPI peripheral, * *enables its clock, and clears any existing FIFO data.Configures the SSPI with specified clock settings, polarity, phase, mode, 
 * and data format.Prepares the transmit (`spi1_tx`)for data transfer.Writes data into the SSPI transmit FIFO buffer.Enables SSPI transmit quad-mode interrupt.Enters an infinite loop waiting for interrupt-based transmission to complete.look for interrupt print in console
 * @return int Always returns 0 (although the function enters an infinite loop).
 * @note SSPI_SIZE sshould be correct for successfull isr fire`, 
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
	log_debug("\n SSPI 1 Commn status: %x", sspi_instance[SSPI_INSTANCE]->comm_status);
	log_debug("\n SSPI 1 Fifo status: %x", sspi_instance[SSPI_INSTANCE]->fifo_status);
	sspi_clear_fifo(sspi_instance[SSPI_INSTANCE]);
	temp = sspi_notbusy(sspi_instance[SSPI_INSTANCE]);
	sspi_configure(sspi_instance[SSPI_INSTANCE],  clk_rate, CLK_POLARITY_HIGH, CLK_PHASE_HIGH, MASTER, SPI_MASTER, MSB_FIRST, setup_time, hold_time);
	temp = sspi_notbusy(sspi_instance[SSPI_INSTANCE]);
	plic_init();
	configure_interrupt(PLIC_INTERRUPT_35);
	isr_table[PLIC_INTERRUPT_35] = spi1_tx_quad_interrupt;
	enable_machine_global_interrupts();
	log_debug("\n SSPI 1 Commn status: %x", sspi_instance[SSPI_INSTANCE]->comm_status);
	log_debug("\n SSPI 1 Fifo status: %x", sspi_instance[SSPI_INSTANCE]->fifo_status);
	for(i = 0; i < SSPI_SIZE; i++)
	{
		spi1_rx[i] = 0;
		spi1_tx[i] = temp_data;
		temp_data += 0x01;
	}
	printf("\n Filling Fifo data");
	for(i = 0; i < SSPI_SIZE; i++)
	{
		sspi_instance[SSPI_INSTANCE]->data_tx = spi1_tx[i];
	}
	printf("\n SSPI 1 Commn status: %x", sspi_instance[SSPI_INSTANCE]->comm_status);
	printf("\n SSPI 1 Fifo status: %x", sspi_instance[SSPI_INSTANCE]->fifo_status);
	sspi_instance[SSPI_INSTANCE]->intr_en = SPI_TX_QUAD_INTR_EN;
	while(1);
	return 0;
}


