/***************************************************************************
* Project                               : shakti devt board
* Name of the file                      : spansion_read.c
* Brief Description of file             : Reads a application data from flash and copy to ram.
* Name of Author                        : Kotteeswaran Ekambaram
* Email ID                              : kottee.off@gmail.com

 Copyright (C) 2020  IIT Madras. All rights reserved.

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
/**
@file spansion_read.c
@brief   Reads a application data from flash and copy to ram.
@detail Contains the code to erase a sector of on-board flash using spi
protocol.
*/

#include <stdint.h>
#include "sspi.h"
#include "boot.h"



#define  WRITE_SIZE write_data[0]
#define  READ_SIZE 10
#define FLASH_BASE_ADDRESS 0x00b00000
#define SSPI_INSTANCE 0
unsigned char str1[] = "Control transferred to RAM";

/** @fn void delay_loop(unsigned long cntr1, unsigned long cntr2)
 * @brief Delay calculated interms of iterative operation
 * @param unsigned long cntr1 - one counter value
 * @param unsigned long cntr2 - another counter value
 */
void delay_loop(unsigned long cntr1, unsigned long cntr2)
{
	unsigned long tmpCntr = cntr2;

	while (cntr1--)
	{
		tmpCntr = cntr2;

		while (tmpCntr--);
	}
}
void jumpToRAM()
{
//	printf("\n%s\n","Control transferred to RAM");
	printf("\n%s\n",str1);
	// delay_loop(1000,2000);
	// while(1);
	asm volatile("fence.i");
	asm volatile( "li x30, 0x80000000" "\n\t"
			"jr x30" "\n\t"
			:
			:
			:"x30","cc","memory"
		    );
}


/** @fn void main()
 * @brief Configures the SPI flash and writes into a flash location.
 * @details Configures the SPI flash, Confirms the flash device id,erases a sector
 *           and then write into a flash location and prints the value.
 */
void main()
{
	int read_address  = FLASH_BASE_ADDRESS;  // read/write from/to this address
	int  data = 0, count = 0; //32 bits of data can be written at a time
	uint32_t length = 11;
	int* bram_address = (int*) 0x80000000;
	printf("%s\n SHAKTI PROCESSORS \n",bootlogo);
	printf("Booting on YAMUNA! hart 0 \n");
	printf("YAMUNA is a SoC build on top of Artix7 100T.\n");
	printf("The core belongs to Shakti C class, 64 bit.\n");
	printf("Supported ISA: RV32IMACSU.\n");
	sspi_init();
	flash_init();

	// printf("SPI init done\n");
	// printf("\n Com status: %x", sspi_instance[0] -> comm_status);
	// printf("\n FIFO status: %x", sspi_instance[0] -> fifo_status);
	sspi_clear_fifo(sspi_instance[SSPI_INSTANCE]);
	flash_register_read(0x35);
	flash_register_read(0x05);
	// flash_write_bank_register(0x17, 0x80);
	flash_register_read(0x16);
	//printf("\n device id is %x",flash_device_id());

	flash_device_id();
/*
	while(1);
	flash_register_read(0x16);
	printf("\n Com status: %x", sspi_instance[0] -> comm_status);
	printf("\n FIFO status: %x", sspi_instance[0] -> fifo_status);
	waitfor(200);
	delay_loop(1000, 1000);
*/
	// printf("\n Flash device id read complete");
	sspi_clear_fifo(sspi_instance[SSPI_INSTANCE]);
	count = flash_read(read_address);
	printf("\n count value: %x", count);
/*
	printf("\n Com status: %x", sspi_instance[0] -> comm_status);
	printf("\n FIFO status: %x", sspi_instance[0] -> fifo_status);
	sspi_clear_fifo(sspi_instance[SSPI_INSTANCE]);
	printf("\n Com status: %x", sspi_instance[0] -> comm_status);
	printf("\n FIFO status: %x", sspi_instance[0] -> fifo_status);
	count = flash_read(read_address + 4);
	printf("\n count value: %x", count);
	count = flash_read(read_address + 8);
	printf("\n count value: %x", count);
	count = flash_read(read_address + 12);
	printf("\n count value: %x", count);
	count = flash_read(read_address + 12);
	printf("\n count value: %x", count);
	count = flash_read(read_address + 16);
	printf("\n count value: %x", count);
	while(1);
	*/
	if(0xFFFFFFFF != count)
	{
		printf("\n Valid data in flash. Read count: %x", count);
	read_address += 4;
	for(int i = 1; i < count; i++)
	{
		data = flash_read(read_address);
		// printf("\n read data[%x]: %x", read_address, data);
//		printf("\n Addr: %x; wdata: %x; rdata: %x", read_address, write_data[i], data);
		delay_loop(10, 5);
#if 0
		if(data != write_data[i])
			{
				printf("\n Error in read data @ Address: %x", read_address);
				return 1;
			}
#endif			
				*(bram_address) = data;
	bram_address++;
	read_address += 4;
	}
	// printf("\n\nread complete.\n");
	jumpToRAM();
	asm volatile ("ebreak");
	}
	else
	{
		printf("\n No valid data in flash");
		printf("\n Upload application data to flash using flash_write application");
		while(1);
	}

}
