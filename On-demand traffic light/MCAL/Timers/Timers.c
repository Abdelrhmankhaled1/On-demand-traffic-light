/*
 * Timers.c
 *
 * Created: 10/22/2022 12:58:27 PM
 *  Author: PC
 */ 
#include "Timers.h"



void Timer0_Init()
{
	TCCR0 = 0x00;
	TCNT0 = 0x00; 
}

void Timer0_delay()
{
	TCCR0 |= (1<<0);
	i = 0;
	while(i < overflows && ((PIND&0b00000100) == 0) ){   
		while((TIFR & (1<<0)) == 0 ); 
		TIFR |= (1<<0);
		i++;
	}
	i = 0;
	TCCR0 = 0x00;
}
void TIMER_blink(){
	TCCR0 |= (1<<0);
	while(i < overflows && ((PIND&0b00000100) == 0)){
		while((TIFR & (1<<0)) == 0 );
		TIFR |= (1<<0);
		i++;
		if(i % 1953 == 0){
				DIO_toggle(PORT_A,PIN1);
				DIO_toggle(PORT_B,PIN1);
		}
	}
	i = 0;
	TCCR0 = 0x00;
}

void TIMER_blink_car(){
	TCCR0 |= (1<<0);
	while(i < overflows  && ((PIND&0b00000100) == 0) ){
		while((TIFR & (1<<0)) == 0 );
		TIFR |= (1<<0);
		i++;
		if(i % 1953 == 0){
			DIO_toggle(PORT_B,PIN1);
		}
	}
	i = 0;
	TCCR0 = 0x00;
}