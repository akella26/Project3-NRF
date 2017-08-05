/**
 * @file spi.h
 * @brief This file is the header files and function prototypes needed for compiling the memory.c file
 * This file contains standard include libraries and memory manipulation header files
 *
 * @author Sowmya Akella
 * @date June 25, 2017
 *
 */

#ifndef __SPI_H__
#define __SPI_H__

# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

void SPI_write_byte(uint8_t byte);

void SPI_read_byte(uint8_t byte);

void SPI_init(void);

void SPI_send_packet(uint8_t * p, size_t length);

void SPI_flush();

#endif /* __SPI_H__ */
