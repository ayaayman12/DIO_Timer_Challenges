/*
 * sevenSegment.c
 *
 * Created: 1/18/2020 8:56:36 PM
 *  Author: A_ayman
 */ 

#include "sevenSeg.h"

void sevenSegInit(En_SevenSegId_t a_segment_id)
{
	switch (a_segment_id)
	{
		case SEG_0:
		{
			gpioPinDirection(SEG_BCD_GPIO,SEG_BCD_BITS,OUTPUT);  //set data bits direction as output
		   gpioPinDirection(SEG_EN1_GPIO,SEG_EN1_BIT,OUTPUT);   //set enable bit direction as output
			gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,LOW);
			break;
		}
		case SEG_1:
		{
			gpioPinDirection(SEG_BCD_GPIO,SEG_BCD_BITS,OUTPUT);  //set data bits direction as output
			gpioPinDirection(SEG_EN2_GPIO,SEG_EN2_BIT,OUTPUT);   //set enable bit direction as output
			gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,LOW);
			break;
		}
		default:
		break;
	}
	
}

void sevenSegWrite(En_SevenSegId_t en_segment_id, uint8_t u8_number)
{
	switch( en_segment_id)
	{
		case SEG_0:
		{
			switch (u8_number)
			{
				case 0: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,LOW); break;
				case 1: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,1); break;
				case 2: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,2); break;
				case 3: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,3); break;
				case 4: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,4); break;
				case 5: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,5); break;
				case 6: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,6); break;
				case 7: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,7); break;
				case 8: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,8); break;
				case 9: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,9); break;
				default:break;
			}
			break;
		}
		case SEG_1:
		{
			switch (u8_number)
			{
				case 0: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,LOW); break;
				case 1: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,1); break;
				case 2: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,2); break;
				case 3: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,3); break;
				case 4: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,4); break;
				case 5: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,5); break;
				case 6: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,6); break;
				case 7: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,7); break;
				case 8: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,8); break;
				case 9: gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,9); break;
				default:break;
			}
		break;
	}	
		
	}
}
/* This Function is implemented to enable the REquired 7-Segment*/
/* By writing High to the SEG_ENx_BIT*/
void sevenSegEnable(En_SevenSegId_t en_segment_id)
{
	switch (en_segment_id)
	{
		case SEG_0:
		{
			gpioPinWrite(SEG_EN1_GPIO,SEG_EN1_BIT,HIGH);
			break;
		
		}
		case SEG_1:
		{
			gpioPinWrite(SEG_EN2_GPIO,SEG_EN2_BIT,HIGH);
			break;
		}
		default:
		break;
	}

	}

/* This Function is implemented to disable the Required 7-Segment*/
/* By writing low to the SEG_ENx_BIT*/
void sevenSegDisable(En_SevenSegId_t en_segment_id)
{
	switch (en_segment_id)
	{
		case SEG_0:
		{
			gpioPinWrite(SEG_EN1_GPIO,SEG_EN1_BIT,LOW);
			break;
			
		}
		case SEG_1:
		{
			gpioPinWrite(SEG_EN2_GPIO,SEG_EN2_BIT,LOW);
			break;
		}
		default:
		break;
	}

}
