/**
 * @file gpio.c
 * @brief This file is to be used to project 3.
 *
 * @author Sowmya
 * @date Aug 2, 2017
 *
 */

#include "gpio.h"
#include "MKL25Z4.h"

void GPIO_nrf_init()
{
	SIM_SCGC5 |= SIM_SCGC5_PORTD_MASK;      //Turn on clock to D module
	SIM_SCGC4 |= SIM_SCGC4_SPI0_MASK;       //Enable SPI0 clock

	PTB_BASE_PTR->PDDR = 1 << 0;			//Set output direction for PTD0
	PORTD_PCR0 = PORT_PCR_MUX(0x1);    		//Set PTD0 to mux 1 GPIO as we are not choosing auto Slave Select
	GPIO_CS_high();							//Keep it high initially
	PORTD_PCR1 = PORT_PCR_MUX(0x2);    		//Set PTD1 to mux 2 [SPI0_SCK]
	PORTD_PCR2 = PORT_PCR_MUX(0x2);    		//Set PTD2 to mux 2 [SPI0_MOSI]
	PORTD_PCR3 = PORT_PCR_MUX(0x2);    		//Set PTD3 to mux 2 [SPIO_MISO]

	PTB_BASE_PTR->PDDR = 1 << 5;			//Set output direction for PTD5 CE pin
	PORTD_PCR5 = PORT_PCR_MUX(0x1);    		//Set PTD0 to mux 1 GPIO as we are not choosing auto Slave Select
}

void GPIO_CS_high()
{
	PTD_BASE_PTR->PSOR = 1 << 0;            //Setting Chip select pin to high for PTD0
}

void GPIO_CS_low()
{
	PTD_BASE_PTR->PCOR = 1 << 0;            //Setting Chip select pin to high for PTD0
}


