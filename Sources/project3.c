/**
 * @file gpio.c
 * @brief This file is to be used to project 3.
 *
 * @author Sowmya
 * @date Aug 2, 2017
 *
 */

#include "gpio.h"
#include "spi.h"
#include "MKL25Z4.h"

void project3()
{
	uint8_t byte = 0x05;
	SPI_init();
	GPIO_CS_low();
	SPI_write_byte(byte);
	while(1)
	{

	}
}

