/*
 * Test_Buttons.h
 *
 * Created: 11/24/2022 11:31:29 PM
 *  Author: PC
 */ 


#ifndef TEST_BUTTONS_H_
#define TEST_BUTTONS_H_
#include "util/delay.h"
void main_for_testing_buttons ()
{
	LED_INIT (PORTA,PIN5);
	BUTTON_INIT(PORTD, PIN2);
	while (1)
	{
		uint8_t button_state ;
		DIO_read(PORTD, PIN2, &button_state );
		if (button_state == HIGH)
		{
			LED_ON (PORTA,PIN5);
		}
		else if (button_state == LOW)
		{
			LED_OFF (PORTA,PIN5);
		}

	}
}

#endif /* TEST_BUTTONS_H_ */