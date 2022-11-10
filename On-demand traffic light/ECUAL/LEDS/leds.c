/*
 * leds.c
 *
 * Created: 10/22/2022 12:54:53 PM
 *  Author: PC
 */ 
#include "Leds.h"


void LED_INIT (uint8_t LPORT , uint8_t LPIN)
{
	DIO_init( LPORT, LPIN, OUT );
}

void LED_ON (uint8_t LPORT , uint8_t LPIN)
{
	DIO_write( LPORT, LPIN, HIGH );
}

void LED_OFF (uint8_t LPORT , uint8_t LPIN)
{
	DIO_write( LPORT, LPIN, LOW );
}

void LED_TOGGLE (uint8_t LPORT , uint8_t LPIN)
{
	DIO_toggle(LPORT,LPIN);
}

void LED_all_off(){
	DIO_write(PORT_A,PIN0, LOW);
	DIO_write(PORT_B,PIN0, LOW);
	DIO_write(PORT_A,PIN1, LOW);
	DIO_write(PORT_B,PIN1, LOW);
	DIO_write(PORT_A,PIN2, LOW);
	DIO_write(PORT_B,PIN2, LOW);
}

void TIMER_yellow_car(){
	TIMER_blink_car();
	YC_OFF();
}


void TIMER_yellow(){
	TIMER_blink();
	YP_OFF();
	YC_OFF();
}

void RC_OFF(){
	carState = 1;
	DIO_write(PORT_B,PIN2, LOW); //RED car
}

void RC_ON(){
	carState = 0;
	DIO_write(PORT_B,PIN2, HIGH); //RED car
}

void YC_OFF(){
	carState = 1;
	DIO_write(PORT_B,PIN1, LOW); //RED car
}

void YC_ON(){
	carState = 1;
	DIO_write(PORT_B,PIN1, HIGH); //RED car
}

void GC_OFF(){
	carState = 1;
	DIO_write(PORT_B,PIN0, LOW); //RED car
}

void GC_ON(){
	carState = 1;
	DIO_write(PORT_B,PIN0, HIGH); //RED car
}

void RP_ON(){
	DIO_write(PORT_A,PIN2, HIGH); //RED car
}

void RP_OFF(){
	DIO_write(PORT_A,PIN2, LOW); //RED car
}

void GP_ON(){
	DIO_write(PORT_A,PIN0, HIGH); //RED car
}

void GP_OFF(){
	DIO_write(PORT_A,PIN0, LOW); //RED car
}

void YP_ON(){
	DIO_write(PORT_A,PIN1, HIGH); //RED car
}

void YP_OFF(){
	DIO_write(PORT_A,PIN1, LOW); //RED car
}



