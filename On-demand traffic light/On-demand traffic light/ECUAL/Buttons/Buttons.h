/*
 * Buttons.h
 *
 * Created: 11/11/2022 9:40:48 PM
 *  Author: PC
 */ 


#ifndef BUTTONS_H_
#define BUTTONS_H_

#include "../../MCAL/DIO/DIO.h"

#define BUTTON_PORT PORT_D
#define BUTTON_PIN PIND &PIN4

#define LOW		0
#define HIGH	1

void BUTTON_INIT(uint8_t BPort, uint8_t BPin);


#endif /* BUTTONS_H_ */