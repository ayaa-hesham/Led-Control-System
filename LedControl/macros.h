/************************************/
/*SWC: Macros Driver                */
/*Author: Aya Hesham                */
/*Version: V1                       */
/*Date: 15 Oct 2021                 */
/************************************/

#ifndef MACROS_H_
#define MACROS_H_

#define Set_Bit(var,bitnum) var|=(1<<bitnum)
#define Clear_Bit(var,bitnum) var&=~(1<<bitnum)
#define toggle_bit(var,bitnum) var^=(1<<bitnum)
#define Get_Bit(var,bitnum) ((var>>bitnum)&0x01)
#define set_byte(var,value) var=value


#endif /* MACROS_H_ */
