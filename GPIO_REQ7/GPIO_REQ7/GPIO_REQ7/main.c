/*
 * GPIO_REQ7.c
 *
 * Created: 1/24/2020 2:16:19 PM
 * Author : A_ayman
 */ 

#include "gpio.h"
#include "registers.h"
#include "sevenSeg.h"
#include "softwareDelay.h"

int main(void)
{
	 sevenSegInit(SEG_0);
	 sevenSegInit(SEG_1);
	 uint8_t i,j;
	 uint16_t z;
    /* Replace with your application code */
    while (1)
	 {
		  for(i=0;i<10;i++) 
		  {
				for(j=0;j<10;j++) 
				{
					 for (z=0;z<5;z++)
					 {
						   sevenSegWrite(SEG_0,j);
						   sevenSegEnable(SEG_0);
						   SwDelay_ms(100);
						   sevenSegDisable(SEG_0);
						   sevenSegWrite(SEG_1 ,i);
						   sevenSegEnable(SEG_1);
						   SwDelay_ms(100);
						   sevenSegDisable(SEG_1);
					 }
				}
			  
		  }
		
	 }

 }
	 

