/**
 * @file spi.h
 * @brief This file is the header files and function prototypes needed for compiling the memory.c file
 * This file contains standard include libraries and memory manipulation header files
 *
 * @author Sowmya Akella
 * @date Aug 2, 2017
 *
 */

#ifndef __SPI_H__
#define __SPI_H__

# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

/*
This function copies byte by byte from source to destination
NOTE : my_memmove() checks the lengths of source and destination hence no memory is corrupted
Inputs - pointer to source, pointer to destination, length of the bytes to be copied
Returns - uint8_t error code
*/
uint8_t SPI_write_byte(uint8_t byte);

/*
This function copies byte by byte from source to destination
NOTE : my_memmove() checks the lengths of source and destination hence no memory is corrupted
Inputs - pointer to source, pointer to destination, length of the bytes to be copied
Returns - uint8_t error code
*/
uint8_t SPI_read_byte(uint8_t byte);

/*
This function copies byte by byte from source to destination
NOTE : my_memmove() checks the lengths of source and destination hence no memory is corrupted
Inputs - pointer to source, pointer to destination, length of the bytes to be copied
Returns - uint8_t error code
*/
void SPI_init(void);

/*
This function copies byte by byte from source to destination
NOTE : my_memmove() checks the lengths of source and destination hence no memory is corrupted
Inputs - pointer to source, pointer to destination, length of the bytes to be copied
Returns - uint8_t error code
*/
void SPI_send_packet(uint8_t * p, size_t length);

/*
This function copies byte by byte from source to destination
NOTE : my_memmove() checks the lengths of source and destination hence no memory is corrupted
Inputs - pointer to source, pointer to destination, length of the bytes to be copied
Returns - uint8_t error code
*/
void SPI_flush();

#endif /* __SPI_H__ */
