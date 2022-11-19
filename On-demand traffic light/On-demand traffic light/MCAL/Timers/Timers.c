/*
 * Timers.c
 *
 * Created: 11/11/2022 9:39:44 PM
 *  Author: PC
 */ 

#include "Timers.h"
#include "../../ECUAL/Buttons/Buttons.h"
#include "../../ECUAL/Control/Control.h"

void Timer0_Init(){
	TCCR0 = 0x00;
	TCNT0 = 0x00;
	
}

void TIMER0_delay(){ 
	TCCR0 |= (1<<0);
	i = 0;
	while(i < overflows && ((BUTTON_PIN) == 0) ){   
		while((TIFR & (1<<0)) == 0 );
		TIFR |= (1<<0);
		i++;
	}
	i = 0;
			
	TCCR0 = 0x00;
}

void TIMER_blink(){
	TCCR0 |= (1<<0);
	while(i < overflows){
		while((TIFR & (1<<0)) == 0 );
		TIFR |= (1<<0);
		i++;
		if(i % 1953 == 0){
			LED_TOGGLE(PORT_A,PIN1);
			LED_TOGGLE(PORT_B,PIN1);
		}
	}
	i = 0;
	TCCR0 = 0x00;
}

void TIMER_blink_car(){
	TCCR0 |= (1<<0);
	while(i < overflows  && ((BUTTON_PIN) == 0) ){ 
		while((TIFR & (1<<0)) == 0 );
		TIFR |= (1<<0);
		i++;
		if(i % 1953 == 0){
				LED_TOGGLE(PORT_B,PIN1);
		}
	}
	i = 0;
	TCCR0 = 0x00;
}