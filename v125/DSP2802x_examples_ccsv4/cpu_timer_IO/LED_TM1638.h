#ifndef	_LED_TM1638_H
#define	_LED_TM1638_H
#include "DSP28x_Project.h"

#define TM_STB_L()	(GpioDataRegs.GPBCLEAR.bit.GPIO32 = 1)
#define TM_STB_H()	(GpioDataRegs.GPBSET.bit.GPIO32 = 1)
#define TM_CLK_L()	(GpioDataRegs.GPBCLEAR.bit.GPIO33 = 1)
#define TM_CLK_H()	(GpioDataRegs.GPBSET.bit.GPIO33 = 1)
#define TM_DIO_L()	(GpioDataRegs.GPACLEAR.bit.GPIO12 = 1)
#define TM_DIO_H()	(GpioDataRegs.GPASET.bit.GPIO12 = 1)

void InitLEDGpio(void);
void TM1638_Init(void);
void TM1638_Write_Byte(Uint8 ByteData);
void TM1638_Write_Command(Uint8 CMDData);
void TM1638_WriteLED(Uint8 Reg, Uint8 Dat);
void LED_Show(Uint8 Bit, Uint8 Num, Uint8 XiaoShuDian);
#endif
