/**
 * @file spi.c
 * @brief This file is to be used to project 3.
 *
 * @author Sowmya
 * @date Aug 2, 2017
 *
 */

#include "spi.h"
#include "gpio.h"
#include "MKL25Z4.h"

void SPI_init(void)
{
	GPIO_nrf_init();
	SPI0_C1 = SPI_C1_MSTR_MASK;   		//Set SPI0 to Master & SS pin to no auto SS,falling edge
//CHANGE THIS LATER TO HIGHER CLOCK RATE
	SPI0_BR = (SPI_BR_SPPR(0x02) | SPI_BR_SPR(0x08));    	 //Set baud rate prescale divisor to 3 & set baud rate divisor to 64 for baud rate of 15625 hz
	SPI0_C1 |= SPI_C1_SPE_MASK;   		 					//Enable SPI0
}

void SPI_write_byte(uint8_t byte)
{
uint8_t test_byte;
	while(!(SPI_S_SPTEF_MASK & SPI0_S))
	{
		__asm("nop");  //While buffer is not empty do nothing
	}
	SPI0_D = byte;    //Write char to SPI

	while(!(SPI_S_SPRF_MASK & SPI0_S))         //To check if receive is happening correctly
	{
		__asm("nop");  //While buffer is not empty do nothing
	}
	test_byte = SPI0_D;    //Write char to SPI
	test_byte++;
}

void SPI_read_byte(uint8_t byte)
{
	while(!(SPI_S_SPRF_MASK & SPI0_S))
	{
		__asm("nop");  //While buffer is not empty do nothing
	}
	byte = SPI0_D;    //Write char to SPI
}

void SPI_send_packet(uint8_t * p, size_t length)
{
	uint32_t i;
	if(p == NULL || length <=0)
		return;
	else
	{
		for(i=0;i<length;i++)
		{
			SPI_write_byte(*(p+i));
		}
	}
}

void SPI_flush()
{
	while(!(SPI_S_SPTEF_MASK & SPI0_S))        //Wait until transmit buffer is empty
	{
			__asm("nop");  //While buffer is not empty do nothing
	}

}
