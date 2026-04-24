/***************************************************************************
 * Project               	    		:  shakti devt board
 * Name of the file	            		:  tft.c
 * Brief Description of file            :  TFT display Application code
 * Name of Author    	                :  Balaji Sivanallaperumal	
 * Email ID                             :  ospbalaji@gmail.com

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
 * @file tft.c
 * @brief Driver for the ILI9488 LCD Display.
 * * @details 
 * Provides basic functions to control the ILI9488 screen, including:
 * - Screen initialization and reset.
 * - Drawing pixels, lines, and rectangles.
 * - Displaying bitmaps and images.
 * - Hardware scrolling support.
 * * Uses SPI for communication and GPIOs for Reset/Control.
 */
#include "sspi.h"
#include "platform.h"
#include "log.h"
#include "pinmux.h"
#include "uart.h"
#include "utils.h"
#include "gpio.h"
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>
#include "logo.h"

/** @name ILI9488 Driver Configuration Settings */
///@{
#define ILI9488_INTERFACE         0  /**< 0: SPI Interface, 1: Parallel */
#define ILI9488_ORIENTATION       0  /**< Screen orientation (0-3) */
#define ILI9488_COLORMODE         0  /**< 0: RGB, 1: BGR */
#define ILI9488_TOUCH             0  /**< Touch screen enable flag */
///@}

/** @name Touch Screen Calibration Indexes */
///@{
#define TS_CINDEX_0        {3385020, 333702, -667424, 1243070964, -458484, -13002, 1806391572}
#define TS_CINDEX_1        {3385020, -458484, -13002, 1806391572, -333702, 667424, -163249584}
#define TS_CINDEX_2        {3385020, -333702, 667424, -163249584, 458484, 13002, -184966992}
#define TS_CINDEX_3        {3385020, 458484, 13002, -184966992, 333702, -667424, 1243070964}
///@}

#define ILI9488_MULTITASK_MUTEX   0
#define ILI9488_LCD_PIXEL_WIDTH   320  /**< Physical width in pixels */
#define ILI9488_LCD_PIXEL_HEIGHT  480  /**< Physical height in pixels */
   
#define SSPI_SIZE 8
#define DATA_SIZE 8

#define SSPI_DRIVER     1
#define SSPI_INSTANCE 	1

#define all_gpios ( GPIO1 | GPIO2 )

/** @name ILI9488 Command Definitions */
///@{
#define ILI9488_NOP           0x00
#define ILI9488_SWRESET       0x01
#define ILI9488_RDDID         0x04
#define ILI9488_RDDST         0x09
#define ILI9488_SLPIN         0x10
#define ILI9488_SLPOUT        0x11
#define ILI9488_PTLON         0x12
#define ILI9488_NORON         0x13
#define ILI9488_RDMODE        0x0A
#define ILI9488_RDMADCTL      0x0B
#define ILI9488_RDPIXFMT      0x0C
#define ILI9488_RDIMGFMT      0x0D
#define ILI9488_RDSELFDIAG    0x0F
#define ILI9488_INVOFF        0x20
#define ILI9488_INVON         0x21
#define ILI9488_GAMMASET      0x26
#define ILI9488_DISPOFF       0x28
#define ILI9488_DISPON        0x29
#define ILI9488_CASET         0x2A 
#define ILI9488_PASET         0x2B 
#define ILI9488_RAMWR         0x2C 
#define ILI9488_RAMRD         0x2E 
#define ILI9488_PTLAR         0x30
#define ILI9488_VSCRDEF       0x33
#define ILI9488_MADCTL        0x36 
#define ILI9488_VSCRSADD      0x37
#define ILI9488_PIXFMT        0x3A 
#define ILI9488_RAMWRCONT     0x3C
#define ILI9488_RAMRDCONT     0x3E
#define ILI9488_IMCTR         0xB0
#define ILI9488_FRMCTR1       0xB1
#define ILI9488_FRMCTR2       0xB2
#define ILI9488_FRMCTR3       0xB3
#define ILI9488_INVCTR        0xB4
#define ILI9488_DFUNCTR       0xB6
#define ILI9488_PWCTR1        0xC0
#define ILI9488_PWCTR2        0xC1
#define ILI9488_PWCTR3        0xC2
#define ILI9488_PWCTR4        0xC3
#define ILI9488_PWCTR5        0xC4
#define ILI9488_VMCTR1        0xC5
#define ILI9488_VMCTR2        0xC7
#define ILI9488_RDID1         0xDA
#define ILI9488_RDID2         0xDB
#define ILI9488_RDID3         0xDC
#define ILI9488_RDID4         0xDD
#define ILI9488_GMCTRP1       0xE0
#define ILI9488_GMCTRN1       0xE1
#define ILI9488_IMGFUNCT      0xE9
#define ILI9488_ADJCTR3       0xF7
///@}

/** @name MADCTL Control Bits */
///@{
#define ILI9488_MAD_RGB       0x08
#define ILI9488_MAD_BGR       0x00
#define ILI9488_MAD_VERTICAL  0x20
#define ILI9488_MAD_X_LEFT    0x00
#define ILI9488_MAD_X_RIGHT   0x40
#define ILI9488_MAD_Y_UP      0x80
#define ILI9488_MAD_Y_DOWN    0x00
///@}

/** @name 16-bit RGB565 Color Definitions */
///@{
#define TFT_BLACK       0x0000      
#define TFT_NAVY        0x000F      
#define TFT_DARKGREEN   0x03E0      
#define TFT_DARKCYAN    0x03EF      
#define TFT_MAROON      0x7800      
#define TFT_PURPLE      0x780F      
#define TFT_OLIVE       0x7BE0      
#define TFT_LIGHTGREY   0xD69A      
#define TFT_DARKGREY    0x7BEF      
#define TFT_BLUE        0x001F      
#define TFT_GREEN       0x07E0      
#define TFT_CYAN        0x07FF      
#define TFT_RED         0xF800      
#define TFT_MAGENTA     0xF81F      
#define TFT_YELLOW      0xFFE0      
#define TFT_WHITE       0xFFFF      
#define TFT_ORANGE      0xFDA0      
#define TFT_GREENYELLOW 0xB7E0      
#define TFT_PINK        0xFE19      
#define TFT_BROWN       0x9A60      
#define TFT_GOLD        0xFEA0      
#define TFT_SILVER      0xC618      
#define TFT_SKYBLUE     0x867D      
#define TFT_VIOLET      0x915C     
 
///@}

/**
 * @brief Macro to convert R,G,B values to 16-bit RGB565 format.
 */
#define color565(r, g, b) ((((r) & 0xF8) << 8) | (((g) & 0xFC) << 3) | (((b) & 0xF8) >> 3))

#if ILI9488_COLORMODE == 0
#define ILI9488_MAD_COLORMODE    ILI9488_MAD_RGB
#else
#define ILI9488_MAD_COLORMODE    ILI9488_MAD_BGR
#endif

#define LCD_ORIENTATION  ILI9488_ORIENTATION

/**
 * @brief Helper to split 16-bit data into two 8-bit SPI writes.
 */
#define  LCD_IO_WriteData16_to_2x8(dt)    {write_data8((dt) >> 8); write_data8(dt); }

/* the drawing directions of the 4 orientations */
#if ILI9488_INTERFACE == 0 /* SPI interface */
/**
 * @brief Sets the hardware cursor to a specific coordinate.
 */
#define ILI9488_SETCURSOR(x, y)            {write_command(ILI9488_CASET); LCD_IO_WriteData16_to_2x8(x); LCD_IO_WriteData16_to_2x8(x); write_command(ILI9488_PASET); LCD_IO_WriteData16_to_2x8(y); LCD_IO_WriteData16_to_2x8(y);}
#if (LCD_ORIENTATION == 0)
#define ILI9488_MAX_X                       (ILI9488_LCD_PIXEL_WIDTH - 1)
#define ILI9488_MAX_Y                       (ILI9488_LCD_PIXEL_HEIGHT - 1)
#define ILI9488_MAD_DATA_RIGHT_THEN_UP     ILI9488_MAD_COLORMODE | ILI9488_MAD_X_RIGHT | ILI9488_MAD_Y_UP
#define ILI9488_MAD_DATA_RIGHT_THEN_DOWN   ILI9488_MAD_COLORMODE | ILI9488_MAD_X_RIGHT | ILI9488_MAD_Y_DOWN
#elif (LCD_ORIENTATION == 1)
#define ILI9488_MAX_X                       (ILI9488_LCD_PIXEL_HEIGHT - 1)
#define ILI9488_MAX_Y                       (ILI9488_LCD_PIXEL_WIDTH - 1)
#define ILI9488_MAD_DATA_RIGHT_THEN_UP     ILI9488_MAD_COLORMODE | ILI9488_MAD_X_RIGHT | ILI9488_MAD_Y_DOWN | ILI9488_MAD_VERTICAL
#define ILI9488_MAD_DATA_RIGHT_THEN_DOWN   ILI9488_MAD_COLORMODE | ILI9488_MAD_X_LEFT  | ILI9488_MAD_Y_DOWN | ILI9488_MAD_VERTICAL
#elif (LCD_ORIENTATION == 2)
#define ILI9488_MAX_X                       (ILI9488_LCD_PIXEL_WIDTH - 1)
#define ILI9488_MAX_Y                       (ILI9488_LCD_PIXEL_HEIGHT - 1)
#define ILI9488_MAD_DATA_RIGHT_THEN_UP     ILI9488_MAD_COLORMODE | ILI9488_MAD_X_LEFT  | ILI9488_MAD_Y_DOWN
#define ILI9488_MAD_DATA_RIGHT_THEN_DOWN   ILI9488_MAD_COLORMODE | ILI9488_MAD_X_LEFT  | ILI9488_MAD_Y_UP
#else
#define ILI9488_MAX_X                       (ILI9488_LCD_PIXEL_HEIGHT - 1)
#define ILI9488_MAX_Y                       (ILI9488_LCD_PIXEL_WIDTH - 1)
#define ILI9488_MAD_DATA_RIGHT_THEN_UP     ILI9488_MAD_COLORMODE | ILI9488_MAD_X_LEFT  | ILI9488_MAD_Y_UP   | ILI9488_MAD_VERTICAL
#define ILI9488_MAD_DATA_RIGHT_THEN_DOWN   ILI9488_MAD_COLORMODE | ILI9488_MAD_X_RIGHT | ILI9488_MAD_Y_UP   | ILI9488_MAD_VERTICAL
#endif
#endif

#define ILI9488_LCD_INITIALIZED    0x01
#define ILI9488_IO_INITIALIZED     0x02

/** @brief Tracks initialization state bitmask. */
static  uint8_t  Is_ili9488_Initialized = 0;

#if      ILI9488_MULTITASK_MUTEX == 1 && ILI9488_TOUCH == 1 && ILI9488_INTERFACE == 1
volatile uint8_t io_lcd_busy = 0;
volatile uint8_t io_ts_busy = 0;
#define  ILI9488_LCDMUTEX_PUSH()    while(io_ts_busy); io_lcd_busy++;
#define  ILI9488_LCDMUTEX_POP()     io_lcd_busy--
#else
#define  ILI9488_LCDMUTEX_PUSH()
#define  ILI9488_LCDMUTEX_POP()
#endif

#define TRANSDATAMAXSIZE  4
/**
 * @brief Union for efficient data transmission across types.
 */
union
{
  char       c[TRANSDATAMAXSIZE];
  uint8_t   d8[TRANSDATAMAXSIZE];
  uint16_t d16[TRANSDATAMAXSIZE / 2];
}transdata;

/**
 * @brief Macro to define a rectangular drawing area on the display.
 */
#define ILI9488_SETWINDOW(x1, x2, y1, y2) \
  { transdata.d16[0] = x1; transdata.d16[1] = x2; write_command_with_data(ILI9488_CASET, (uint16_t *)&transdata, 2); \
    transdata.d16[0] = y1; transdata.d16[1] = y2; write_command_with_data(ILI9488_PASET, (uint16_t *)&transdata, 2); }

uint8_t LastEntry = ILI9488_MAD_DATA_RIGHT_THEN_DOWN;
const uint8_t EntryRightThenUp = ILI9488_MAD_DATA_RIGHT_THEN_UP;
const uint8_t EntryRightThenDown = ILI9488_MAD_DATA_RIGHT_THEN_DOWN;

#if ILI9488_INTERFACE == 0
static  uint16_t  yStart, yEnd;
#endif

int32_t  cursor_x, cursor_y;

/** @name Gamma and Power Control Configuration Tables */
///@{
uint8_t gmctrp1_data[] = { 0x00, 0x03, 0x09, 0x08, 0x16, 0x0A, 0x3F, 0x78, 0x4C, 0x09, 0x0A, 0x08, 0x16, 0x1A, 0x0F };
uint8_t gmctrn1_data[] = { 0x00, 0x16, 0x19, 0x03, 0x0F, 0x05, 0x32, 0x45, 0x46, 0x04, 0x0E, 0x0D, 0x35, 0x37, 0x0F };
uint8_t pwctr1_data[]  = { 0x17, 0x15 };
uint8_t vmctr1_data[]  = { 0x00, 0x12, 0x80 };
uint8_t dfunctr_data[] = { 0x02, 0x02, 0x3B };
uint8_t adjctr3_data[] = { 0xA9, 0x51, 0x2C, 0x82 };
///@}

/**
 * @brief Configures the designated GPIO pins as outputs.
 * @details Reads the current direction register, performs a bitwise OR with 
 * the 'all_gpios' mask, and writes the result back.
 */
void configure_all_gpios()
{
	printf("\n [DEBUG] configure_all_gpios \n ");
	unsigned long read_data = 0;
	read_data = read_word(GPIO_DIRECTION_CNTRL_REG);
 	write_word(GPIO_DIRECTION_CNTRL_REG, ( read_data | all_gpios ) );
	return ;
}

/**
 * @brief Sets specific GPIO pins to a high logic level (Turn ON).
 * @param pin_cntrl Bitmask of the pins to be turned on.
 */
void turn_on_gpios(unsigned long pin_cntrl)
{
	// printf("\n [DEBUG] turn_on_gpios %x :  \n ",pin_cntrl );
	unsigned long read_data = 0;
	read_data = read_word(GPIO_DATA_REG);
	write_word(GPIO_DATA_REG, ( read_data | pin_cntrl ) );
	return ;
}

/**
 * @brief Sets specific GPIO pins to a low logic level (Turn OFF).
 * @param pin_cntrl Bitmask of the pins to be turned off.
 */
void turn_off_gpios(unsigned long pin_cntrl)
{
	// printf("\n [DEBUG] turn_off_gpios %d :  \n ",pin_cntrl );
	unsigned long read_data = 0;
	read_data = read_word(GPIO_DATA_REG);
	write_word(GPIO_DATA_REG, ( read_data & (~pin_cntrl) )   );
	return ;
}

/**
 * @brief Performs a hardware reset by driving GPIO1 high.
 */
void rst(void)
{
	turn_on_gpios(GPIO1);
} 

/**
 * @brief Sends the command to wake the display from sleep mode.
 */
void ili9488_DisplayOn(void)
{
  write_command(ILI9488_SLPOUT);      // Display on
//   LCD_IO_Bl_OnOff(1); 
}

/**
 * @brief Sends the command to put the display into sleep mode.
 */
void ili9488_DisplayOff(void)
{
  write_command(ILI9488_SLPIN);       // Display off  
}

/**
 * @brief Comprehensive initialization sequence for the ILI9488 LCD.
 * @details Handles software reset, Gamma correction, Power control, 
 * Pixel format selection (based on Interface type), and 
 * display timing configurations.
 */
void lcd_init()
{
	printf("\n [DEBUG] lcd init \n ");
	waitfor(105);
	write_command(ILI9488_SWRESET);
	waitfor(5);

	write_command_with_data(ILI9488_GMCTRP1, gmctrp1_data, sizeof(gmctrp1_data));
	write_command_with_data(ILI9488_GMCTRN1, gmctrn1_data, sizeof(gmctrn1_data));
	write_command_with_data(ILI9488_PWCTR1, pwctr1_data, sizeof(pwctr1_data));
	waitfor(5);

	// Power Control 2 (VGH,VGL)
	write_command(ILI9488_PWCTR2); write_data8(0x41);
	waitfor(5);

	// Power Control 3 (Vcom)
	write_command_with_data(ILI9488_VMCTR1, vmctr1_data, sizeof(vmctr1_data));	waitfor(5);

	write_command(ILI9488_MADCTL);write_data8(0x48);

	#if ILI9488_INTERFACE == 0
	write_command(ILI9488_PIXFMT); write_data8(0x66); // Interface Pixel Format (24 bit)
	#if LCD_SPI_MODE != 2
	// LCD_IO_WriteCmd8(0xFB); LCD_IO_WriteData8(0x80);
	write_command(ILI9488_IMCTR); write_data8(0x80); // Interface Mode Control (SDO NOT USE)
	#else
	write_command(ILI9488_IMCTR); write_data8(0x00); // Interface Mode Control (SDO USE)
	#endif
	#elif ILI9488_INTERFACE == 1
	write_command(ILI9488_PIXFMT); write_data8(0x55); // Interface Pixel Format (16 bit)
	#endif
	write_command(ILI9488_FRMCTR1); write_data8(0xA0); // Frame rate (60Hz)
	write_command(ILI9488_INVCTR); write_data8(0x02); // Display Inversion Control (2-dot)
	write_command_with_data(ILI9488_DFUNCTR, dfunctr_data, sizeof(dfunctr_data));
	write_command(0xB7);write_data8(0xC6);
	write_command(ILI9488_IMGFUNCT); write_data8(0x00); // Set Image Functio (Disable 24 bit data)
	write_command_with_data(ILI9488_ADJCTR3, adjctr3_data, sizeof(adjctr3_data));
	waitfor(5);
	write_command(ILI9488_SLPOUT);      // Exit Sleep
	waitfor(120);
	write_command(ILI9488_DISPON);      // Display on
	waitfor(25);
	write_command(ILI9488_MADCTL); write_data8(ILI9488_MAD_DATA_RIGHT_THEN_DOWN);

	waitfor(5);
	 printf("\n[DEBUG]  ILI9488 Initialization complete \n");
}

/**
 * @brief Simplified/Secondary initialization for the ILI9488.
 * @note This is often used for quick re-initialization or testing.
 */
void ili9488_init()
{
    // printf("\n[DEBUG] Starting ILI9488 Initialization\n");

    configure_all_gpios();  // Make sure all GPIOs are output

    // Display OFF
    write_command(0x28);

    // Power Control 3
    uint8_t power_ctl3[] = {0x07};
    write_command_with_data(0xC2, power_ctl3, sizeof(power_ctl3));

    // Interface Pixel Format - 16 bits per pixel
    uint8_t pixel_format[] = {0x55}; // 0x55 = 16-bit/pixel
    write_command_with_data(0x3A, pixel_format, sizeof(pixel_format));

    // Memory Access Control (MADCTL) - Rotation and RGB/BGR order
    uint8_t mem_acc_ctl[] = {0x48};  // Portrait, BGR
    write_command_with_data(0x36, mem_acc_ctl, sizeof(mem_acc_ctl));

    // Display Inversion ON (optional)
    write_command(0x21);
    // Sleep Out
    write_command(0x11);
    waitfor(120); 
    write_command(0x29);

    // printf("\n[DEBUG] ILI9488 Initialization Done\n");
}
/**
 * @brief Initializes the Synchronous Serial Peripheral Interface (SSPI) for the LCD.
 * @details Configures the SPI clock to 2MHz, sets clock polarity/phase to 0, 
 * and defines the master mode with MSB first.
 */
void sspi_init1()
{
	printf("\n [DEBUG] sspi lcd init\n" );
	sspi_enable_txrx(sspi_instance[SSPI_INSTANCE], DISABLE);
	sspi_configure_clock_in_hz(sspi_instance[SSPI_INSTANCE], 2000000); 
	sspi_configure_clock_pol(sspi_instance[SSPI_INSTANCE], 0);
	sspi_configure_clock_phase(sspi_instance[SSPI_INSTANCE], 0);	
	sspi_configure_pins(sspi_instance[SSPI_INSTANCE], 1, 0 ,  1 , 1);
	sspi_configure_mas_slv(sspi_instance[SSPI_INSTANCE], SPI_MASTER);
	sspi_configure_lsb_first(sspi_instance[SSPI_INSTANCE], MSB_FIRST);
	sspi_configure_tx_setup_time(sspi_instance[SSPI_INSTANCE], 2);
}
/**
 * @brief Polls the SSPI status register until the communication is no longer busy.
 * @return int Returns 1 when the SPI bus is free.
 */
int sspi__notbusy(void)
{
	unsigned char  read_data = 0x01;
	while(read_data & 0x01){
		read_data = sspi_instance[SSPI_INSTANCE]->comm_status;
	}
	return 1;
}

/**
 * @brief Sends a command byte to the ILI9488.
 * @details Pulls GPIO2 (D/C pin) LOW to indicate command mode.
 * @param value The 8-bit command hex code.
 */
void write_command(uint8_t value)
{
	turn_off_gpios(GPIO2);
	sspi_configure_tx_rx_length(sspi_instance[SSPI_INSTANCE],8,0);
	sspi_configure_comm_mode(sspi_instance[SSPI_INSTANCE], SIMPLEX_TX);
	sspi_instance[SSPI_INSTANCE]->data_tx = value;
	sspi_enable_txrx(sspi_instance[SSPI_INSTANCE], ENABLE);
	sspi__notbusy();
}

/**
 * @brief Sends a data byte to the ILI9488.
 * @details Pulls GPIO2 (D/C pin) HIGH to indicate data mode.
 * @param value The 8-bit data byte.
 */
void write_data8(uint8_t value)
{
	turn_on_gpios(GPIO2);
	sspi_configure_tx_rx_length(sspi_instance[SSPI_INSTANCE],8,0);
	sspi_configure_comm_mode(sspi_instance[SSPI_INSTANCE], SIMPLEX_TX);
	sspi_instance[SSPI_INSTANCE]->data_tx = value;
	sspi_enable_txrx(sspi_instance[SSPI_INSTANCE], ENABLE);
	sspi__notbusy();
}

/**
 * @brief Sends a command followed by a buffer of data.
 * @param cmd The command byte.
 * @param data Pointer to the data array.
 * @param len Number of bytes in the data array.
 */
void write_command_with_data(uint8_t cmd, const uint8_t *data, size_t len) {
    write_command(cmd);
    for (size_t i = 0; i < len; ++i) {
        write_data8(data[i]);
    }
}

/**
 * @brief Writes a 16-bit data value to the display.
 * @details Configures the SPI for a 16-bit transfer. Sets GPIO2 (D/C) high 
 * to indicate data mode. Splits the 16-bit value into two 8-bit writes 
 * to the TX register.
 * @param value The 16-bit data to be transmitted.
 * @return int Returns 1 upon completion.
 */
int write_data16(uint16_t value)
{
	turn_on_gpios(GPIO2);
//	sspi_configure_tx_setup_time(sspi_instance[SSPI_INSTANCE], 2);
//	sspi_configure_tx_hold_time(sspi_instance[SSPI_INSTANCE], 2);
 	sspi_configure_tx_rx_length(sspi_instance[SSPI_INSTANCE],16,0);//Tx - 16, Rx - 0;
	sspi_configure_comm_mode(sspi_instance[SSPI_INSTANCE], SIMPLEX_TX);
	sspi_instance[SSPI_INSTANCE]->data_tx = (value >> 8);	//MSB byte
	sspi_instance[SSPI_INSTANCE]->data_tx = (uint8_t) value; //LSB byte
	sspi_enable_txrx(sspi_instance[SSPI_INSTANCE], ENABLE);
 	sspi__notbusy();
 	return 1;
}


/**
 * @brief Transmits a single color 10 times in a continuous 240-bit SPI burst.
 * @details This is an optimization for filling areas with a single color. 
 * It writes 3 bytes (R, G, B) into the TX FIFO 10 times.
 * @param arr Array containing 3 bytes of RGB data [R, G, B].
 * @return int Returns 1 upon completion.
 */
int write_continuous_data_24(uint8_t arr[]){
	sspi__notbusy();
	sspi_configure_tx_rx_length(sspi_instance[SSPI_INSTANCE],240,0);
	sspi_configure_comm_mode(sspi_instance[SSPI_INSTANCE], SIMPLEX_TX);
	for(int i=0; i<10;i++){
	sspi_instance[SSPI_INSTANCE]->data_tx = arr[0];
	sspi_instance[SSPI_INSTANCE]->data_tx = arr[1];
	sspi_instance[SSPI_INSTANCE]->data_tx = arr[2];
	}
	sspi_enable_txrx(sspi_instance[SSPI_INSTANCE], ENABLE);
	
	return 1;
}

/**
 * @brief Transmits an array of different colors in a continuous 240-bit SPI burst.
 * @details Used for image/bitmap rendering where each pixel has unique data.
 * @param arr Pointer to an array of 30 bytes (representing 10 pixels in 24-bit color).
 * @return int Returns 1 upon completion.
 */
int write_continuous_data_24_arr(uint8_t arr[]){
	sspi__notbusy();
	sspi_configure_tx_rx_length(sspi_instance[SSPI_INSTANCE],240,0);
	sspi_configure_comm_mode(sspi_instance[SSPI_INSTANCE], SIMPLEX_TX);
	for(int i=0; i<30;i++){
	sspi_instance[SSPI_INSTANCE]->data_tx = arr[i];
	}
	sspi_enable_txrx(sspi_instance[SSPI_INSTANCE], ENABLE);
	
	return 1;
}
/**
 * @brief Sets the drawing window boundaries on the ILI9488.
 * @details Sends Column Address Set (CASET) and Page Address Set (PASET) commands.
 * @param Xpos Start X coordinate.
 * @param Ypos Start Y coordinate.
 * @param Width Width of the area.
 * @param Height Height of the area.
 */
void ili9488_SetDisplayWindow(uint16_t Xpos, uint16_t Ypos, uint16_t Width, uint16_t Height)
{
  yStart = Ypos; yEnd = Ypos + Height - 1;
  write_command(ILI9488_CASET); LCD_IO_WriteData16_to_2x8(Xpos); LCD_IO_WriteData16_to_2x8(Xpos + Width - 1);
  write_command(ILI9488_PASET); LCD_IO_WriteData16_to_2x8(Ypos); LCD_IO_WriteData16_to_2x8(Ypos + Height - 1);
}

/**
 * @brief Converts 16-bit RGB565 to 24-bit RGB888 and initiates a burst write.
 * @details Maps 5-bit Red to 8-bit, 6-bit Green to 8-bit, and 5-bit Blue to 8-bit.
 * This is required because the ILI9488 controller expects 24 bits per pixel in SPI mode.
 * @param RGBCode The 16-bit color code to convert and send.
 */
 void ili9488_write16to24(uint16_t RGBCode)
{
  turn_on_gpios(GPIO2);
  uint8_t rgb_vals[4];
  rgb_vals[0] = (RGBCode & 0xF800) >> 8;  /**< Red component */
  rgb_vals[1] = (RGBCode & 0x07E0) >> 3;  /**< Green component */
  rgb_vals[2] = (RGBCode & 0x001F) << 3;  /**< Blue component */
  write_continuous_data_24(rgb_vals);
}

/**
 * @brief Converts a batch of ten 16-bit pixels to 24-bit and sends them via SPI.
 * @details This function iterates through an array of 10 pixels, converting 
 * each from RGB565 to the RGB888 format required by the ILI9488 hardware.
 * @param RGBCode Array containing at least 10 uint16_t pixel values.
 */
 void ili9488_write16to24_arr(uint16_t RGBCode[])
{
  // turn_on_gpios(GPIO2);
  uint8_t rgb_vals[31];
  for(int i=0;i<10;i++){
  rgb_vals[3*i + 0] = (RGBCode[i] & 0xF800) >> 8;
  rgb_vals[3*i + 1] = (RGBCode[i] & 0x07E0) >> 3;
  rgb_vals[3*i + 2] = (RGBCode[i] & 0x001F) << 3;
  }
  write_continuous_data_24_arr(rgb_vals);
}
/**
 * @brief Renders the pre-defined 'mylogo' bitmap to the full screen.
 * @details Sets the display window to full screen, sends the RAMWR command, 
 * and processes the logo data in chunks of 10 pixels for optimized SPI transfer.
 * @note Requires 'mylogo' array to be defined in logo.h.
 */
void writebitmap()
{
  printf("\n[DEBUG]  ILI9488 writebitmap start \n");
  ili9488_SetDisplayWindow(0, 0, ILI9488_LCD_PIXEL_WIDTH, ILI9488_LCD_PIXEL_HEIGHT);
  write_command(ILI9488_RAMWR);
  turn_on_gpios(GPIO2);
  for(int j=0;j<ILI9488_LCD_PIXEL_WIDTH*ILI9488_LCD_PIXEL_HEIGHT;j+=10){
    uint16_t vals[11];
    for(int i = 0 ; i < 10;i++){
      vals[i] = mylogo[i+j] ;
    }
    ili9488_write16to24_arr(vals);
  }
  printf("\n[DEBUG]  ILI9488 writebitmap complete \n");
}
/**
 * @brief Fills a specific rectangular area with a solid color.
 * @param Xpos   X-coordinate of the top-left corner.
 * @param Ypos   Y-coordinate of the top-left corner.
 * @param Xsize  Width of the rectangle.
 * @param Ysize  Height of the rectangle.
 * @param RGBCode 16-bit color value (RGB565).
 */
void ili9488_FillRect(uint16_t Xpos, uint16_t Ypos, uint16_t Xsize, uint16_t Ysize, uint16_t RGBCode)
{
  printf("\n[DEBUG]  ILI9488 Fillscreen start \n");
  ili9488_SetDisplayWindow(Xpos, Ypos, Xsize, Ysize);
  write_command(ILI9488_RAMWR);
  
  uint32_t XYsize = Xsize * Ysize;
  while(XYsize>0){
    ili9488_write16to24(RGBCode);
    XYsize -= 10;
  }
  printf("\n[DEBUG]  ILI9488 Fillscreen complete \n");
}

/**
 * @brief Clears the entire screen with a specific color.
 * @param RGBCode 16-bit color value.
 */
void fillScreen(uint16_t RGBCode){
  ili9488_FillRect(0,0,320,480,RGBCode);
}

/**
 * @brief Draws a single pixel at a specific coordinate.
 * @param Xpos X-coordinate.
 * @param Ypos Y-coordinate.
 * @param RGBCode 16-bit color value.
 */
void ili9488_WritePixel(uint16_t Xpos, uint16_t Ypos, uint16_t RGBCode)
{
  ILI9488_SETCURSOR(Xpos, Ypos);
  write_command(ILI9488_RAMWR);
  ili9488_write16to24(RGBCode); 
}

/**
 * @brief Draws a horizontal line.
 * @param RGBCode 16-bit color.
 * @param Xpos Start X.
 * @param Ypos Start Y.
 * @param Length Length of the line in pixels.
 */
void ili9488_DrawHLine(uint16_t RGBCode, uint16_t Xpos, uint16_t Ypos, uint16_t Length)
{
  ili9488_FillRect(Xpos, Ypos, Length, 1, RGBCode);
}

/**
 * @brief Draws a vertical line.
 * @param RGBCode 16-bit color.
 * @param Xpos Start X.
 * @param Ypos Start Y.
 * @param Length Length of the line in pixels.
 */
void ili9488_DrawVLine(uint16_t RGBCode, uint16_t Xpos, uint16_t Ypos, uint16_t Length)
{
  ili9488_FillRect(Xpos, Ypos, 1, Length, RGBCode);
}

/** @brief Returns the maximum width of the display in pixels. */
uint16_t ili9488_GetLcdPixelWidth(void)
{
  return ILI9488_MAX_X + 1;
}

/** @brief Returns the maximum height of the display in pixels. */
uint16_t ili9488_GetLcdPixelHeight(void)
{
  return ILI9488_MAX_Y + 1;
}
/**
 * @brief Parses and draws a standard BMP bitmap image.
 * @details Extracts the file size and data offset from the BMP header (offsets 2, 4, 10, 12).
 * It automatically adjusts the MADCTL register to @ref ILI9488_MAD_DATA_RIGHT_THEN_UP 
 * for correct bitmap rendering orientation.
 * @param Xpos Start X-coordinate.
 * @param Ypos Start Y-coordinate.
 * @param pbmp Pointer to the bitmap file buffer in memory.
 */
void ili9488_DrawBitmap(uint16_t Xpos, uint16_t Ypos, uint8_t *pbmp)
{
  uint32_t index = 0, size = 0;
  /* Read bitmap size from header */
  size = *(volatile uint16_t *) (pbmp + 2);
  size |= (*(volatile uint16_t *) (pbmp + 4)) << 16;
  
  /* Get bitmap data address offset from header */
  index = *(volatile uint16_t *) (pbmp + 10);
  index |= (*(volatile uint16_t *) (pbmp + 12)) << 16;
  
  size = (size - index)/2;
  pbmp += index; /**< Move pointer to actual pixel data */
  
  if(LastEntry != ILI9488_MAD_DATA_RIGHT_THEN_UP)
  {
    LastEntry = ILI9488_MAD_DATA_RIGHT_THEN_UP;
    write_command_with_data(ILI9488_MADCTL, &EntryRightThenUp, 1);
  }
  ILI9488_SETCURSOR(0,0);
}
/**
 * @brief Renders a raw RGB image buffer to a defined window.
 * @details Sets the display window and iterates through the pixel data, 
 * converting each 16-bit pixel to 24-bit for the ILI9488.
 * @param Xpos   X-coordinate of the image destination.
 * @param Ypos   Y-coordinate of the image destination.
 * @param Xsize  Width of the image.
 * @param Ysize  Height of the image.
 * @param pdata  Pointer to the 16-bit RGB image buffer.
 */
void ili9488_DrawRGBImage(uint16_t Xpos, uint16_t Ypos, uint16_t Xsize, uint16_t Ysize, uint16_t *pdata)
{
  uint32_t size;
  size = (Xsize * Ysize);

  ili9488_SetDisplayWindow(Xpos, Ypos, Xsize, Ysize);
  write_command(ILI9488_RAMWR);
  while(size--)
  {
    ili9488_write16to24(*pdata);
    pdata++;
  }
  /* Note: The final write below uses pdata and size from the end of the loop */
  write_command_with_data(ILI9488_RAMWR, pdata, size);
}
/**
 * @brief Manages hardware-accelerated vertical scrolling.
 * @details Configures the Vertical Scrolling Definition (VSCRDEF) and 
 * Vertical Scroll Start Address (VSCRSADD). The logic calculates 
 * the 'Top Fixed Area', 'Scroll Area', and 'Bottom Fixed Area' 
 * based on the current @ref ILI9488_ORIENTATION.
 * @param Scroll      The number of pixels to shift.
 * @param TopFix      Number of fixed rows at the top of the display.
 * @param BottonFix   Number of fixed rows at the bottom of the display.
 */
void ili9488_Scroll(int16_t Scroll, uint16_t TopFix, uint16_t BottonFix)
{
  static uint16_t scrparam[4] = {0, 0, 0, 0};
  
  #if (ILI9488_ORIENTATION == 0)
  if((TopFix != scrparam[1]) || (BottonFix != scrparam[3]))
  {
    scrparam[1] = TopFix;
    scrparam[3] = BottonFix;
    scrparam[2] = ILI9488_LCD_PIXEL_HEIGHT - TopFix - BottonFix;
    write_command_with_data(ILI9488_VSCRDEF, &scrparam[1], 3);
  }
  Scroll = (0 - Scroll) % scrparam[2];
  if(Scroll < 0)
    Scroll = scrparam[2] + Scroll + scrparam[1];
  else
    Scroll = Scroll + scrparam[1];

  #elif (ILI9488_ORIENTATION == 1)
  /* Orientation 1 scrolling logic */
  if((TopFix != scrparam[1]) || (BottonFix != scrparam[3]))
  {
    scrparam[1] = TopFix;
    scrparam[3] = BottonFix;
    scrparam[2] = ILI9488_LCD_PIXEL_HEIGHT - TopFix - BottonFix;
    write_command_with_data(ILI9488_VSCRDEF, &scrparam[1], 3);
  }
  Scroll = (0 - Scroll) % scrparam[2];
  if(Scroll < 0)
    Scroll = scrparam[2] + Scroll + scrparam[1];
  else
    Scroll = Scroll + scrparam[1];

  #elif (ILI9488_ORIENTATION == 2)
  /* Orientation 2 scrolling logic (Inverted fixed areas) */
  if((TopFix != scrparam[3]) || (BottonFix != scrparam[1]))
  {
    scrparam[3] = TopFix;
    scrparam[1] = BottonFix;
    scrparam[2] = ILI9488_LCD_PIXEL_HEIGHT - TopFix - BottonFix;
    write_command_with_data(ILI9488_VSCRDEF, &scrparam[1], 3);
  }
  Scroll %= scrparam[2];
  if(Scroll < 0)
    Scroll = scrparam[2] + Scroll + scrparam[1];
  else
    Scroll = Scroll + scrparam[1];

  #elif (ILI9488_ORIENTATION == 3)
  /* Orientation 3 scrolling logic (Inverted fixed areas) */
  if((TopFix != scrparam[3]) || (BottonFix != scrparam[1]))
  {
    scrparam[3] = TopFix;
    scrparam[1] = BottonFix;
    scrparam[2] = ILI9488_LCD_PIXEL_HEIGHT - TopFix - BottonFix;
    write_command_with_data(ILI9488_VSCRDEF, &scrparam[1], 3);
  }
  Scroll %= scrparam[2];
  if(Scroll < 0)
    Scroll = scrparam[2] + Scroll + scrparam[1];
  else
    Scroll = Scroll + scrparam[1];
  #endif

  if(Scroll != scrparam[0])
  {
    scrparam[0] = Scroll;
    write_command_with_data(ILI9488_VSCRSADD, scrparam[0], 1);
  }
  ILI9488_LCDMUTEX_POP();
}
/**
 * @brief Diagnostic test routine to verify LCD functionality.
 * @details Performs a sequence of drawing operations including:
 * - Screen clearing (Black fill)
 * - Individual pixel plotting (RGB)
 * - Geometric primitives (Horizontal/Vertical lines, Rectangles)
 * - Small-scale Bitmap parsing
 * - Raw RGB image rendering
 * - Hardware vertical scrolling demonstration
 */
void ili9488_Test(void)
{
  uint16_t x, y;
  uint16_t width = ili9488_GetLcdPixelWidth();
  uint16_t height = ili9488_GetLcdPixelHeight();
  
  // Fill screen with black to start from a clean state
  ili9488_FillRect(0, 0, width, height, 0x0000); 

  // Draw test pixels to verify individual pixel addressing and RGB565 colors
  ili9488_WritePixel(10, 10, 0xF800); // Red
  ili9488_WritePixel(20, 10, 0x07E0); // Green
  ili9488_WritePixel(30, 10, 0x001F); // Blue

  // Draw horizontal line (White)
  ili9488_DrawHLine(0xFFFF, 10, 30, 100); 

  // Draw vertical line (Yellow)
  ili9488_DrawVLine(0xFFE0, 50, 40, 100); 

  // Fill rectangle (Cyan)
  ili9488_FillRect(60, 60, 50, 50, 0x07FF); 

  /** * @section BMP_Test 
   * Manual construction of a minimal 1x1 BMP header for verification 
   */
  uint8_t dummy_bmp[54 + 4] = {0}; // 54 bytes header + pixel data
  dummy_bmp[0] = 'B'; dummy_bmp[1] = 'M'; // BMP signature
  dummy_bmp[2] = 58; dummy_bmp[10] = 54; // File size and data offset
  dummy_bmp[18] = 1; dummy_bmp[22] = 1; // Width=1, Height=1
  dummy_bmp[54] = 0xFF; dummy_bmp[55] = 0xFF; // White pixel

  ili9488_DrawBitmap(100, 100, dummy_bmp);

  // Dummy 2x2 RGB image rendering test
  uint16_t rgb_data[4] = {
    0xF800, 0x07E0, // Red, Green
    0x001F, 0xFFFF  // Blue, White
  };
  ili9488_DrawRGBImage(120, 120, 2, 2, rgb_data); 

  /** * @section Scroll_Test 
   * Animates the vertical scroll to verify VSCRDEF and VSCRSADD commands 
   */
  for(int scroll = 0; scroll < 100; scroll++)
  {
    ili9488_Scroll(scroll, 10, 10);
    waitfor(5);
  }

  // Restore scroll position to default
  ili9488_Scroll(0, 0, 0);
}

/**
 * @brief Rapid-fire screen fill test.
 * @details Cycles through primary colors to check for panel defects or 
 * color inversion issues.
 */
void testFillScreen(){
  fillScreen(TFT_BLACK);
  fillScreen(TFT_RED);
  fillScreen(TFT_GREEN);
  fillScreen(TFT_BLUE);
  fillScreen(TFT_BLACK);
}

/**
 * @brief Placeholder for text rendering tests.
 * @details Clears the screen and resets the hardware cursor to (0,0).
 */
void testText()
{
  fillScreen(TFT_BLACK);
  ILI9488_SETCURSOR(0,0);
}

/**
 * @brief Advanced bitmap placement test.
 * @details Verifies the coordinate system and BMP header parsing by:
 * 1. Centering a bitmap on the screen using header metadata (offsets 18 and 22).
 * 2. Rendering the same bitmap in the four corners of the display to verify 
 * boundary conditions and address wrapping.
 */
void ili9488_BitmapTest(void)
{
    uint16_t width = ili9488_GetLcdPixelWidth();
    uint16_t height = ili9488_GetLcdPixelHeight();

    ili9488_FillRect(0, 0, width, height, 0x0000); // Clear screen black
    waitfor(20);

    // Manually extract BMP width and height from the provided header array
    uint16_t bmp_width = mylogo[18] | (mylogo[19] << 8);    
    uint16_t bmp_height = mylogo[22] | (mylogo[23] << 8);   

    // Calculate center coordinates
    uint16_t xpos = (width - bmp_width) / 2;
    uint16_t ypos = (height - bmp_height) / 2;

    ili9488_DrawBitmap(xpos, ypos, mylogo);

    waitfor(20);

    // Multi-corner rendering test
    ili9488_FillRect(0, 0, width, height, 0x0000); 

    ili9488_DrawBitmap(0, 0, mylogo); // Top-Left
    ili9488_DrawBitmap(width - bmp_width, 0, mylogo); // Top-Right
    ili9488_DrawBitmap(0, height - bmp_height, mylogo); // Bottom-Left
    ili9488_DrawBitmap(width - bmp_width, height - bmp_height, mylogo); // Bottom-Right

    waitfor(20);
}

/**
 * @brief Main application entry point for the ILI9488 display driver.
 * @details The execution flow follows these critical hardware steps:
 * 1. **Pin Muxing:** Configures the processor pins for SPI and GPIO functions.
 * 2. **SPI Setup:** Initializes the SSPI peripheral and checks for a "not busy" status.
 * 3. **GPIO Config:** Sets up the direction for control lines (D/C, Reset, etc.).
 * 4. **Hardware Reset:** Manually toggles GPIO1 (Reset pin) to synchronize the LCD controller.
 * 5. **LCD Init:** Executes the full ILI9488 command sequence (Gamma, Power, PixFmt).
 * 6. **Application:** Fills the screen with black and renders the boot logo.
 * * @return int Returns 0 on successful execution.
 */
int main()
{
	uint32_t temp = 0, retval = 0;
	uint8_t i = 0, j = 0;
	uint8_t temp_data = 0;
    
    // Step 1: Pinmux configuration for peripheral routing
	*(pinmux_config_reg) = 0x154000;

	printf("\n SSPI1 Interrupt Check\n");
	printf("\n Configure SSPI");
    
    // Step 2: SSPI Basic initialization
	sspi_init();
	temp = sspi__notbusy(); 
	printf("SSPI1 status: %x \n", temp);
    
    // Step 3: GPIO Direction Setup
	configure_all_gpios();
	delay_loop(1000,2000);
    
	delay_loop(1000,2000);
    
    // Step 4: SPI Timing and Reset Sequence
	sspi_init1();
	write_command(0x00);
	turn_on_gpios(GPIO1); // Drive Reset High
	waitfor(50);
	turn_off_gpios(GPIO1); // Drive Reset Low
	waitfor(100);
	turn_on_gpios(GPIO1); // Back to High
	waitfor(120);

    // Step 5: Full Software Initialization of the Controller
    lcd_init();
    
    // Step 6: Initial Frame Generation
	ili9488_FillRect(0,0,320,480,TFT_BLACK);
    writebitmap();

    return 0;
}


