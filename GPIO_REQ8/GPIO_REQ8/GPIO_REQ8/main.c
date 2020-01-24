/*
 * pushButton_App.c
 *
 * Created: 1/20/2020 10:42:23 PM
 * Author : A_ayman
 */ 

#include "gpio.h"
#include "pushButton.h"
#include "led.h"


int main(void)
{
	uint8_t BTN_status;
	uint8_t count=1;
	Led_Init(LED_0);
	pushButtonInit(BTN_0);
    /* Replace with your application code */
	
    while (1) 
    {
		BTN_status=pushButtonGetStatus(BTN_0);
		if (BTN_status==Pressed)
		{
			count++;
			while (count!=0)
			{
				count--;
				
				Led_On(LED_0);
				SwDelay_ms(170);
				BTN_status=pushButtonGetStatus(BTN_0);
				if (BTN_status==Pressed)
				{
					count++;
				}
				SwDelay_ms(170);
				BTN_status=pushButtonGetStatus(BTN_0);
				if (BTN_status==Pressed)
				{
					count++;
				}
				SwDelay_ms(170);
				BTN_status=pushButtonGetStatus(BTN_0);
				if (BTN_status==Pressed)
				{
					count++;
				}
				SwDelay_ms(170);
				BTN_status=pushButtonGetStatus(BTN_0);
				if (BTN_status==Pressed)
				{
					count++;
				}
				SwDelay_ms(170);
				BTN_status=pushButtonGetStatus(BTN_0);
				if (BTN_status==Pressed)
				{
					count++;
				}
				
			}
			
		}
		else
		{
			Led_Off(LED_0);
		}
	}
}


