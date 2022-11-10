/*
 * Applicatoin.c
 *
 * Created: 10/22/2022 12:52:51 PM
 *  Author: PC
 */ 
#include "Application.h"


int carMode = 1;


void app_init(void)
{
	BUTTON_INIT(BUTTON_PORT,BUTTON_PIN);
	LED_INIT(PORT_A,PIN0);
	LED_INIT(PORT_A,PIN1);
	LED_INIT(PORT_A,PIN2);
	LED_INIT(PORT_B,PIN0);
	LED_INIT(PORT_B,PIN1);
	LED_INIT(PORT_B,PIN2);
	Timer0_Init();
	sei(); 
	RISING_EDGE_SETUP();
	SETUP_INT0();
}


void app_start(void)
{
	while(1){
	LED_all_off();
	
	GC_ON();
	if(check() == 1){
		continue;
	}
	
	Timer0_delay();
	if(check() == 1){
		continue;
	}
	GC_OFF();
	if(check() == 1){
		continue;
	}
	TIMER_yellow_car();
	if(check() == 1){
		continue;
	}
	
	RC_ON();
	if(check() == 1){
		continue;
	}
	Timer0_delay();
	if(check() == 1){
		continue;
	}
	RC_OFF();
	if(check() == 1){
		continue;
	}

	TIMER_yellow_car();
}
}

int check(){
	if(carMode == 0){ 
		if(carState == 1){   //if car light is green or yellow
			
			LED_all_off();
			RP_ON();
			TIMER_yellow();
			RP_OFF();
			
			GP_ON();
			RC_ON();
			Timer0_delay();
			
			GP_OFF();
			RC_OFF();
			
			carMode = 1;
			return 1;
		}
		else{ //if car light is red
			LED_all_off();
			
			RC_ON();
			GP_ON();
			Timer0_delay();
			RC_OFF();
			TIMER_yellow();
			GP_OFF();
			RP_ON();
			GC_ON();
			carMode = 1;
			return 1;
		}
	}
	return 0;
}

ISR(EXT_INT_0){
	carMode = 0;
}
