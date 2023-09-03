/*
 * File: header_file.h
 * Author: Ahmed Reda Hassan
 * Date: 03/09/2023
 *
 * Description: This header file contains function prototypes for
 * initializing the direction and controlling the state (high or low)
 * of GPIO pins on an ATmega32A microcontroller.
 */

#ifndef _HEADER_FILE_H_
#define _HEADER_FILE_H_

#include <stdint.h>

/**
 * @brief Initialize the direction of a GPIO pin as input or output.
 *
 * @param portRegister Pointer to the port register (e.g., &DDRB for PORTB).
 * @param pinNumber    The number of the pin to initialize.
 * @param isOutput     1 to set the pin as an output, 0 to set it as an input.
 */
void MCAL_DIO_initPinDirection(volatile uint8_t *portRegister,
                               uint8_t pinNumber, uint8_t isOutput);

/**
 * @brief Set the state (high or low) of a GPIO pin if it's configured as an
 * output.
 *
 * @param portRegister Pointer to the port register (e.g., &PORTB for PORTB).
 * @param pinNumber    The number of the pin to control.
 * @param isHigh       1 to set the pin high, 0 to set it low.
 */
void MCAL_DIO_setPinState(volatile uint8_t *portRegister, uint8_t pinNumber,
                          uint8_t isHigh);

#endif // _HEADER_FILE_H_
