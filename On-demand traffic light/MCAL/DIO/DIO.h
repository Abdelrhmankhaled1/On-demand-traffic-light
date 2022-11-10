/*
 * DIO.h
 *
 * Created: 10/22/2022 12:57:31 PM
 *  Author: PC
 */ 


#ifndef DIO_H_
#define DIO_H_


typedef unsigned char uint8_t;

#define HIGH 0
#define LOW 1

#define IN 0
#define OUT 1

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
//
#define TCCR0 (*(volatile uint8_t*)(0x53))
#define TCNT0 (*(volatile uint8_t*)(0x52))
#define TIFR (*(volatile uint8_t*)(0x58))
#define TIMSK (*(volatile uint8_t*)(0x59))



#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)



#define PORTB *((volatile uint8_t*)0x38)
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)


#define PORTC *((volatile uint8_t*)0x35)
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)


#define PORTD *((volatile uint8_t*)0x32)
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)



#define MCUCR (*(volatile uint8_t*)(0x55))

#define SREG (*(volatile uint8_t*)(0x5F))
#define GICR (*(volatile uint8_t*)(0x5B))
#define GIFR (*(volatile uint8_t*)(0x5A))
//




void DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction);
void DIO_write(uint8_t portNumber, uint8_t pinNumber, uint8_t value);
void DIO_toggle(uint8_t portNumber, uint8_t pinNumber);
void DIO_readPin(uint8_t portNumber, uint8_t pinNumber , uint8_t* value);


#endif /* DIO_H_ */