/***************************************************************************
* Project           		:  shakti devt board
* Name of the file	     	:  clint_driver.h
* Brief Description of file     :  Header file for clint.
* Name of Author    	        :  Sathya Narayanan N
* Email ID                      :  sathya281@gmail.com

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
 * @file clint_driver.h
 * @brief  Header file for clint
 * @detail This is the header file for clint_driver.c
 */

#ifndef CLIC_DRIVER_H
#define CLIC_DRIVER_H
#include "traps.h"
#include "platform.h"

#define MTIMECMP0_L  0x02004000
#define MTIMECMP0_H  0x02004004
#define MTIMECMP1_L  0x02004008
#define MTIMECMP1_H  0x0200400C
#define MTIME_L      0x0200BFF8
#define MTIME_H      0x0200BFFC


extern volatile uint64_t* mtime;
extern volatile uint64_t* mtimecmp0;
extern volatile uint64_t* mtimecmp1;
extern volatile uint32_t* msip0;
extern volatile uint32_t* msip1;

extern volatile uint32_t* mtime_l;
extern volatile uint32_t* mtime_h;
extern volatile uint32_t* mtimecmp_l;
extern volatile uint32_t* mtimecmp_h;

/* function prototype */
uint64_t get_timer_value(void);
uint64_t get_hart_id(void);
void configure_counter(uint64_t value);
void mach_clint_handler(uintptr_t int_id, uintptr_t epc);
void mach_sip_clint_handler(uintptr_t int_id, uintptr_t epc);

#endif
