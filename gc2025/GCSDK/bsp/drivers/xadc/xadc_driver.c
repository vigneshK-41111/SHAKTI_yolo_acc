/***************************************************************************
 * Project           		: shakti devt board
 * Name of the file	     	: xadc_driver.c
 * Brief Description of file    : source file for xadc.
 * Name of Author    	        : Sathya Narayanan N
 * Email ID                     : sathya281@gmail.com

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
@file xadc_driver.c
@brief source file for xadc driver
@detail This file contains the driver code for xadc device. The functions to
 setup each xadc registers, isr routine and xadc interrupt handler are here.
*/

#include<stdio.h>
#include "xadc_driver.h"

/**
 * @fn xadc_init()
 * @brief Initializes the XADC module
 * @details
 * Performs a reset of the XADC, waits for the device to stabilize,
 * and configures the sequencer to enable the desired AUX channels.
 * This function must be called before performing any XADC conversions.
 *
 * The following AUX channels are enabled:
 *  - A0, A1, A2, A3
 *  - A4, A5
 *  - A6/A7 pair
 *  - A8/A9 pair
 *  - A10/A11 pair
 *
 * @return void
 */
void xadc_init()
{
    // Reset the XADC
    xadc_write_ctrl_reg((uint32_t *)(XADC_BASE + XADC_SRR_OFFSET),
                        XADC_SRR_RESET_VALUE);

    // Allow time for reset to complete
    for (volatile int i = 0; i < 10000; i++);

    // Enable desired AUX channels
    uint32_t chan_mask =
        (1<<0)  | // A5
        (1<<4)  | // A0
        (1<<5)  | // A1
        (1<<6)  | // A2
        (1<<7)  | // A3
        (1<<15) | // A4
        (1<<12) | // A6/A7
        (1<<13) | // A8/A9
        (1<<14);  // A10/A11

    xadc_write_ctrl_reg((uint32_t *)(XADC_BASE + XADC_SEQ00_OFFSET), chan_mask);
}


/**
 * @fn uint32_t xadc_read_data(uint32_t *address)
 * @brief A api to read data from a memory mapped address.
 * @param unsigned int (32-bit) address
 * @return unsigned int (32-bit) *address
 */
uint32_t xadc_read_data(uint32_t *address)
{
	return(*address);
}

/**
 * @fn void xadc_write_ctrl_reg(uint32_t *address, uint32_t data)
 * @brief A api to write data to a memory mapped address.
 * @param unsigned int (32-bit) address
 * @param unsigned int (32-bit) data
 */
void xadc_write_ctrl_reg(uint32_t *address, uint32_t data)
{
	*address = data;
}

/**
 * @fn xadc_onchip_voltage(uint32_t value)
 * @brief Reads the on-chip voltage
 * @details Converts the raw XADC register value into the on-chip voltage (in volts).
 * @param value Raw 32-bit XADC register value
 * @return float Voltage in volts
 */
float xadc_onchip_voltage(uint32_t value)
{
    return (((value >> 4)*3.0f)/4096.0f );
}

/**
 * @fn xadc_onchip_temp(uint32_t value)
 * @brief Reads the on-chip temperature
 * @details Converts the raw XADC register value into temperature in Celsius.
 * @param value Raw 32-bit XADC register value
 * @return float Temperature in degrees Celsius
 */
float xadc_onchip_temp(uint32_t value)
{
    return (((value/65536.0f)/0.00198421639f ) - 273.15f);
}

/**
 * @fn xadc_dedicated_channel(uint32_t value)
 * @brief Reads the dedicated VP/VN analog channel
 * @details Converts the raw XADC value into a normalized voltage ratio.
 * @param value Raw 32-bit XADC register value
 * @return float Normalized voltage (0.0 to 1.0)
 */
float xadc_dedicated_channel(uint32_t value)
{
    return ((value >> 4)/4096.0f );
}

/**
 * @fn xadc_read_ctrl_reg(uint32_t *address)
 * @brief Reads an XADC control/status register
 * @details Performs a volatile 32-bit read from the specified XADC MMIO address.
 * @param address Pointer to the memory-mapped XADC register
 * @return uint32_t Raw register value
 */
uint32_t xadc_read_ctrl_reg(uint32_t *address)
{
    return *(volatile uint32_t *)address;
}

/**
 * @fn xadc_aux_channel(uint32_t raw)
 * @brief Converts raw XADC data from an AUX single-ended channel
 * @details Converts the 12-bit XADC sample (0–4095) into a voltage in the 0–3.3 V range.
 * @param raw Raw 32-bit XADC register value
 * @return float Voltage in volts (0–3.3 V)
 */
float xadc_aux_channel(uint32_t raw)
{
    uint16_t code = (raw >> 4) & 0xFFF;
    return ((float)code / 4095.0f) * 3.3f;
}

/**
 * @fn xadc_diff(uint32_t raw)
 * @brief Converts raw XADC data from a differential analog channel
 * @details Converts the 12-bit differential XADC sample into a normalized 0–1 V reading.
 * @param raw Raw 32-bit XADC register value
 * @return float Differential voltage (0–1 V)
 */
float xadc_diff(uint32_t raw)
{
    uint16_t code = (raw >> 4) & 0xFFF;
    return (float)code / 4095.0f * 1.0f;
}