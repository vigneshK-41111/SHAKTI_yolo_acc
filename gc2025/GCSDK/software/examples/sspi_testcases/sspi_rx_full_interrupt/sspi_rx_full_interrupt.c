/***************************************************************************
 * Project               	    	    :  shakti devt board
 * Name of the file	            	    :  sspi_rx_full_interrupt.c
 * Brief Description of file            :  sspi rx full interrupt code.
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
#include "uart.h"


#define USE_INTERRUPT 1
#define SSPI_SIZE 18
#define DATA_SIZE 8
#define SSPI_INSTANCE 1

uint8_t spi0_tx[SSPI_SIZE] = {0};
uint8_t spi0_rx[SSPI_SIZE] = {0};

uint8_t spi1_tx[SSPI_SIZE] = {0};
uint8_t spi1_rx[SSPI_SIZE] = {0};
uint8_t spi2_rx[SSPI_SIZE] = {0};
uint8_t spi3_rx[SSPI_SIZE] = {0};

uint8_t spi0_intr_flag = 0;
uint8_t spi1_intr_flag = 0;
uint8_t spi2_intr_flag = 0;
uint8_t spi3_intr_flag = 0;


/**
 * @brief Interrupt handler for SSPI0 Receive Full Interrupt.
 * This ISR is triggered when the RX FIFO becomes full. It reads 32 bytes of data
 * from the SSPI receive register and stores them in the `spi0_rx` buffer.
 * The function also sets the `spi0_intr_flag` indicating the interrupt was handled,
 * @param num Interrupt number
 * @return  returns 0 
 */
unsigned spi0_rx_interrupt (unsigned num)
{
	log_debug("\n sspi_instance[SSPI0_INSTANCE]->fifo_status: %x", sspi_instance[SSPI_INSTANCE]->fifo_status);
	log_debug("\n sspi_instance[SSPI0_INSTANCE]->comm_status: %x", sspi_instance[SSPI_INSTANCE]->comm_status);
if(sspi_instance[SSPI_INSTANCE]->fifo_status & SPI_RX_FULL)
	{
		for(int i = 0; i < 32; i++)
				{
					spi0_rx[i] =  sspi_instance[SSPI_INSTANCE]->data_rx;				
				}
		log_info("\n SPI 0 Receive full interrupt occurred");
	}
	spi0_intr_flag = 1;
	log_debug("\n sspi_instance[SSPI_INSTANCE]->fifo_status: %x", sspi_instance[SSPI_INSTANCE]->fifo_status);
	log_debug("\n sspi_instance[SSPI_INSTANCE]->comm_status: %x", sspi_instance[SSPI_INSTANCE]->comm_status);
}

/**
 * @brief Interrupt handler for SSPI1 Receive Full Interrupt.
 * This ISR is triggered when the RX FIFO becomes full. It reads 32 bytes of data
 * from the SSPI receive register and stores them in the `spi1_rx` buffer.
 * The function also sets the `spi1_intr_flag` indicating the interrupt was handled,
 * @param num Interrupt number
 * @return  returns 0 
 */
unsigned spi1_rx_interrupt (unsigned num)
{

	log_debug("\n sspi_instance[SSPI_INSTANCE]->fifo_status: %x", sspi_instance[SSPI_INSTANCE]->fifo_status);
	log_debug("\n sspi_instance[SSPI_INSTANCE]->comm_status: %x", sspi_instance[SSPI_INSTANCE]->comm_status);
	if(sspi_instance[SSPI_INSTANCE]->fifo_status & SPI_RX_FULL)
	{
		log_info("\n SPI 1 Receive full interrupt occurred ");
		for(int i = 0; i < 32; i++)
				{
					spi1_rx[i] =  sspi_instance[SSPI_INSTANCE]->data_rx;				
				}
	}
	spi1_intr_flag = 1;
	log_debug("\n sspi_instance[SSPI_INSTANCE]->fifo_status: %x", sspi_instance[SSPI_INSTANCE]->fifo_status);
	log_debug("\n sspi_instance[SSPI_INSTANCE]->comm_status: %x", sspi_instance[SSPI_INSTANCE]->comm_status);
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
//	else
//		sspi_configure_mas_slv(sspi_instance[SSPI_INSTANCE], ~SPI_MASTER );
	if(!lsb_first)
		sspi_configure_lsb_first(sspi_instance, MSB_FIRST);
	sspi_configure_tx_setup_time(sspi_instance, setup_time);
	sspi_configure_tx_hold_time(sspi_instance, hold_time);
}


/**
 * @brief Main function to test SSPI0 Receive Full Interrupt in Full-Duplex Mode.
 * @details function initializes and configures the SSPI peripheral in master mode to perform a full-duplex data exchange.
 * The RX Full interrupt is enabled and expected to trigger when the receive FIFO is completely filled.
 * @return int Always returns 0.
 */

int main()
{

	uint32_t temp = 0, retval = 0;
	uint8_t i = 0, j = 0;
	uint8_t temp_data = 0;
	uint32_t clk_rate = SSPI_CLOCK_FREQUENCY;
	uint8_t setup_time = SETUP_TIME_CYCLES, hold_time = HOLD_TIME_CYCLES;
	sspi_init();
	*(pinmux_config_reg) = 0x154000;
	printf("\n SSPI1 receive full Interrupt Check\n");
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
	sspi_enable_txrx(sspi_instance[SSPI_INSTANCE], ENABLE);
	temp = sspi_notbusy(sspi_instance[SSPI_INSTANCE]);
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
	sspi_instance[SSPI_INSTANCE]->intr_en = SPI_RX_FULL_INTR_EN;
	sspi_configure_tx_rx_length(sspi_instance[SSPI_INSTANCE], SSPI_SIZE * DATA_SIZE, SSPI_SIZE * DATA_SIZE);
	sspi_configure_comm_mode(sspi_instance[SSPI_INSTANCE], FULL_DUPLEX);
	sspi_enable_txrx(sspi_instance[SSPI_INSTANCE], ENABLE);
	temp = sspi_notbusy(sspi_instance[SSPI_INSTANCE]);
	delay_loop(2000, 3000);
	while (1);
	return 0;
}
