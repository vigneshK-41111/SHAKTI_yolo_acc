/***************************************************************************
* Project           		: shakti devt board
* Name of the file	     	: togglegpio.c
* Brief Description of file     : Control an led with the help of a button, gpio based.
* Name of Author    	        : Soutrick Roy Chowdhury
* Email ID                      : soutrickofficial@gmail.com

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
@file tglgpio.c
@brief Control an led with the help of a button, gpio based.
*/

#include "platform.h"
#include "utils.h" 
#define GPIO_V2 1
#ifndef  GPIO_V2
#include "gpio.h"         
#else
#include "gpiov2.h"
#endif

/** @fn main
 * @brief Initiates writing to gpio pins by calling tglgpio
 */ 
void main()
{
#ifdef YAMUNA || GANGA	
	check_gpiov2();
	printf("\n Read from GPIO Pins\n");
	gpiov2_init();
	gpiov2_instance->direction = 0xFFFFFFFF;
#else
	write_word(GPIO_DIRECTION_CNTRL_REG, 0xFFFFFFFF );
#endif


		/* Toggling by giving specific pins number*/

	while (1)
	{
/* Toggling All the pins using set and clear register  */
#ifdef YAMUNA || GANGA	
		gpiov2_instance->toggle = 0xFFFFFFFF; 			// Toggling all pins together for checking
#else
		write_word(GPIO_DIRECTION_CNTRL_REG, 0xFFFFFFFF );
		delay_loop(3000, 1000);
		write_word(GPIO_DIRECTION_CNTRL_REG, 0x00 );
#endif
		delay_loop(3000, 1000);
	}
}

