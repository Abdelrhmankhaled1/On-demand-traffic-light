/*
 * Control.c
 *
 * Created: 11/11/2022 9:39:10 PM
 *  Author: PC
 */ 

#include "Control.h"

void ALL_OFF(){
	LED_OFF(PORT_B,PIN0);
	LED_OFF(PORT_A,PIN0);
	LED_OFF(PORT_B,PIN1);
	LED_OFF(PORT_A,PIN1);
	LED_OFF(PORT_B,PIN2);
	LED_OFF(PORT_A,PIN2);
}

void Car_yellow_led_timer(){
	TIMER_blink_car();
	State = 1;
	LED_OFF(PORT_A,PIN1);
}


void Yellow_led_timer(){
	TIMER_blink();
	LED_OFF(PORT_B,PIN1);
	State = 1;
	LED_OFF(PORT_A,PIN1);
}