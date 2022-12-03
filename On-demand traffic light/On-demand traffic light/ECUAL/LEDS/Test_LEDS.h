/*
 * Test_LEDS.h
 *
 * Created: 11/24/2022 11:31:04 PM
 *  Author: PC
 */ 


#ifndef TEST_LEDS_H_
#define TEST_LEDS_H_
#include "util/delay.h"
void main_for_testing_leds ()
{
	LED_INIT (PORTA,PIN5);
	while (1)
	{
		LED_ON (PORTA,PIN5);
		_delay_ms (5000);
		LED_OFF (PORTA,PIN5);
		_delay_ms (5000);
		LED_TOGGLE (PORTA,PIN5);
	}
}


#endif /* TEST_LEDS_H_ */