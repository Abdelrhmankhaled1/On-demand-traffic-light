/*
 * DIO.c
 *
 * Created: 11/11/2022 9:41:28 PM
 *  Author: PC
 */ 

#include "DIO.h"

void DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction){
	switch(portNumber){
		case PORT_A:
		if(direction == IN){
			DDRA &= ~(1<<pinNumber);
		}
		else if(direction == OUT)
		{
			DDRA |= (1<<pinNumber);
		}
		else{}
		break;
		
		case PORT_B:
		if(direction == IN){
			DDRB &= ~(1<<pinNumber);
		}
		else if(direction == OUT)
		{
			DDRB |= (1<<pinNumber);
		}
		else{}
		break;
		
		case PORT_C:
		if(direction == IN){
			DDRC &= ~(1<<pinNumber);
		}
		else if(direction == OUT)
		{
			DDRC |= (1<<pinNumber);
		}
		else{}
		break;
		
		case PORT_D:
		if(direction == IN){
			DDRD &= ~(1<<pinNumber);
		}
		else if(direction == OUT)
		{
			DDRD |= (1<<pinNumber);
		}
		else{}
		break;
	}
}
void DIO_write(uint8_t portNumber, uint8_t pinNumber, uint8_t value){
	switch(portNumber){
		case PORT_A :
		if(value == LOW){
			PORTA &= ~(1<<pinNumber);
		}
		else if(value == HIGH)
		{
			PORTA |= (1<<pinNumber);
		}
		else{}
		break;
		
		case PORT_B :
		if(value == LOW){
			PORTB &= ~(1<<pinNumber);
		}
		else if(value == HIGH)
		{
			PORTB |= (1<<pinNumber);
		}
		else{}
		break;
		
		case PORT_C :
		if(value == LOW){
			PORTC &= ~(1<<pinNumber);
		}
		else if(value == HIGH)
		{
			PORTC |= (1<<pinNumber);
		}
		else{}
		break;
		
		case PORT_D :
		if(value == LOW){
			PORTD &= ~(1<<pinNumber);
		}
		else if(value == HIGH)
		{
			PORTD |= (1<<pinNumber);
		}
		else{}
		break;	
	}
}
void DIO_toggle(uint8_t portNumber, uint8_t pinNumber){
	switch(portNumber){
		case PORT_A:
		PORTA ^= (1<<pinNumber);
		break;
		
		case PORT_B:
		PORTB ^= (1<<pinNumber);
		break;
		
		case PORT_C:
		PORTC ^= (1<<pinNumber);
		break;
		
		case PORT_D:
		PORTD ^= (1<<pinNumber);
		break;
	}
}
void DIO_readPin(uint8_t portNumber, uint8_t pinNumber , uint8_t* value)
{
	switch(portNumber)
	{
		case PORT_A:
		if(BIT_IS_SET(PINA, pinNumber))
		{
			*value= HIGH;
		}
		else
		{
			*value= LOW;
		}
		break;
		case PORT_B:
		if(BIT_IS_SET(PINB, pinNumber))
		{
			*value= HIGH;
		}
		else
		{
			* value= LOW;
		}
		break;
		case PORT_C:
		if(BIT_IS_SET(PINC , pinNumber))
		{
			* value= HIGH;
		}
		else
		{
			* value= LOW;

		}
		break;
		case PORT_D:
		if(BIT_IS_SET(PIND , pinNumber))
		{
			* value= HIGH;
		}
		else
		{
			* value= LOW;
		}
		break;
	}
}