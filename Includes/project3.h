/**
 * @file project3.h
 * @brief This file is the header files and function prototypes needed for compiling the memory.c file
 * This file contains standard include libraries and memory manipulation header files
 *
 * @author Sowmya Akella
 * @date Aug 2, 2017
 *
 */

#ifndef __PROJECT3_H__
#define __PROJECT3_H__

# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef enum
{
	SPI_TEST_SUCCESS = 0,
	SPI_TEST_ERROR
}spi_teststat;

/* Enables the CS pin by setting it low for enabling SPI but not RF communication
 * NOTE : my_memmove() checks the lengths of source and destination hence no memory is corrupted
 * Inputs - pointer to source, pointer to destination, length of the bytes to be copied
 * Returns - uint8_t error code
`*/
spi_teststat spi_stat;

void GPIO_nrf_init();

/* Enables the CS pin by setting it low for enabling SPI but not RF communication
 * NOTE : my_memmove() checks the lengths of source and destination hence no memory is corrupted
 * Inputs - pointer to source, pointer to destination, length of the bytes to be copied
 * Returns - uint8_t error code
`*/
spi_teststat test_spi();

#endif /* __PROJECT3_H__ */
