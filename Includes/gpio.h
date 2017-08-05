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
void GPIO_CS_high();
void GPIO_CS_low();

#endif /* __GPIO_H__ */
