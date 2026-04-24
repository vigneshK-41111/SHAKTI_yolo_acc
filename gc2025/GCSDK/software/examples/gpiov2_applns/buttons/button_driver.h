/***************************************************************************
 * Project           		   : shakti devt board
 * Name of the file	           : buttons_driver.h
 * Brief Description of file       : Header file for buttons
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
 * @file button_driver.h
 * @brief Header file for buttons 
 */

#ifndef BUTTON_DRIVER_H
#define BUTTON_DRIVER_H

#include "platform.h"
#ifdef YAMUNA || GANGA
#include "gpio_v2.h"
#else
#include "gpio.h"
#endif

//Buttons
#define BTN_0 GPIO12
#define BTN_1 GPIO13
#define BTN_2 GPIO14
#define BTN_3 GPIO15

#define ALL_BTNS (BTN_0 | BTN_1 | BTN_2 | BTN_3)

// function prototype
void configure_btn(unsigned long pinCntrl);
void configure_all_btn();

#endif
