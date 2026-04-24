/***************************************************************************
* Project                               : shakti devt board
* Name of the file                      : xadc_default.c
* Brief Description of file             : Demonstrates the usage of onchip xadc.
* Name of Author                        : Sathya Narayanan
* Email ID                              : sathya281@gmail.com

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
@file xadc_default.c
@brief  write data to flash by xadc
@detail Contains driver codes to read and write flash using SPI interface.
*/
#include <stdio.h>
#include <stdint.h>
#include "platform.h" 
#include "xadc_driver.h" 
#include "utils.h"

int main()
{
    xadc_init();
    printf("=== XADC Full Test Start ===\n");

    while (1) {
        // On-chip Temperature
        uint32_t raw_temp = xadc_read_data((uint32_t *)(XADC_BASE + XADC_TEMP_OFFSET));
        float tempC = xadc_onchip_temp(raw_temp);

        // On-chip Voltages
        uint32_t raw_vccint = xadc_read_data((uint32_t *)(XADC_BASE + XADC_VCCINT_OFFSET));
        float vccint = xadc_onchip_voltage(raw_vccint);

        uint32_t raw_vccaux = xadc_read_data((uint32_t *)(XADC_BASE + XADC_VCCAUX_OFFSET));
        float vccaux = xadc_onchip_voltage(raw_vccaux);

        // VP/VN differential input
        uint32_t raw_vpvn = xadc_read_data((uint32_t *)(XADC_BASE + XADC_VPVN_OFFSET));
        float vpvn = xadc_dedicated_channel(raw_vpvn);

        // VAUX channels A0–A5
        uint32_t raw_a0 = xadc_read_data((uint32_t *)(XADC_BASE + XADC_AUX04_OFFSET));
        uint32_t raw_a1 = xadc_read_data((uint32_t *)(XADC_BASE + XADC_AUX05_OFFSET));
        uint32_t raw_a2 = xadc_read_data((uint32_t *)(XADC_BASE + XADC_AUX06_OFFSET));
        uint32_t raw_a3 = xadc_read_data((uint32_t *)(XADC_BASE + XADC_AUX07_OFFSET));
        uint32_t raw_a4 = xadc_read_data((uint32_t *)(XADC_BASE + XADC_AUX15_OFFSET));
        uint32_t raw_a5 = xadc_read_data((uint32_t *)(XADC_BASE + XADC_AUX00_OFFSET));

        float a0 = xadc_aux_channel(raw_a0);
        float a1 = xadc_aux_channel(raw_a1);
        float a2 = xadc_aux_channel(raw_a2);
        float a3 = xadc_aux_channel(raw_a3);
        float a4 = xadc_aux_channel(raw_a4);
        float a5 = xadc_aux_channel(raw_a5);

		uint32_t raw_a6_a7 = xadc_read_data((uint32_t*)(XADC_BASE + XADC_AUX12_OFFSET));
		uint32_t raw_a8_a9 = xadc_read_data((uint32_t*)(XADC_BASE + XADC_AUX13_OFFSET));
		uint32_t raw_a10_a11 = xadc_read_data((uint32_t*)(XADC_BASE + XADC_AUX14_OFFSET));

		float a6_a7 = xadc_diff(raw_a6_a7);
		float a8_a9 = xadc_diff(raw_a8_a9);
		float a10_a11 = xadc_diff(raw_a10_a11);

        // Print all values
        printf("\n--- XADC Readings ---\n");
		printf("\n--- INTERNAL ---\n");
        printf("On-chip Temp : %f C\n", tempC);
        printf("VCCINT       : %f V\n", vccint);
        printf("VCCAUX       : %f V\n", vccaux);

		printf("\n--- DEDICATED ---\n");
        printf("VP/VN        : %f V\n", vpvn);

		printf("\n--- SINGLE-ENDED A0-A5 ---\n");
        printf("A0           : %f V\n", a0);
        printf("A1           : %f V\n", a1);
        printf("A2           : %f V\n", a2);
        printf("A3           : %f V\n", a3);
        printf("A4           : %f V\n", a4);
        printf("A5           : %f V\n", a5);

		printf("\n--- DIFFERENTIAL A6-A11 ---\n");
        printf("A6-A7		 : %f V\n", a6_a7);
        printf("A8-A9  		 : %f V\n", a8_a9);
        printf("A10-A11		 : %f V\n", a10_a11);
		
		// while(1);
        delay_loop(10000,10000);
    }

    return 0;
}
