/*
 * Application.h
 *
 * Created: 10/22/2022 12:53:09 PM
 *  Author: PC
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_

#include <setjmp.h>
#include "../ECUAL/LEDs/Leds.h"
#include "../ECUAL/Buttons/buttons.h"



void app_init(void);
void app_start(void);
int check();

#endif /* APPLICATION_H_ */