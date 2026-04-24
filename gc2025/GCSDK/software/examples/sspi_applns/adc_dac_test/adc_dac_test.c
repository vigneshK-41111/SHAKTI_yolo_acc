/****************************************************************************
* Project           		:  shakti devt board
* Name of the file	     	:  adc_dac_test.c
* Brief Description of file     :  Does the printing of hello with the help of uart communication protocol.
* Name of Author    	        :  Kotteeswaran Ekambaram
* Email ID                      :  kottee.1@gmail.com

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
@file adc_dac.c
@brief Sends sine wave through DAC and feeds the same to ADC and read the samples.
*/

#include "uart.h"

#include "pinmux.h"
#include "adc_dac.h"
#include "gpiov2.h"
#include "sspi.h"
#include "utils.h"

#define LDAC GPIO4
#define SHUT GPIO6
#define SSPI_SIZE 2
#define DATA_SIZE 8

#define SSPI_INSTANCE0  0  //for adc
#define SSPI_INSTANCE3  3  //for dac




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
	else//added by sugnathi
		sspi_configure_mas_slv(sspi_instance, ~SPI_MASTER);
	if(!lsb_first)
		sspi_configure_lsb_first(sspi_instance, MSB_FIRST);
	sspi_configure_tx_setup_time(sspi_instance, setup_time);
	sspi_configure_tx_hold_time(sspi_instance, hold_time);
}


/**
 * @brief Reads a digital value from the ADC via SPI and returns the result.
 * @details This function communicates with an ADC using SPI in full-duplex mode.
 * It sends the necessary start and configuration bits to select the channel
 * and mode (single-ended or differential) and then reads the 10-bit digital
 * output value from the ADC.
 * @param[out] data Pointer to a variable where the 10-bit ADC conversion result will be stored.
 *     The result will be in the range [0, 1023].
 * @param[in] dac_channel_select  Channel selection for the ADC.
 * @param[in] single_differential   Mode selection for the ADC.    - `0`: Differential mode   - `1`: Single-ended mode 
 * @param[in] sspi_instance  Pointer to the SPI interface
 *  @note - This implementation assumes the DAC (e.g., MCP3008-like) is SPI-compatible.
 */
void adc_read_digital_value(unsigned short *data, unsigned char dac_channel_select, unsigned char single_differential, sspi_struct *sspi_instance)
{
    unsigned char temp_data[3] = {'\0'};
    sspi_clear_fifo(sspi_instance);
    sspi_instance->data_tx = 0x01; // Start bit
    sspi_instance->data_tx = (CHANNEL_SELECT(dac_channel_select) | SINGLE_DIFFERENTIAL_CHANNEL(single_differential));
    sspi_instance->data_tx = 0xff; // dummy byte for clock out data

    sspi_configure_tx_rx_length(sspi_instance, (SSPI_SIZE + 1) * DATA_SIZE, (SSPI_SIZE + 1) * DATA_SIZE); // tx->24 bit rx ->24 bit
    sspi_configure_comm_mode(sspi_instance, FULL_DUPLEX);
    sspi_enable_txrx(sspi_instance, ENABLE);
    uint8_t temp = sspi_notbusy(sspi_instance);
    // Read 3 bytes from RX FIFO
    delay_loop(1000, 1000);                              // Ensure the data is ready
    temp_data[0] = sspi_instance->data_rx;               // discard
    temp_data[1] = sspi_instance->data_rx;               // bits 9 & 8
    temp_data[2] = sspi_instance->data_rx;               // bits 7..0
    //  printf("RX bytes: %x %x %x\n", temp_data[0], temp_data[1], temp_data[2]);
    *data = ((temp_data[1] & 0x03) << 8) | temp_data[2]; // Combine into 10-bit value
                                                         //  printf("ADC Value inside function: %d %x\t ", *data, *data);
}
uint16_t adc_10bit_to_dac_12bit_fast(uint16_t adc_val)
{
    return (adc_val << 2) | (adc_val >> 8); // Shift to add 2 LSBs
}
/**
 * @brief Sends a 12-bit digital value to the DAC via SPI.
 * @details This function constructs a 16-bit command word for the DAC based on the
 * selected channel, buffer mode, gain setting, and shutdown control. It then
 * transmits the command over SPI in simplex transmit mode.
 * @param[in] data 12-bit DAC input value (0–4095).  
 * @param[in] dac_select  DAC channel selection:- `0` → DAC A - `1` → DAC B
 * @param[in] buf_contrl   Buffer mode: - `0` → Unbuffered input - `1` → Buffered input
 * @param[in] gain_value   Output gain:- `0` → Gain = 2×- `1` → Gain = 1×
 * @param[in] shutdwn_cntrl Output enable/disable  - `0` → Shutdown mode (output off)  - `1` → Normal mode active mode (output on)
 * @param[in] sspi_instance  Pointer to the SPI interface
 * @note - This implementation assumes the DAC (e.g., MCP4922-like) is SPI-compatible.
 */
void dac_send_digital_value(unsigned short data, unsigned char dac_select, unsigned char buf_contrl, unsigned char gain_value, unsigned char shutdwn_cntrl, sspi_struct *sspi_instance)
{
    uint16_t cmd = 0;
    // Build full 16-bit command
    if (dac_select)
        cmd |= SELECT_DACB; // bit 15
    else
        cmd &= (~(SELECT_DACB) & 0x7FFF); // bit 15

    if (buf_contrl)
        cmd |= BUFFERED; // bit 14
    else
        cmd &= (~(BUFFERED) & 0xBFFF);

    if (gain_value)
        cmd |= GAIN_1X; // bit 13
    else
        cmd &= (~(GAIN_1X) & 0xDFFF);

    if (shutdwn_cntrl)
        cmd |= DO_NOT_SHUT_DOWN; // bit 12
    else
        cmd &= (~(DO_NOT_SHUT_DOWN) & 0xEFFF);

    cmd |= (data & 0x0FFF); //  // Insert 12-bit DAC data in bits 11-0
    printf("DAC command word: 0x%x\n", cmd);
    sspi_configure_tx_rx_length(sspi_instance, 16, 0);   // Configure SPI transfer length: 16 bits
    sspi_configure_comm_mode(sspi_instance, SIMPLEX_TX); // Set SPI communication mode
    sspi_instance->data_tx = (cmd >> 8) & 0xFF;          // Send MSB (bits 15-8)
    sspi_instance->data_tx = cmd & 0xFF;                 // Send LSB (bits 7-0)
    sspi_enable_txrx(sspi_instance, ENABLE);
    uint8_t temp = sspi_notbusy(sspi_instance);
    // printf("DAC command sent\n");
}
/**
 * @brief Main function for ADC-DAC combined test.
 * @details This program demonstrates reading an analog value from an ADC,
 * converting it to a digital value, mapping that value to the input
 * format of a DAC, and then outputting the corresponding analog
 * voltage via the DAC.
 * @note - This example assumes:
 * - ADC provides **10-bit output** over SPI.
 * - DAC accepts **12-bit input** over SPI.
 * - Both devices are configured for SPI mode with `CLK_POLARITY_HIGH` and `CLK_PHASE_HIGH`.
 * - The UART is only used for debugging/log output.
 * @return
 * This function never returns. It runs indefinitely.
 */
void main()
{
    uint32_t temp = 0;
    uint8_t clk_rate = SSPI_CLOCK_FREQUENCY;
    uint8_t setup_time = SETUP_TIME_CYCLES, hold_time = HOLD_TIME_CYCLES;
    uint16_t read_value0 = 0;
    printf("\n***************** ADC - DAC COMBINED TEST*******************/n");
    printf("\n Configure SSPI/n");
    sspi_init();
	*(pinmux_config_reg) = 0x154000;
    sspi_clear_fifo(sspi_instance[SSPI_INSTANCE0]);
    temp = sspi_notbusy(sspi_instance[SSPI_INSTANCE0]);
    sspi_configure(sspi_instance[SSPI_INSTANCE0], clk_rate, CLK_POLARITY_HIGH, CLK_PHASE_HIGH, MASTER, SPI_MASTER, MSB_FIRST, setup_time, hold_time);
    temp = sspi_notbusy(sspi_instance[SSPI_INSTANCE0]);

    sspi_clear_fifo(sspi_instance[SSPI_INSTANCE3]);
    temp = sspi_notbusy(sspi_instance[SSPI_INSTANCE3]);
    sspi_configure(sspi_instance[SSPI_INSTANCE3], clk_rate, CLK_POLARITY_HIGH, CLK_PHASE_HIGH, MASTER, SPI_MASTER, MSB_FIRST, setup_time, hold_time);
    temp = sspi_notbusy(sspi_instance[SSPI_INSTANCE3]);
    while (1)
    {
        adc_read_digital_value(&read_value0, CHANNEL_0, SINGLE_CHANNEL, sspi_instance[SSPI_INSTANCE0]); // Read ADC value
        printf("\n The adc converted value is %d -%x\n", read_value0, read_value0);
        uint16_t dac_input_value = adc_10bit_to_dac_12bit_fast(read_value0); // converting 12 bit dac input
        printf(" The DAC input value is %d -  %x\n", dac_input_value, dac_input_value);
        dac_send_digital_value(dac_input_value, 1, 1, 1, 1, sspi_instance[SSPI_INSTANCE3]); // sending dig input to dac
        delay_loop(2000, 2000);
    };
}