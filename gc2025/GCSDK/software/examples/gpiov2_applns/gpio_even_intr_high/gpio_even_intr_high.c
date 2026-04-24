/***************************************************************************
 * Project           			:  GPIOV2
 * Name of the file	     		:  gpio_even_intr_high.c
 * Created date			        :  25.08.2025
 * Brief Description of file    :  Interrupt test for GPIO active  high even port interrupts.
 * Name of Author    	        :  Suganthi
 * Email ID                     :  suganthijayadev1106@gmail.com

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


#include "traps.h"
#include "platform.h"
#include "plic_driver.h"
#include "log.h"
#include "defines.h"
#include "gpiov2.h"
#include "pinmux.h"
#include "uart.h"



// odd pins input with interrupt enabled pins
#define GPIO_OUTPUTS (GPIO1 | GPIO3 | GPIO5 | GPIO7 | GPIO9 | GPIO11 | GPIO13 | GPIO15 )
//EVEN PINS OUTPUT 
#define INTERRUPT_1 (GPIO0 | GPIO2 | GPIO4 | GPIO6 | GPIO8 | GPIO10 | GPIO12 | GPIO14 )

/**
 * @brief Handles GPIO button press interrupts by checking interrupt status registers (intr_status1 and intr_status2) and clearing the corresponding interrupts
 * @details function iterates through all GPIO pins (0 to 59) and checks if an 
 * interrupt has occurred for any of them using `intr_status1` and `intr_status2`. 
 * If an interrupt is detected for a pin, it writes to the corresponding `clear1` 
 * or `clear2` register to clear the interrupt.
 * @param num Unused
 * @return Always returns 0.
 */
unsigned handle_button_press(unsigned int_id)
{
	delay_loop(1000,1000);
    int gpio_num = int_id - PLIC_GPIO_OFFSET; // map PLIC ID to GPIO number
    printf("\n even GPIO %d active high interrupt occurred! ", gpio_num);
	gpiov2_instance->clear = (1 << (gpio_num + 1)); // clear the pin that triggered the interrupt by clearing it 
    return 0;
}
/**
 * @brief Main function to test GPIO Active-High Interrupts (Odd GPIOs 0–59) on BSOC.
 * @details This test verifies active-high interrupt behavior of GPIOs on the BSOC platform.
 * The function performs GPIO and interrupt initialization, configures GPIOs as output,
 * and assigns interrupt settings for level-triggered, active-high detection.
 * **Key Operations:**
 * - Clears any previous GPIO interrupt status and ensures outputs start LOW.
 * - Configures:
 *   - Interrupt type: Level-triggered, Polarity: Active-high (0 to 1 transition).Enables interrupts using `intr_enable1` and `intr_enable2`.
 * - Registers `handle_button_press()` as the ISR for PLIC interrupt 30.Sets all output GPIOs HIGH to simulate rising edge events.
 * - Continuously polls `intr_status1` and `intr_status2`.On any active interrupt bit, prints which GPIO caused it.
 * - Re-triggers the interrupt by setting GPIOs HIGH again after a delay.
 * @note 
 * @return int Always returns 0.
 */

int main(void)
{
	gpiov2_init();
	plic_init();
	printf("\n GPIO Active High even Interrupt Test code");
	gpiov2_instance->direction= GPIO_OUTPUTS; // GPIO0 = output, GPIO 1=input interrupt
	printf("\n Direction reg: %x", gpiov2_instance->direction);
	gpiov2_instance->clear = GPIO_OUTPUTS; // Make gpio0 (output) as low by writing 1 to clear register
	printf("\n After clearing GPIOs %x \n", gpiov2_instance->data);
	gpiov2_instance->intr_config = 0x0000;		// Make interrupts active high(0), 0 to 1 transition By default, the interrupts are active high,
	// assign ISRs only for input pins (1,3,5,...,15)
    for (int i = 0; i < 16; i += 2) {
        configure_interrupt(PLIC_GPIO_OFFSET + i);
        isr_table[PLIC_GPIO_OFFSET + i] = handle_button_press;
    }
	enable_machine_global_interrupts(); // Enable Global (PLIC) interrupts.
	while (1) {
        for (int out = 1; out < 16; out += 2) {
            gpiov2_instance->set = (1 << out); 
        }
		printf("\n\n");
    }
	return 0;
}
