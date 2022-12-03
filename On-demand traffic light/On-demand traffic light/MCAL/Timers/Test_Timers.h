/*
 * Test_Timers.h
 *
 * Created: 11/24/2022 11:32:22 PM
 *  Author: PC
 */ 


#ifndef TEST_TIMERS_H_
#define TEST_TIMERS_H_
#include "Timers.h"
#include "../../ECUAL/LEDS/LEDS.h"
void main_for_testing_timers(void)
{
	LED_INIT (PORTA,PIN5);
	Timer0_Init();
	while (1)
	{
		LED_ON (PORTA,PIN5);
		TIMER0_delay(5000);
		LED_OFF (PORTA,PIN5);
		TIMER0_delay(5000);
	}
}




#endif /* TEST_TIMERS_H_ */