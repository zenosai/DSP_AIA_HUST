/*
 * main.c
 */
#include "DSP28x_Project.h"
#include "LED_TM1638.h"

void HorseRunning1(int16 no);
void HorseRunning2(int16 no);
interrupt void myXint1_isr(void);
interrupt void cpu_timer0_isr(void);
interrupt void cpu_timer1_isr(void);

#define Led0Blink() GpioDataRegs.GPACLEAR.bit.GPIO0 = 1
#define Led1Blink() GpioDataRegs.GPACLEAR.bit.GPIO1 = 1
#define Led2Blink() GpioDataRegs.GPACLEAR.bit.GPIO2 = 1
#define Led3Blink() GpioDataRegs.GPACLEAR.bit.GPIO3 = 1
#define Led0Blank() GpioDataRegs.GPASET.bit.GPIO0 = 1
#define Led1Blank() GpioDataRegs.GPASET.bit.GPIO1 = 1
#define Led2Blank() GpioDataRegs.GPASET.bit.GPIO2 = 1
#define Led3Blank() GpioDataRegs.GPASET.bit.GPIO3 = 1

int HorseRunningAction = 0;
int KeyDLTime = 0;

void  Xint1_Init()
{
    EALLOW;
    SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1;
    GpioCtrlRegs.GPAMUX1.bit.GPIO12 = 0;                        /*common GPIO*/
    GpioCtrlRegs.GPADIR.bit.GPIO12 = 0;                         /*set to intput*/
    GpioCtrlRegs.GPAPUD.bit.GPIO12 = 0;                         /*pull up*/
    GpioCtrlRegs.GPAQSEL1.bit.GPIO12 = 0;                       //clock timer
    GpioDataRegs.GPACLEAR.bit.GPIO12 = 1;
    GpioIntRegs.GPIOXINT1SEL.bit.GPIOSEL = 12;                   ///GPIO12作为xint1的中断源

    XIntruptRegs.XINT1CR.bit.POLARITY = 3;
    XIntruptRegs.XINT1CR.bit.ENABLE = 1;
    EDIS;
}

void HorseIO_Init()
{
	EALLOW;
    GpioDataRegs.GPASET.bit.GPIO0 = 1;
    GpioDataRegs.GPASET.bit.GPIO1 = 1;
    GpioDataRegs.GPASET.bit.GPIO2 = 1;
    GpioDataRegs.GPASET.bit.GPIO3 = 1;
    GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO0 = 1;
    GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO1 = 1;
    GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO2 = 1;
    GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO3 = 1;
    EDIS;
}


void main(void)
{
    InitSysCtrl();  	//初始化系统时钟，选择内部晶振1，10MHZ，12倍频，2分频，初始化外设时钟，低速外设,4分频
    DINT; 				//关总中断
    IER = 0x0000;  	 	//关CPU中断使能
    IFR = 0x0000;   	//清CPU中断标志
    InitPieCtrl();  	//关pie中断
    InitPieVectTable();	//清中断向量表

    EALLOW;				/**配置中断向量表*****/
    PieVectTable.TINT0 = &cpu_timer0_isr;
    PieVectTable.TINT1 = &cpu_timer1_isr;
    PieVectTable.XINT1 = &myXint1_isr;
    EDIS;

    // MemCopy(&RamfuncsLoadStart, &RamfuncsLoadEnd, &RamfuncsRunStart);
    InitFlash();

    InitCpuTimers();   	// 初始化定时器
    ConfigCpuTimer(&CpuTimer0, 60, 500000);
    ConfigCpuTimer(&CpuTimer1, 60, 10000);

    EALLOW;
    CpuTimer0Regs.TCR.all = 0x4001;
    EDIS;

    HorseIO_Init();
    Xint1_Init();
    TM1638_Init(); 		//初始化LED

    IER |= M_INT1;
    IER |= M_INT13;
    PieCtrlRegs.PIEIER1.bit.INTx7 = 1;
    PieCtrlRegs.PIEIER1.bit.INTx4 = 1;

    EINT;
    ERTM;
    while(1) {}
}

void HorseRunning1(int no)
{
    if(no & 0x1)Led0Blink();
    else Led0Blank();
    if(no & 0x2)Led1Blink();
    else Led1Blank();
    if(no & 0x4)Led2Blink();
    else Led2Blank();
    if(no & 0x8)Led3Blink();
    else Led3Blank();
}

void HorseRunning2(int no)
{
    no = no % 0x5;
    if(no == 0x1)Led0Blink();
    else Led0Blank();
    if(no == 0x2)Led1Blink();
    else Led1Blank();
    if(no == 0x3)Led2Blink();
    else Led2Blank();
    if(no == 0x4)Led3Blink();
    else Led3Blank();
}

interrupt void myXint1_isr(void)
{
    if(GpioDataRegs.GPADAT.bit.GPIO12 == 1){
        CpuTimer1Regs.TCR.all = 0x4001;
    }
      else{
        if(KeyDLTime > 20){
            CpuTimer0.InterruptCount = 0;
            HorseRunningAction = !HorseRunningAction;
        }
        CpuTimer1Regs.TCR.bit.TRB = 1;
        CpuTimer1Regs.TCR.bit.TSS = 0;
        KeyDLTime = 0;
    }
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}

interrupt void cpu_timer0_isr(void)
{
    CpuTimer0.InterruptCount++;
    if(HorseRunningAction == 0)
        HorseRunning1(CpuTimer0.InterruptCount);
    else HorseRunning2(CpuTimer0.InterruptCount);
  	PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}

interrupt void cpu_timer1_isr(void)
{
    KeyDLTime++;
}
