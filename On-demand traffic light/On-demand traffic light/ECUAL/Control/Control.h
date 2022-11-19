/*
 * Control.h
 *
 * Created: 11/11/2022 9:38:58 PM
 *  Author: PC
 */ 


#ifndef CONTROL_H_
#define CONTROL_H_

#include "../LEDS/LEDS.h"
#include "../Buttons/Buttons.h"
#include "../../MCAL/Timers/Timers.h"
#include "../Interrupts/Interrupts.h"

int State;

void Car_yellow_led_timer();
void Yellow_led_timer();
void ALL_OFF();

#endif /* CONTROL_H_ */