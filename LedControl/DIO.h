/************************************/
/*SWC: DIO Driver                   */
/*Author: Aya Hesham                */
/*Version: V1                       */
/*Date: 9 Oct 2021                  */
/************************************/

#ifndef REPO_MCAL_DIO_H_
#define REPO_MCAL_DIO_H_

#include "std_types.h"
/*   Ports  define         *********************************************           *****/
#define PortA_Num 0
#define PortB_Num 1
#define PortC_Num 2
#define PortD_Num 3
/*   Pins  define         *********************************************           *****/

#define Pin_0 0
#define Pin_1 1
#define Pin_2 2
#define Pin_3 3
#define Pin_4 4
#define Pin_5 5
#define Pin_6 6
#define Pin_7 7
/*    Direction              *********************************************           *****/
#define All_output 255
#define All_input 0
#define output 1
#define input 0
#define high 1
#define low 0
#define All_high 255
#define All_low 0xff
#define ok 1
#define Not_ok 0l

#define pull_up 1

// SEVEN SEG
#define Num0 0b00111111
#define Num1 0b00000110
#define Num2 0b01011011
#define Num3 0b01001111
#define Num4 0b01100110
#define Num5 0b01101101
#define Num6 0b01111101
#define Num7 0b00000111
#define Num8 0b01111111
#define Num9 0b01101111


u8 DIO_Set_Port_direction(u8 Port_Num,u8 Direction);
u8 DIO_Set_Pin_direction(u8 Port_Num,u8 PIN_NUM,u8 Direction);
u8 DIO_Set_Port_Value(u8 Port_Num,u8 Value);
u8 DIO_Set_Pin_Value(u8 Port_Num,u8 PIN_NUM,u8 Value);
u8 DIO_get_Port_Value(u8 Port_Num,u8 *Register_reading);
u8 DIO_get_Pin_Value(u8 Port_Num,u8 PIN_NUM,u8 *Register_reading);

#endif /* REPO_MCAL_DIO_H_ */
