#include "LED_TM1638.h"

const Uint8 codetable[11] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07,
		0x7F, 0x6F, 0x40 };
void InitLEDGpio(void) {
	/*******LED 12,32,33********************/
	EALLOW;
	GpioCtrlRegs.GPAMUX1.bit.GPIO12 = 0;
	GpioCtrlRegs.GPBMUX1.bit.GPIO32 = 0;
	GpioCtrlRegs.GPBMUX1.bit.GPIO33 = 0;
	GpioCtrlRegs.GPADIR.bit.GPIO12 = 1;
	GpioCtrlRegs.GPBDIR.bit.GPIO32 = 1;
	GpioCtrlRegs.GPBDIR.bit.GPIO33 = 1;
	EDIS;
}
void TM1638_Init(void) {
	Uint8 m;
	InitLEDGpio();
	TM1638_Write_Command(0x88);						//璁剧疆浜害
	TM1638_Write_Command(0x40);						//璁剧疆鍦板潃鑷姩澧炲姞1
	TM_STB_L();										//鐗囬�夐�変腑
	TM1638_Write_Byte(0xc0);
	TM_DIO_L();
	for (m = 0; m < 128; m++) {						//鍏抽棴鏁扮爜绠℃樉绀猴紝鍐欏叆16瀛楄妭0x00
		TM_CLK_L();
		TM_CLK_H();
	}
	TM_STB_H();										//鐗囬�夊け鏁�
}

void TM1638_Write_Byte(Uint8 ByteData) {
	Uint8 i;
	Uint8 TM_DIO;
	for (i = 0; i < 8; i++) {
		TM_CLK_L();									//CLK = 0;
		TM_DIO = ByteData & 0x01;
		if (TM_DIO == 0) {
			TM_DIO_L();
		} else {
			TM_DIO_H();
		}
		ByteData >>= 1;
		TM_CLK_H();									//CLK = 1;
	}
}

void TM1638_Write_Command(Uint8 CMDData) {
	TM_STB_L();
	TM1638_Write_Byte(CMDData);
	TM_STB_H();
}

void TM1638_WriteLED(Uint8 Reg, Uint8 Dat) {
	TM1638_Write_Command(0x44);
	TM_STB_L();
	TM1638_Write_Byte(Reg | 0xc0);
	TM1638_Write_Byte(Dat);
	TM_STB_H();
	TM1638_Write_Command(0x88);
}

void LED_Show(Uint8 Bit, Uint8 Num, Uint8 Point) {
	if (1 == Point)
		TM1638_WriteLED(2 * (Bit - 1), codetable[Num] + 0x80);
	else
		TM1638_WriteLED(2 * (Bit - 1), codetable[Num]);
}

