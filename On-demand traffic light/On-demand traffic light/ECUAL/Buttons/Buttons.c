/*
 * Buttons.c
 *
 * Created: 11/11/2022 9:40:38 PM
 *  Author: PC
 */ 

#include "Buttons.h"


void BUTTON_INIT(uint8_t BPort, uint8_t BPin){
	DIO_init(BPort,BPin,IN);
}