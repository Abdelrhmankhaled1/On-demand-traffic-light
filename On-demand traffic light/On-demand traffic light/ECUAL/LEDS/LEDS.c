/*
 * LEDS.c
 *
 * Created: 11/11/2022 9:40:24 PM
 *  Author: PC
 */ 

#include "LEDS.h"


void LED_INIT(uint8_t LPORT, uint8_t LPIN){
	DIO_init(LPORT,LPIN,OUT);
}

void LED_ON(uint8_t LPORT, uint8_t LPIN){
	DIO_write(LPORT,LPIN,HIGH);
}

void LED_OFF(uint8_t LPORT, uint8_t LPIN){
	DIO_write(LPORT,LPIN,LOW);
}

void LED_TOGGLE(uint8_t LPORT, uint8_t LPIN){
	DIO_toggle(LPORT,LPIN);
}