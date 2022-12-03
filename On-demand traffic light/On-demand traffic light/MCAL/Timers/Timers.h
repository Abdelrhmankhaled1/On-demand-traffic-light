/*
 * Timers.h
 *
 * Created: 11/11/2022 9:39:59 PM
 *  Author: PC
 */ 


#ifndef TIMERS_H_
#define TIMERS_H_

#include "../DIO/DIO.h"

#define overflows 19532

unsigned int i;


void Timer0_init();
void TIMER0_delay();
void TIMER0_delay2();
void TIMER_blink();




#endif /* TIMERS_H_ */