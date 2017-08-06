/**
 * @file gpio.h
 * @brief This file is the header files and function prototypes needed for compiling the memory.c file
 * This file contains standard include libraries and memory manipulation header files
 *
 * @author Sowmya Akella
 * @date Aug 2, 2017
 *
 */

#ifndef __GPIO_H__
#define __GPIO_H__

# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

void GPIO_nrf_init();


/* Enables the CS pin by setting it low for enabling SPI but not RF communication
 * NOTE : my_memmove() checks the lengths of source and destination hence no memory is corrupted
 * Inputs - pointer to source, pointer to destination, length of the bytes to be copied
 * Returns - uint8_t error code
`*/
#define nrf_chip_enable() PTC_BASE_PTR->PCOR = 1 << 4;

/*Enables the CS pin by setting it high for enabling SPI but not RF communication
 * NOTE : my_memmove() checks the lengths of source and destination hence no memory is corrupted
 * Inputs - pointer to source, pointer to destination, length of the bytes to be copied
 * Returns - uint8_t error code
 */
#define nrf_chip_disable() PTC_BASE_PTR->PSOR = 1 << 4;

/*Enables the CE pin by setting it high for enabling SPI but not RF communication
 * NOTE : my_memmove() checks the lengths of source and destination hence no memory is corrupted
 * Inputs - pointer to source, pointer to destination, length of the bytes to be copied
 * Returns - uint8_t error code
 */
#define nrf_transmit_enable() PTC_BASE_PTR->PSOR = 1 << 8;

/*Enables the CE pin by setting it low for enabling SPI but not RF communication
 *NOTE : my_memmove() checks the lengths of source and destination hence no memory is corrupted
 *Inputs - pointer to source, pointer to destination, length of the bytes to be copied
 *Returns - uint8_t error code
 */
#define nrf_transmit_disable() PTC_BASE_PTR->PCOR = 1 << 8;

#endif /* __GPIO_H__ */
