/************************************/
/*SWC: Led Control Main             */
/*Author: Aya Hesham                */
/*Version: V1                       */
/*Date: 3 Dec 2021                  */
/************************************/

#include <avr/io.h>
#include <avr/delay.h>

#include "std_types.h"
#include "macros.h"

#include "DIO.h"
#include "UART.h"


int main(void)
{
	UART_Init();											//with transmitting or reciving

	u8 data;												//recive
	DIO_Set_Port_direction(PortA_Num, All_output);


	while(1)
	{

		data = UART_Recive_Data();


		if (data=='a')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_0,high);
		}
		else if (data== 'b')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_0,low);
		}
		else if(data=='c')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_1,high);
		}
		else if (data=='d')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_1,low);
		}
		else if (data=='e')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_2,high);
		}
		else if (data=='f')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_2,low);
		}
		else if(data=='g')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_3,high);
		}
		else if (data=='h')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_3,low);
		}
		else if (data=='i')									//quotes to send ASCII code
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_4,high);
		}
		else if (data=='j')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_4,low);
		}
		else if(data=='k')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_5,high);
		}
		else if (data=='l')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_5,low);
		}
		else if (data=='m')									//quotes to send ASCII code
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_6,high);
		}
		else if (data=='n')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_6,low);
		}
		else if(data=='o')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_7,high);
		}
		else if (data=='p')
		{
			DIO_Set_Pin_Value(PortA_Num,Pin_7,low);
		}
	}
}

