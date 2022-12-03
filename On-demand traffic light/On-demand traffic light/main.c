/*
 * On-demand traffic light.c
 *
 * Created: 11/11/2022 9:33:28 PM
 * Author : PC
 */ 

#include <avr/io.h>
#include "Application/Application.h"
#define F_CPU 1000000UL

int main(void)
{
	app_init();
	while (1)
	{
		app_start();
	}
}

