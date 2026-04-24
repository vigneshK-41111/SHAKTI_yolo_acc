#include "FreeRTOS.h"
#include "task.h"
#include "log.h"
#include "uart.h"
#include "utils.h"
#include "gpiov2.h"
#include "queue.h"
#include "timers.h"
#include "i2c.h"
#include "sspi.h"
#include "pinmux.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* -------------------- Config -------------------- */
#define mainQUEUE_RECEIVE_TASK_PRIORITY (tskIDLE_PRIORITY + 2)
#define mainQUEUE_SEND_TASK_PRIORITY    (tskIDLE_PRIORITY + 1)
#define mainQUEUE_SEND_FREQUENCY_MS     pdMS_TO_TICKS(1000)
#define mainQUEUE_LENGTH                (1)

/* DS3231 Config */
#define UPDATE_TIME 0
#define I2C                   i2c_instance[0]
#define DS3231_SLAVE_ADDRESS  0xD0
#define DS3231_REG_OFFSET     0
#define DS3231_DEC_TO_HEX(decimal) (((decimal / 10) << 4) | (decimal % 10))
#define PRESCALER_COUNT       0x1F
#define SCLK_COUNT            0x91

/* SPI Flash Config */

#define  WRITE_SIZE 10
#define  READ_SIZE 10
#define FLASH_BASE_ADDRESS 0x000000
#define STATUS_REGISTER 0x01000000


volatile unsigned int* pinmux_config_reg = (volatile unsigned int*) PINMUX_CONFIGURE_REG;

/* -------------------- DS3231 FUNCTIONS -------------------- */
int read_ds3231_registers(i2c_struct * i2c_instance, unsigned int reg_offset, unsigned int *readTemp, unsigned char length, unsigned long delay)
{
	unsigned char read_buf[4] = {'\0'};
	int i = 0, j = 0,  k = 0, status=0;
	unsigned char temp = 0;

//Writes the slave address for write
		i2c_send_slave_address(i2c_instance, DS3231_SLAVE_ADDRESS, I2C_WRITE, 800);
//Writes the pointer to address that needs to be read
		i2c_write_data(i2c_instance, reg_offset, delay);
//Stops the I2C transaction to start reading the temperature value.
		i2c_instance->control = I2C_STOP;


//Writes the slave address for read
		i2c_send_slave_address(i2c_instance, DS3231_SLAVE_ADDRESS, I2C_READ, 800);


/* Make a dummy read as per spec of the I2C controller */
		i2c_read_data(i2c_instance, &temp, delay);

//Reads the MSB Byte of temperature [D9 - D1]
		for(i = 0; i < length; i++)
		{
			i2c_read_data(i2c_instance, &temp, delay);
			*readTemp = temp;
//			printf("\n Read Value[%02d]: %02x", i, *readTemp);
			if( i == (length - 2) )
				i2c_instance->control = I2C_NACK;
			*readTemp++;
		}
		i2c_instance->control = I2C_STOP;
		return 0;
}

int write_ds3231_registers(i2c_struct * i2c_instance, unsigned int reg_offset, unsigned int *write_value, unsigned char length, unsigned long delay)
{
	int i = 0, j = 0,  k = 0, status=0;
	unsigned int temp = 0;
		i2c_send_slave_address(i2c_instance, DS3231_SLAVE_ADDRESS, I2C_WRITE, delay);
		i2c_write_data(i2c_instance, reg_offset, delay);
		for(i = 0; i < length; i++)
	{
		i2c_write_data(i2c_instance,  ( *write_value++  & 0xff) /*LM75_TEMP_REG_OFFSET */, delay);
	}
//Stops the I2C transaction to start reading the temperature value.
		i2c_instance->control = I2C_STOP;
//		delay_loop(800, 800);


			return 0;
}
int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 +
             y / 400 + t[m - 1] + d) % 7;
}

unsigned int ds3231_decimal_to_hex(unsigned int decimal)
{
	return( ((decimal / 10 ) << 4) | (decimal % 10) );
}




static void flash_read_locations(uint32_t read_address, uint32_t length, int *read_data)
{
	for(int i = 0; i < length; ++i)
	{
		int read_value = flash_read_w25q32(read_address);
		printf("\nReading from adddress %x and data \
			   %x\n",read_address,read_value);
		*read_data++ = read_value;
		read_address = read_address+4;
	}
}

/* -------------------- FreeRTOS Hooks -------------------- */
void vApplicationMallocFailedHook(void)
{
    printf("[FATAL] Malloc Failed! - Increase configTOTAL_HEAP_SIZE\n");
    taskDISABLE_INTERRUPTS();
    for (;;);
}

void vApplicationStackOverflowHook(TaskHandle_t pxTask, char *pcTaskName)
{
    printf("[FATAL] Stack Overflow in Task: %s\n", pcTaskName);
    taskDISABLE_INTERRUPTS();
    for (;;);
}

/* -------------------- TASK DEFINITIONS -------------------- */
void vTaskDS3231(void *pvParameters);
// DS3231 RTC Task
void vTaskDS3231(void *pvParameters)
{
    	int timeout;
		unsigned int tempReadValue = 0;
		unsigned long delay = 1000;
		unsigned int write_buf[7] = {0x00}, read_buf[7] = {0x00};
		unsigned char length;
		unsigned int hour, minute, second, date, month, year;
	
		hour = 11;
		minute = 46;
		second = 30;
	
		date = 25;
		month = 01;
		year = 2020;
	
		write_buf[0] = DS3231_DEC_TO_HEX(second); //Seconds
		write_buf[1] = DS3231_DEC_TO_HEX(minute); //Minutes
		write_buf[2] = DS3231_DEC_TO_HEX(hour); //Hours
	
		write_buf[4] = DS3231_DEC_TO_HEX(date); //Seconds
		write_buf[5] = DS3231_DEC_TO_HEX(month); //Minutes
		write_buf[6] = DS3231_DEC_TO_HEX( (year % 100) ); //Hours
	
		write_buf[3] = dayofweek(date, month, year) + 1;
		length = 7;
	
//	set_baud_rate(uart_instance[0], 115200);
	printf("\nHello Welcome to Ganga");

	i2c_init();

	if(config_i2c(I2C, PRESCALER_COUNT, SCLK_COUNT))
	{
		log_error("\tSomething Wrong In Initialization\n");
		return -1;
	}
	else
		log_info("\tIntilization Happened Fine\n");
#ifdef UPDATE_TIME
	write_ds3231_registers(I2C, 0x00, &write_buf[0], length, delay);
			printf("\n Write complete");
#endif
	for(int i=0 ; i<15;i++)
	{
			read_ds3231_registers(I2C, DS3231_REG_OFFSET, &read_buf[0], 7, 800);
			
			log_info("\n Date: %x-%x-20%x Day: ", read_buf[4], read_buf[5], read_buf[6]);
			
			switch(read_buf[3])
			{
				case 1:
						log_info( "   Sunday; ");
						break;

				case 2:
						log_info( "   Monday; ");
						break;

				case 3:
						log_info( "  Tuesday; ");
						break;

				case 4:
						log_info( "Wednesday; ");
						break;

				case 5:
						log_info( " Thursday; ");
						break;

				case 6:
						log_info( "   Friday; ");
						break;

				case 7:
						log_info( " Saturday; ");
						break;
			}
			log_info("Time: %x:%x:%x", read_buf[2], read_buf[1], read_buf[0]);
			delay_loop(800, 800);

	}
	vTaskDelete(NULL);
}

// SPI Flash Task
void vTaskSPIFlash(void *pvParameters)
{
    printf("[TASK] SPI Flash Task started\n");
*pinmux_config_reg = 0x154000;
	int write_address = FLASH_BASE_ADDRESS;  // read/write from/to this address
	int read_address  = FLASH_BASE_ADDRESS;  // read/write from/to this address
	int data = 0xDEADBEEF; //32 bits of data can be written at a time
	uint32_t length = 11;

	sspi_init();
	flash_init_w25q32();
	printf("\n SPI init done");
	flash_device_id_w25q32();
	waitfor(200);
	printf("\n Flash device id read complete in the main function");
	status_register_update_w25q32(STATUS_REGISTER);
	flash_erase_w25q32(FLASH_BASE_ADDRESS); //erases an entire sector
	printf("\nErase complete");

	int write_data[WRITE_SIZE] = {0};
	int read_data[READ_SIZE] = {0};
	printf("\n Data read after erase:")	;
	length = READ_SIZE;
//	for(int i = 0; i < length; i++)
	// {
	// 	flash_read_locations( read_address, length, &read_data);
	// }
//	while(1);
	length = WRITE_SIZE;
	data = 0x0;
	for(int i = 0; i < length; i++)
	{
		flash_write_w25q32( write_address, data);
		write_data[i] = data;
		data += 0x01010101;
		write_address += 0x04;
	}
	length = READ_SIZE;
		flash_read_locations( read_address, length, &read_data);

	for(int i = 0; i < length; i++)
	{
		if(read_data[i] != write_data[i] )
		{
			log_error("\n Flash test failed");
			log_error("\n write_value: %x; read_value: %x", write_data[i], read_data[i]);
			//return;
			break;
		}
	}
	log_info("\n Flash Test passed");
	vTaskDelete(NULL);
}

void vLEDTask(void *pvParameters)
{

	check_gpiov2();
	printf("\n Read from GPIO Pins\n");
	gpiov2_init();
	gpiov2_instance->direction = 0xFFFFFFFF;

	printf("\n Read from GPIO Pins\n");

	while(1)
	{
		gpiov2_instance->toggle = 0xFFFFFFFF; 	
		printf("\n GPIO Read Data: %x", gpiov2_instance->data );
		delay_loop(1000, 1000);
	}

}
/* -------------------- MAIN -------------------- */
int main(void)
{
    printf("\n[BOOT] Starting Ganga System\n");
    printf("[INFO] Heap size: %d bytes\n", configTOTAL_HEAP_SIZE);

    BaseType_t ret;

    // Create DS3231 Task
    ret = xTaskCreate(
        vTaskDS3231,
        "DS3231_RTC",
        configMINIMAL_STACK_SIZE * 8,
        NULL,
        tskIDLE_PRIORITY + 2,
        NULL);
    if (ret != pdPASS) {
        printf("[ERROR] Failed to create DS3231 Task\n");
        for (;;);
    }

    // Create SPI Flash Task
    ret = xTaskCreate(
        vTaskSPIFlash,
        "SPI_Flash",
        configMINIMAL_STACK_SIZE * 8,
        NULL,
        tskIDLE_PRIORITY + 1,
        NULL);
    if (ret != pdPASS) {
        printf("[ERROR] Failed to create SPI Flash Task\n");
        for (;;);
    }

	ret = xTaskCreate(
        vLEDTask,
        "LED_Task",
        configMINIMAL_STACK_SIZE * 8,
        NULL,
        tskIDLE_PRIORITY,
        NULL);
    if (ret != pdPASS) {
        printf("[ERROR] Failed to create GPIO Task\n");
        for (;;);
    }

    printf("[MAIN] Starting FreeRTOS scheduler...\n");
    vTaskStartScheduler();

    printf("[FATAL] Scheduler returned\n");
    for (;;);
}