/*
 * leds.h
 *
 * Created: 10/22/2022 12:55:06 PM
 *  Author: PC
 */ 


#ifndef LEDS_H_
#define LEDS_H_
#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/Timers/Timers.h"
#include "../../MCAL/Interrupts/Interrupts.h"


int carState;

void LED_INIT (uint8_t LPORT , uint8_t LPIN);
void LED_ON (uint8_t LPORT , uint8_t LPIN);
void LED_OFF (uint8_t LPORT , uint8_t LPIN);
void LED_TOGGLE (uint8_t LPORT , uint8_t LPIN);

void TIMER_yellow_car();
void TIMER_yellow();
void LED_all_off();
void normal();

void RC_ON();
void RC_OFF();
void YC_ON();
void YC_OFF();
void GC_ON();
void GC_OFF();

void RP_ON();
void RP_OFF();
void YP_ON();
void YP_OFF();
void GP_ON();
void GP_OFF();


#endif /* LEDS_H_ */