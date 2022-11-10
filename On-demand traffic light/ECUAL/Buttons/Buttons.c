/*
 * Buttons.c
 *
 * Created: 10/22/2022 12:55:31 PM
 *  Author: PC
 */ 
#include "buttons.h"

void BUTTON_INIT(uint8_t BPort, uint8_t BPin)
{
	DIO_init (BPort, BPin, IN);
}

void BUTTON_READ(uint8_t BPort, uint8_t BPin, uint8_t * value)
{
	DIO_readPin( BPort, BPin, value );
	
}


