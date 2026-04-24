/***************************************************************************
* Project                     : shakti devt board
* Name of the file	      : clint_driver.c
* Brief Description of file   : source file for clint.
* Name of Author    	      : Sathya Narayanan N
* Email ID                    : sathya281@gmail.com

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
/**
@file clint_driver.c
@brief source file for clint.
@detail This file is a driver file for clint. The file contains the clint 
interrupt handler, configure the counter and support for e and c class clint timers. 
*/

#include "clint_driver.h"
#include "log.h"
#include "platform.h"
#include "defines.h"

#ifdef sos
#include "gpiov2.h"
#endif

volatile uint64_t* mtime     =  (MTIME);
volatile uint64_t* mtimecmp0 =  (MTIMECMP0);
volatile uint64_t* mtimecmp1 =  (MTIMECMP1);
volatile uint32_t* msip0     =  (MSIP0);
volatile uint32_t* msip1     =  (MSIP1);

volatile uint32_t* mtime_l     =  (volatile uint32_t* ) (MTIME_L);
volatile uint32_t* mtime_h     =  (volatile uint32_t* ) (MTIME_H);
volatile uint32_t* mtimecmp_l     =  (volatile uint32_t* ) (MTIMECMP0_L);
volatile uint32_t* mtimecmp_h     =  (volatile uint32_t* ) (MTIMECMP0_H);



/** @fn static uint64_t mhartid_read()
 * @brief return the hart ID of the current core
 * @details Reads mhartid CSR (XLEN-wide) and returns it as uint64_t.
 *          Safe for both RV32 and RV64.
 * @return unsigned 64bit hart ID
 */
static uint64_t mhartid_read(void)
{
  unsigned long hartid;
  asm volatile ("csrr %0, mhartid" : "=r"(hartid));
  return (uint64_t)hartid;
}

/** @fn static unsigned long mtime_low( )
 * @brief return the lower 32bit of mtime.
 * @details return the lower half of mtime. And this is needed mostly in dealing mtime in 32 bit machines.
 * @return unsigned long
 */
static uint32_t mtime_low(void)
{
  return *(uint32_t *)(MTIME);
}

/*
Get each 32 bit and append for full timer value
*/

/** @fn static uint32_t mtime_high(void)
 * @brief return the upper 32 bit of mtime
 * @details return the upper 32 bit of mtime register. This is very useful incase of 32 bit core.
 *          Incase of 64 bit core this has to be appended with lower 32 bits adn sent.
 * @return unsigned 32bit int
 */
static uint32_t mtime_high(void)
{
  return *(volatile uint32_t *)(MTIME + 4);
}

/** @fn uint64_t get_timer_value()
 * @brief return the mtime value for a 32 bit or 64 bit machine
 * @details return the mtime value based on the __riscv_xlen. Incase of 64 bit, this joins the upper
 *          and lower 32 bits of mtime and return
 * @return unsigned 64bit int
 */
uint64_t get_timer_value()
{

#if __riscv_xlen == 64
   return ( ((uint64_t)mtime_high() << 32) | mtime_low());
#else
  return mtime_low();
#endif
}

/** @fn uint64_t get_hart_id()
 * @brief return hart ID in 64-bit format
 * @return unsigned 64bit hart ID
 */
uint64_t get_hart_id(void)
{
  unsigned long hartid;
  asm volatile ("csrr %0, mhartid" : "=r"(hartid));
  return (uint64_t)hartid;
}


/** @fn void configure_counter( uint64_t value)
 * @brief sets up the timer
 * @details sets the mtimecmp to current mtime + delta
 * @param unsigned 64bit int (delta value after which interrupt happens)
 */
void configure_counter( uint64_t value)
{
	log_trace("\nconfigure_counter entered\n");

	uint64_t hartid = get_hart_id();
	printf("\n Hard ID: %x", hartid);


  	if (hartid == 0) {
#ifdef yamuna
	uint64_t temp_value;
	log_trace("\nconfigure_counter entered\n");
	temp_value = ((*mtime_h << 32) | (*mtime_l)) + value;
	//*mtimecmp = *mtime + value;
	*mtimecmp_h = temp_value >> 32;
	*mtimecmp_l = temp_value & 0xFFFFFFFF;
	printf("mtime value: %lx ", ((*mtime_h << 32) | (*mtime_l)));
	printf("\ntemp_value:  %lx ", temp_value);
#else

		*mtimecmp0 = *mtime + value;
		log_debug("mtimecmp0 value = %d\n", *mtimecmp0);
		log_info("mtimecmp0 value = %d\n", *mtimecmp0);
		log_debug("mtime value = %d\n", *mtime);
		log_info("mtime value = %d\n", *mtime);
#endif
	} else if (hartid == 1) {
    	*mtimecmp1 = *mtime + value;
		log_debug("mtimecmp1 value = %d\n", *mtimecmp1);
		log_info("mtimecmp1 value = %d\n", *mtimecmp1);
  	}


	log_trace("\nconfigure_counter exited\n");
}

/** @fn void mach_clint_handler(uintptr_t int_id, uintptr_t epc)
 * @brief handler for machine timer interrupt
 * @details handler for machine timer interrupt. This handles the timer interrupt and sets mtimecmp to clear timer interrupt.
 * @param unsigned int ptr int_id
 * @param unsigned int ptr epc
 */
void mach_clint_handler( __attribute__((unused)) uintptr_t int_id,  __attribute__((unused)) uintptr_t epc)
{
	log_trace("\nmach_clint_handler entered\n");
	uint64_t hartid = get_hart_id();

	//set mtimecmp to some value. On appln reqt basis handle timer interrupt
	if (hartid == 0) {
		configure_counter(CLOCK_FREQUENCY / CLINT_DIVISOR);
//		*mtimecmp0 = -1;
	} 
	else if (hartid == 1) {
		*mtimecmp1 = -1;
	}
#ifdef sos
	gpiov2_init();
	gpiov2_instance->direction = 0x1;
	gpiov2_instance->set = 0x1;
#endif
	log_info("Timer interrupt handled \n");

	log_trace("mach_clint_handler exited\n");
}

void mach_sip_clint_handler( __attribute__((unused)) uintptr_t int_id,  __attribute__((unused)) uintptr_t epc)
{
	uint64_t hartid = get_hart_id();
	if (hartid == 0) {
		*msip0 = 0;
		log_info("MSIP0 Machine Software interrupt handled \n");
	} 
	else if (hartid == 1) {
		*msip1 = 0;
		log_info("MSIP1 Machine Software interrupt handled \n");
	}
	log_trace("\nmach_clint_handler entered\n");
	log_trace("mach_clint_handler exited\n");
}
