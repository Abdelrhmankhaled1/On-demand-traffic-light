/*
 * LEDS.h
 *
 * Created: 11/11/2022 9:40:15 PM
 *  Author: PC
 */ 


#ifndef LEDS_H_
#define LEDS_H_

#include "../../MCAL/DIO/DIO.h"

void LED_INIT(uint8_t LPORT, uint8_t LPIN);
void LED_ON(uint8_t LPORT, uint8_t LPIN);
void LED_OFF(uint8_t LPORT, uint8_t LPIN);
void LED_TOGGLE(uint8_t LPORT, uint8_t LPIN);





#endif /* LEDS_H_ */