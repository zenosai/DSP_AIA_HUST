#ifndef __LCD_H
#define __LCD_H

#include "DSP28x_Project.h"

#define	LCD_CS_SET()  	(GpioDataRegs.GPASET.bit.GPIO19 = 1)
#define	LCD_DC_SET()  	(GpioDataRegs.GPASET.bit.GPIO29 = 1)
#define	LCD_SDA_SET()  	(GpioDataRegs.AIOSET.bit.AIO6 = 1)
#define	LCD_SCL_SET()  	(GpioDataRegs.GPASET.bit.GPIO18 = 1)
#define	LCD_RST_SET()  	(GpioDataRegs.GPBSET.bit.GPIO34 = 1)

#define	LCD_CS_CLR()  	(GpioDataRegs.GPACLEAR.bit.GPIO19 = 1)
#define	LCD_DC_CLR()  	(GpioDataRegs.GPACLEAR.bit.GPIO29 = 1)
#define	LCD_SDA_CLR()  	(GpioDataRegs.AIOCLEAR.bit.AIO6 = 1)
#define	LCD_SCL_CLR()  	(GpioDataRegs.GPACLEAR.bit.GPIO18 = 1)
#define	LCD_RST_CLR()  	(GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1)

//定义LCD的尺寸
#define LCD_W 240
#define LCD_H 320
extern Uint16 BACK_COLOR, POINT_COLOR;

//画笔颜色
#define WHITE         	 0xFFFF
#define BLACK         	 0x0000	  
#define BLUE         	 0x001F  
#define BRED             0XF81F
#define GRED 			 0XFFE0
#define GBLUE			 0X07FF
#define RED           	 0xF800
#define MAGENTA       	 0xF81F
#define GREEN         	 0x07E0
#define CYAN          	 0x7FFF
#define YELLOW        	 0xFFE0
#define BROWN 			 0XBC40 //棕色
#define BRRED 			 0XFC07 //棕红色
#define GRAY  			 0X8430 //灰色
//GUI颜色
#define DARKBLUE      	 0X01CF	//深蓝色
#define LIGHTBLUE      	 0X7D7C	//浅蓝色  
#define GRAYBLUE       	 0X5458 //灰蓝色
//以上三色为PANEL的颜色 
#define LIGHTGREEN     	 0X841F //浅绿色
#define LGRAY 			 0XC618 //浅灰色(PANNEL),窗体背景色
#define LGRAYBLUE        0XA651 //浅灰蓝色(中间层颜色)
#define LBBLUE           0X2B12 //浅棕蓝色(选择条目的反色)
void InitLCDGpio(void);
void Lcd_Init(void);
void LCD_Clear(Uint16 Color);
void LCD_Fill(Uint16 xsta, Uint16 ysta, Uint16 xend, Uint16 yend, Uint16 color);
void Address_set(Uint8 x1, Uint8 y1, Uint8 x2, Uint8 y2);
void LCD_ShowChar(Uint16 x, Uint16 y, Uint8 num, Uint8 mode); //显示一个字符
void LCD_ShowNum(Uint16 x, Uint16 y, Uint32 num, Uint8 len); //显示数字
void LCD_Show2Num(Uint16 x, Uint16 y, Uint16 num, Uint8 len); //显示2个数字
void LCD_ShowString(Uint16 x, Uint16 y, char *p);		 //显示一个字符串,16字体

void LCD_DrawPoint(Uint16 x, Uint16 y);		 //画点
void LCD_DrawPoint_big(Uint16 x, Uint16 y);		 //画一个大点
void LCD_DrawLine(Uint16 x1, Uint16 y1, Uint16 x2, Uint16 y2);
void LCD_DrawRectangle(Uint16 x1, Uint16 y1, Uint16 x2, Uint16 y2);
void Draw_Circle(Uint16 x0, Uint16 y0, Uint8 r);
void showimage(Uint8 *p);
void showimage2(Uint8 *p, Uint8 x, Uint8 y, Uint8 width, Uint8 height);
Uint32 mypow(Uint8 m, Uint8 n);
Uint16 LCD_ReadPoint(Uint16 x, Uint16 y); //读点
#endif  

