/************************************/
/*SWC: DIO Driver                   */
/*Author: Aya Hesham                */
/*Version: V1                       */
/*Date: 9 Oct 2021                  */
/************************************/

#include "DIO.h"
#include "Reg.h"
#include "std_types.h"
#include "macros.h"



u8 DIO_Set_Port_direction(u8 Port_Num,u8 Direction)
{
    u8 x=2;
    if ((Port_Num>PortD_Num))
    {
        x=0;
    }
    else 
    {
        x=1;
        switch (Port_Num)
        {
            case PortA_Num:
                DDRA=Direction ;
                break;
            case PortB_Num:
                DDRB=Direction ;
                break;
            case PortC_Num:
                DDRC=Direction ;
                break;
            case PortD_Num:
                DDRD=Direction ;
                break;
            default:
                break;
        };
    }
    return x;
}


u8 DIO_Set_Pin_direction(u8 Port_Num,u8 PIN_NUM,u8 Direction)
{
    u8 x=2;
    if (PIN_NUM<8)
    {
        if (Direction <= 1)
        {
            switch (Port_Num)
            {
            case PortA_Num:
                switch (Direction)
                {
                case output:
                    Set_Bit(DDRA,PIN_NUM);
                    break;
                case input:
                    Clear_Bit(DDRA,PIN_NUM);
                    break;
                }
            break;
            case PortB_Num:
                switch (Direction)
                {
                case output:
                    Set_Bit(DDRB,PIN_NUM);
                    break;
                case input:
                    Clear_Bit(DDRB,PIN_NUM);
                    break;
                }
            break;
            case PortC_Num:
                switch (Direction)
                {
                case output:
                    Set_Bit(DDRC,PIN_NUM);
                    break;
                case input:
                    Clear_Bit(DDRC,PIN_NUM);
                    break;
                }
            break;
            case PortD_Num:
                switch (Direction)
                {
                case output:
                    Set_Bit(DDRD,PIN_NUM);
                    break;
                case input:
                    Clear_Bit(DDRD,PIN_NUM);
                    break;
                }
            break;
            default:
                break;
            };
        }
        x=1;
    }
    else
    {
        x=0;
    }
    return x;   
}


u8 DIO_Set_Port_Value(u8 Port_Num,u8 Value)
{
    u8 x=2;
    if (Port_Num>PortD_Num)
    {
        x=0;
    }
    else 
    {
        x=1;
        switch (Port_Num)
        {
            case PortA_Num:
                PORTA=Value;
                break;
            case PortB_Num:
                PORTB=Value;
                break;
            case PortC_Num:
                PORTC=Value;
                break;
            case PortD_Num:
                PORTD=Value;
                break;
        };
    }
    return x;
}


u8 DIO_Set_Pin_Value(u8 Port_Num,u8 PIN_NUM,u8 Value)
{
    u8 x=2;
    if (PIN_NUM<8)
    {
        if (Value<=1)
        {
            switch (Port_Num)
            {
            case PortA_Num:
                switch (Value)
                {
                case output:
                    Set_Bit(PORTA,PIN_NUM);
                    break;
                case input:
                    Clear_Bit(PORTA,PIN_NUM);
                    break;
                }
            break;
            case PortB_Num:
                switch (Value)
                {
                case output:
                    Set_Bit(PORTB,PIN_NUM);
                    break;
                case input:
                    Clear_Bit(PORTB,PIN_NUM);
                    break;
                }
            break;
            case PortC_Num:
                switch (Value)
                {
                case output:
                    Set_Bit(PORTC,PIN_NUM);
                    break;
                case input:
                    Clear_Bit(PORTC,PIN_NUM);
                    break;
                }
            break;
            case PortD_Num:
                switch (Value)
                {
                case output:
                    Set_Bit(PORTD,PIN_NUM);
                    break;
                case input:
                    Clear_Bit(PORTD,PIN_NUM);
                    break;
                }
            break;
            default:
                break;
            };
        }
        x=1;
    }
    else
    {
        x=0;
    }
    return x;
}


u8 DIO_get_Port_Value(u8 Port_Num,u8 *Register_reading)
{
    u8 x=2;
    if (Port_Num>PortD_Num)
    {
        x=0;
    }
    else 
    {
        x=1;
        switch (Port_Num)
        {
            case PortA_Num:
               *Register_reading=PORTA;

                break;
            case PortB_Num:
                *Register_reading=PORTB;
                break;
            case PortC_Num:
                *Register_reading=PORTC;
                break;
            case PortD_Num:
                *Register_reading=PORTD;
                break;
        };
    }
    return x;
}


u8 DIO_get_Pin_Value(u8 Port_Num,u8 PIN_NUM,u8 *Register_reading)
{
    u8 x=2;
    if (PIN_NUM<8)
    {

            switch (Port_Num)
            {
            case PortA_Num:
                *Register_reading=Get_Bit(PINA,PIN_NUM);
            break;
            case PortB_Num:
                *Register_reading=Get_Bit(PINB,PIN_NUM);
            break;
            case PortC_Num:
                *Register_reading=Get_Bit(PINC,PIN_NUM);
            break;
            case PortD_Num:
                *Register_reading=Get_Bit(PIND,PIN_NUM);
            break;
            };
        x=1;
    }
    else
    {
        x=0;
    }
    return x;
}
