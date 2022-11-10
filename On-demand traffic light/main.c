/*
 * GccApplication1.c
 *
 * Created: 10/22/2022 10:59:47 AM
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

