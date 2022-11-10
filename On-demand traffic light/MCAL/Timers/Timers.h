/*
 * Timers.h
 *
 * Created: 10/22/2022 12:58:38 PM
 *  Author: PC
 */ 


#ifndef TIMERS_H_
#define TIMERS_H_

#include "../DIO/DIO.h"


#define overflows 19532
#define overflows1 9766

unsigned int i;

void Timer0_Init();
void Timer0_delay();
void TIMER_blink();
void TIMER_blink_car();

#endif /* TIMERS_H_ */