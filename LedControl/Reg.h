/************************************/
/*SWC: Register Driver              */
/*Author: Aya Hesham                */
/*Version: V1                       */
/*Date: 25 Sep 2021                 */
/************************************/

#ifndef REG_H_
#define REG_H_
#define DDRA *((volatile u8*)0x3A)
#define PORTA *((volatile u8*)0x3B)
#define PINA *((volatile u8*)39)
#define DDRB *((volatile u8*)0x37)
#define PORTB *((volatile u8*)0x38)
#define PINB *((volatile u8*)36)
#define DDRC *((volatile u8*)0x34)
#define PORTC *((volatile u8*)0x35)
#define PINC *((volatile u8*)33)
#define DDRD *((volatile u8*)0x31)
#define PORTD *((volatile u8*)0x32)
#define PIND *((volatile u8*)30)



#endif /* REG_H_ */
