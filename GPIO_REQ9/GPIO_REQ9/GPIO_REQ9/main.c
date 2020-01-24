/*
 * GPIO_REQ9.c
 *
 * Created: 1/18/2020 9:18:59 PM
 * Author : A_ayman
 */ 


#include "gpio.h"
#include "std_types.h"
#include "registers.h"
#include "led.h"
#include "softwareDelay.h"



void periodic_state_machine(void)
{
	static uint8_t machine_no=0;
	switch(machine_no)
	{
		case(0):
		Led_Off(LED_2);
		Led_On(LED_1);         // it means go..
		SwDelay_ms(1000);
		machine_no=1;
		break;
		case (1):
		Led_Off(LED_1);
		Led_On(LED_3);        // it means stop.
		SwDelay_ms(1000);
		machine_no=2;
		break;
		case (2):
		Led_Off(LED_3);
		Led_On(LED_2);
		SwDelay_ms(1000);     // it means get ready.
		machine_no=0;
		break;
		default:
		break;
		
	}
	
	
}



int main(void)
{
    /* Replace with your application code */
	Led_Init(LED_1);
	Led_Init(LED_2);
	Led_Init(LED_3);
    while (1) 
    {
		periodic_state_machine();
    }
}

