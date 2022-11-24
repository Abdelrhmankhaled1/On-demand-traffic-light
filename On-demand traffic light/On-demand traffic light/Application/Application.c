/*
 * Application.c
 *
 * Created: 11/11/2022 9:41:08 PM
 *  Author: PC
 */ 

#include "Application.h"
#include "../ECUAL/Control/Control.h"

int flag = 1;


void app_init(void){
	
	BUTTON_INIT(BUTTON_PORT,BUTTON_PIN);

	LED_INIT(PORT_B,PIN0);
	LED_INIT(PORT_B,PIN1);
	LED_INIT(PORT_B,PIN2);
	
	LED_INIT(PORT_A,PIN0);
	LED_INIT(PORT_A,PIN1);
	LED_INIT(PORT_A,PIN2);
	
	Timer0_Init();
	sei();
	RISING_EDGE_SETUP();
	SETUP_INT0();
}


void app_start(void){
	while(1){
		ALL_OFF();
		State = 1;
		LED_ON(PORT_A,PIN0);
		if(test() == 1){
			continue;
		}
		TIMER0_delay();
		if(test() == 1){
			continue;
		}
		State = 1;
		LED_OFF(PORT_A,PIN0);
		if(test() == 1){
			continue;
		}
		Car_yellow_led_timer();
		if(test() == 1){
			continue;
		}
		State = 0;
		LED_ON(PORT_A,PIN2);
		if(test() == 1){
			continue;
		}
		TIMER0_delay();
		if(test() == 1){
			continue;
		}
		State = 1;
		LED_OFF(PORT_A,PIN2);
		if(test() == 1){
			continue;
		}
		Car_yellow_led_timer();
	}
}

int test(){
	if(flag == 0){
		if(State == 1){
			
			ALL_OFF();
			LED_ON(PORT_B,PIN2);
			Yellow_led_timer();
			LED_OFF(PORT_B,PIN2);
			
			LED_ON(PORT_B,PIN0);
			State = 0;
			LED_ON(PORT_A,PIN2);
			TIMER0_delay();
			LED_OFF(PORT_B,PIN0);
			State = 1;
			LED_OFF(PORT_A,PIN2);
			Yellow_led_timer();
			flag = 1;
			return 1;
		}
		else{
			ALL_OFF();
			
			State = 0;
			LED_ON(PORT_A,PIN2); //car red
			LED_ON(PORT_B,PIN0); //ped green
			TIMER0_delay();
			TIMER0_delay2();
			LED_OFF(PORT_A,PIN2);
			LED_OFF(PORT_B,PIN0);
			Yellow_led_timer();
			flag = 1;
			return 1;
		}
	}
	return 0;
}

ISR(EXT_INT_0){
	flag = 0;
}