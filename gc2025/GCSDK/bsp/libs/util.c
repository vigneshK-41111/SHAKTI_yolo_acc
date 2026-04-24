/*******************************************************************************
 * Project                     : shakti devt board
 * Name of the file	       : util.c
 * Brief Description of file   : src file for util
 * Name of Author    	       : Sathya Narayanan N
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
 *********************************************************************************/
/**
@file util.c
@brief source file for util
@detail Commonly used utility fuctions are implemented here. These functions are
used to achieve higher level objectives.
*/

#include "log.h"
#include "utils.h"
#include "string.h"

/** @fn  void waitfor(unsigned int secs)
 * @brief stall the process for given time
 * @param unsigned int secs
 */
void waitfor(unsigned int secs)
{
	unsigned int time = 0;
	while (time++ < secs);
}

/** @fn void delay(unsigned long count)
 * @brief  sleeps for number of "count"
 * @param unsigned long (number of count)
 */
void delay(unsigned long count)
{
	unsigned long cntr1 = count *1000;
	unsigned long tmpCntr;

	while (cntr1--){
		tmpCntr = 1000;
		while (tmpCntr--);
	}
}

/** @fn float pow_10(unsigned int y)
 * @brief generate different powers of 10
 * @param unsigned int y
 * @return return result in float 
 */
float pow_10(unsigned int y)
{
	unsigned int x=1;

	for (unsigned int i=0; i <y; i++)
	{
		x *= 10;
	}

	return ((float) x);
}

/** @fn double pow_10_double(unsigned int y)
 * @brief generate different powers of 10 for double precision
 * @param unsigned int y
 * @return return result in double 
 */
double pow_10_double(unsigned int y)
{
	double result = 1.0;
	for (unsigned int i = 0; i < y; i++) {
		result *= 10.0;
	}
	return result;
}

/** @fn void reverse(char *str, int length)
 * @brief reverse a string and store in the same string
 * @param char *str
 * @param int length
 */
void reverse(char *str, int length)
{
	int i = 0;
	int j = length - 1;
	char tmp;

	while (i<j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;

		i++;
		j--;
	}
}

/** @fn int int_to_string(int number, char str[], int afterpoint)
 * @brief convert decimal numbers to string
 * @details Takes num as input and converts it to string.
 *	    The converted string is stored in str. The
 *          position of last character in the str is returned.
 *          This function is tailored to support ftoa.
 * @param int number
 * @param char str[]
 * @param int afterpoint
 * @return int
 */
int int_to_string(int number, char str[], unsigned int afterpoint)
{
	uint32_t i = 0;

	/*extract each digit and put into str[i]*/

	while (number != 0)
	{
		str[i] = ((number%10) + '0');
		i++;
		number = number/10;
	}

	/*insert 0 after the numbers, if count of digits less than afterpoint*/

	while (i < afterpoint)
	{
		str[i] = '0';
		i++;
	}

	/*
	   zeroth digit is in oth position in array,
	   To read digits properly, reverse array
	 */
	reverse(str, i);
	str[i] = '\0';

	return i;
}


void dtoa(double n, char *res, unsigned int precision)
{
    if (precision > 15)
        precision = 15;

    int pos = 0;
    
    // Handle sign
    if (n < 0.0) {
        res[pos++] = '-';
        n = -n;
    }

    // Integer part
    unsigned long long ipart = (unsigned long long)n;
    double fpart = n - (double)ipart;

    // Convert integer part
    char temp[32];
    int idx = 0;
    if (ipart == 0) {
        temp[idx++] = '0';
    } else {
        while (ipart > 0) {
            temp[idx++] = (char)('0' + (ipart % 10));
            ipart /= 10;
        }
    }
    for (int k = idx - 1; k >= 0; k--)
        res[pos++] = temp[k];

    // No decimals?
    if (precision == 0) {
        res[pos] = '\0';
        return;
    }

    res[pos++] = '.';

    // Multiply fractional part
    unsigned long long mul = 1;
    for (unsigned int i = 0; i < precision; i++)
        mul *= 10;

    unsigned long long frac = (unsigned long long)(fpart * mul + 0.5); // rounding

    // Convert fractional part with zero padding
    for (int j = precision - 1; j >= 0; j--) {
        res[pos + j] = (char)('0' + (frac % 10));
        frac /= 10;
    }
    pos += precision;
    res[pos] = '\0';
}

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

/** @fn long int read_word(int *addr)
 * @brief returns the value stored at a given address
 * Here we assume the word size to be 32 bits for gpio
 * @param int* addr
 * @return long int
 */
unsigned long read_word(uint32_t *addr)
{
	log_debug("addr = %x data = %x\n", addr, *addr);
	return *addr;
}

/** @fn void write_word(int *addr, unsigned long val)
 * @brief  writes a value to an address
 * @param int*
 * @param unsigned long
 */
void write_word(uint32_t *addr, unsigned long val)
{
	*addr = val;
	log_debug("addr = %x data = %x\n", addr, *addr);
}
