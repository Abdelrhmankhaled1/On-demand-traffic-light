/*
 * Buttons.h
 *
 * Created: 10/22/2022 12:55:41 PM
 *  Author: PC
 */ 


#ifndef BUTTONS_H_
#define BUTTONS_H_

#include "../../MCAL/DIO/DIO.h"

#define BUTTON_PORT PORT_D
#define BUTTON_PIN PIND&0b00000100
#define LOW		1
#define HIGH	0

void BUTTON_INIT(uint8_t BPort, uint8_t BPin);
void BUTTON_READ(uint8_t BPort, uint8_t BPin, uint8_t * value);


#endif /* BUTTONS_H_ */