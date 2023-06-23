/************************************/
/*SWC: UART Driver                  */
/*Author: Aya Hesham                */
/*Version: V1                       */
/*Date: 3 Dec 2021                  */
/************************************/

#include <avr/io.h>
#include "std_types.h"
#include "macros.h"
#include "DIO.h"


void UART_Init(void)
{
	Clear_Bit(UCSRB,2);			//8 bit length
	Set_Bit(UCSRB,3);			//Tx enable
	Set_Bit(UCSRB,4);			//Rx enable

	//Set_Bit(UCSRC,7);			hf//to write in URRH			//or write this way
	UCSRC=0b10100110;			//URRH(bit 7),Async(bit 6),even parity(bit 5,4),1 bit stop(bit 3),size(bit 2,1),clock(bit 0) <--clock not important

	UBRRL=51;					//speed is 9600
}

u8 UART_Recive_Data(void)
{
	DIO_Set_Pin_direction(PortD_Num,Pin_0,input);
	while((Get_Bit(UCSRA,7))==0);
	return UDR;
}

void UART_Transmit_Data(u8 data)
{
	DIO_Set_Pin_direction(PortD_Num,Pin_1,output);
	while((Get_Bit(UCSRA,5))==0);
	UDR=data;

}
