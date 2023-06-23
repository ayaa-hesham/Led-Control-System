/************************************/
/*SWC: UART Driver                  */
/*Author: Aya Hesham                */
/*Version: V1                       */
/*Date: 3 Dec 2021                  */
/************************************/

#ifndef UART_H_
#define UART_H_

void UART_Init(void);
u8 UART_Recive_Data(void);
void UART_Transmit_Data(u8 data);

#endif /* UART_H_ */
