#include "DSP28x_Project.h"     // Device Headerfile and Examples Include File

interrupt void tim0_isr(void);
interrupt void ADC_convered(void);

Uint16 ADCINA4_Voltage_sum = 0;
Uint16 ADCINB4_Voltage_sum = 0;
Uint16 ADCINA4_Voltage = 0;
Uint16 ADCINB4_Voltage = 0;
Uint16 convered_count = 0;

void main(void)
{

// Step 1. Initialize System Control:
// PLL, WatchDog, enable Peripheral Clocks
// This example function is found in the DSP2802x_SysCtrl.c file.
   InitSysCtrl();

// Step 2. Initalize GPIO:
// This example function is found in the DSP2802x_Gpio.c file and
// illustrates how to set the GPIO to it's default state.
// InitGpio();  // Skipped for this example


// Step 3. Clear all interrupts and initialize PIE vector table:
// Disable CPU interrupts
   DINT;

// Initialize PIE control registers to their default state.
// The default state is all PIE interrupts disabled and flags
// are cleared.
// This function is found in the DSP2802x_PieCtrl.c file.
   InitPieCtrl();

// Disable CPU interrupts and clear all CPU interrupt flags:
   IER = 0x0000;
   IFR = 0x0000;

// Initialize the PIE vector table with pointers to the shell Interrupt
// Service Routines (ISR).
// This will populate the entire table, even if the interrupt
// is not used in this example.  This is useful for debug purposes.
// The shell ISR routines are found in DSP2802x_DefaultIsr.c.
// This function is found in DSP2802x_PieVect.c.
   InitPieVectTable();


// Step 4. Initialize all the Device Peripherals:
// This function is found in DSP2802x_InitPeripherals.c
// InitPeripherals(); // Not required for this example

// Step 5. User specific code:

   InitAdc();

   EALLOW;

   AdcRegs.ADCSAMPLEMODE.bit.SIMULEN0 = 1; //同时采样
   AdcRegs.ADCSOC0CTL.bit.CHSEL = 4;       //soc通道选择
   AdcRegs.ADCSOC1CTL.bit.CHSEL = 12;
   AdcRegs.ADCSOC0CTL.bit.ACQPS = 6;     //采样时间
   AdcRegs.ADCSOC1CTL.bit.ACQPS = 6;
   AdcRegs.ADCSOC0CTL.bit.TRIGSEL = 1;    //soc触发选择,TIM0
   AdcRegs.ADCCTL1.bit.INTPULSEPOS  = 1;  //结果存入寄存器才产生中断

   PieVectTable.ADCINT1 = &ADC_convered;
   AdcRegs.INTSEL1N2.bit.INT1SEL = 1;    //中断线1选择soc1
   AdcRegs.INTSEL1N2.bit.INT1CONT  = 0;
   AdcRegs.INTSEL1N2.bit.INT1E  = 1;    //中断使能

   PieCtrlRegs.PIEIER1.bit.INTx1 = 1;   //使能int1.1
   EDIS;

/****************设置定时器，用以触发ADC*****************/
   CpuTimer0Regs.TPR.bit.TDDR = 59;
   CpuTimer0Regs.TPRH.bit.TDDRH = 0; //对输入时钟60分频，60M/60=1M
   CpuTimer0Regs.PRD.all = 500000;//定时0.5s
   CpuTimer0Regs.TCR.bit.TRB = 1; //reload
   CpuTimer0Regs.TCR.bit.TIE = 1; //使能中断
   CpuTimer0Regs.TCR.bit.TSS = 0; //开始计数

   EALLOW;
   PieVectTable.TINT0 = &tim0_isr;
   PieCtrlRegs.PIECTRL.bit.ENPIE = 1;   //使能PIE
   PieCtrlRegs.PIEIER1.bit.INTx7 = 1;   //使能int1.7
   IER |= 0x0001;//使能GROUP1
   EINT;
   EDIS;

   while(1)
   {
   };
}

interrupt void ADC_convered(void)
{
    ADCINA4_Voltage_sum += AdcResult.ADCRESULT0;
    ADCINB4_Voltage_sum += AdcResult.ADCRESULT1;
    AdcRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
    convered_count++;
    /*********转换16次，取平均值*********/
    if(convered_count > 15)
    {
        ADCINA4_Voltage = ADCINA4_Voltage_sum >> 4;//相当于除以16
        ADCINB4_Voltage = ADCINB4_Voltage_sum >> 4;
        ADCINA4_Voltage_sum = 0;
        ADCINB4_Voltage_sum = 0;
        convered_count = 0;
    }
}

interrupt void tim0_isr(void)
{
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}
