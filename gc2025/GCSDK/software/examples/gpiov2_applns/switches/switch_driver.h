/***************************************************************************
 * Project           		   : shakti devt board
 * Name of the file	           : switch_driver.h
 * Brief Description of file       : Header file for switches
 * Name of Author    	           : Madan Kumar S
 * Email ID                        : kumarmadan96@gmail.com

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
 * @file switch_driver.h
 * @brief Header file for switches
 */

#ifndef SWITCH_DRIVER_H
#define SWITCH_DRIVER_H

#include "platform.h"
#ifdef YAMUNA || GANGA
#include "gpio_v2.h"
#else
#include "gpio.h"
#endif

//Switches
#define SW0 GPIO12
#define SW1 GPIO13
#define SW2 GPIO14
#define SW3 GPIO15

#define ALL_SWITCHES (SW0 | SW1 | SW2 | SW3)

// function prototype
void configure_switch(unsigned long pinCntrl);
void configure_all_switches();
#endif
