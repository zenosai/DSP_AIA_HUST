/*
 * main.c
 */
#include "DSP28x_Project.h"
#include "LED_TM1638.h"

interrupt void Adc_isr(void);

float e_sum = 0;
float input[5] = {0};
float output[5] = {0};
int i = 0;

void InitEPwm1()
{
    EPwm1Regs.TBPRD = 6000;                        // Set timer period
    EPwm1Regs.TBPHS.half.TBPHS = 0x0000;           // Phase is 0
    EPwm1Regs.TBCTR = 0x0000;                      // Clear counter

    // Setup TBCLK
    EPwm1Regs.TBCTL.bit.CTRMODE = TB_COUNT_UP; // Count up
    EPwm1Regs.TBCTL.bit.PHSEN = TB_DISABLE;        // Disable phase loading

    EPwm1Regs.CMPCTL.bit.SHDWAMODE = CC_SHADOW;    // Load registers every ZERO
    EPwm1Regs.CMPCTL.bit.LOADAMODE = CC_CTR_ZERO;

    // Setup compare
    EPwm1Regs.CMPA.half.CMPA = 3000;

    // Set actions
    EPwm1Regs.AQCTLA.bit.CAU = AQ_CLEAR;             // Set PWM1A on Zero
    EPwm1Regs.AQCTLA.bit.ZRO = AQ_SET;

    EPwm1Regs.ETSEL.bit.SOCAEN  = 1;        // Enable SOC on A group
    EPwm1Regs.ETSEL.bit.SOCASEL  = 1;        // Select SOC from from CPMA on upcount
    EPwm1Regs.ETPS.bit.SOCAPRD   = 1;        // Generate pulse on 1st event
}

void main()
{
    InitSysCtrl();
    InitEPwm1Gpio();
    TM1638_Init();      //³õÊ¼»¯LED
    DINT;
    InitPieCtrl();
    IER = 0x0000;
    IFR = 0x0000;
    InitPieVectTable();

    EALLOW;
    PieVectTable.ADCINT1 = &Adc_isr;
    EDIS;
    InitAdc();
    InitLEDGpio();

    InitEPwm1();
    EALLOW;
    SysCtrlRegs.PCLKCR0.bit.TBCLKSYNC = 1;
    EDIS;

    EALLOW;
    AdcRegs.ADCSAMPLEMODE.bit.SIMULEN0 = 1;
    AdcRegs.ADCCTL1.bit.INTPULSEPOS = 1;    //ADCINT1 trips after AdcResults latch
    AdcRegs.INTSEL1N2.bit.INT1E     = 1;    //Enabled ADCINT1
    AdcRegs.INTSEL1N2.bit.INT1CONT  = 0;    //Disable ADCINT1 Continuous mode
    AdcRegs.INTSEL1N2.bit.INT1SEL   = 0;    //setup EOC0 to trigger ADCINT1 to fire
    AdcRegs.ADCSOC0CTL.bit.CHSEL    = 7;    //set SOC0 channel select to ADCINA7
    AdcRegs.ADCSOC0CTL.bit.TRIGSEL  = 5;    //set SOC0 start trigger on EPWM1A
    AdcRegs.ADCSOC0CTL.bit.ACQPS    = 6;    //set SOC0 S/H Window to 7 ADC Clock Cycles, (6 ACQPS plus 1)
    EDIS;

    IER |= M_INT1;
    PieCtrlRegs.PIEIER1.bit.INTx1 = 1;

    EINT;
    ERTM;
    while(1){}
}

interrupt void Adc_isr(void)
{
    float  u, e;
    i = (i==5)? 1 : (i+1);
    input[i-1] = (float)AdcResult.ADCRESULT0/4096*3.3;
    output[i-1] = (float)AdcResult.ADCRESULT1/4096*3.3;
    float in = (input[0] + input[1] + input[2] + input[3] + input[4]) / 5;
    float out = (output[0] + output[1] + output[2] + output[3] + output[4]) / 5;
    e = in - out;
    e_sum += e * 0.01;
    e_sum = e_sum > 3.3 ? 3.3 :e_sum;
    e_sum = e_sum <-3.3 ? -3.3 :e_sum;
    u = 0.1 * e +  e_sum;
    u = u > 3.3 ? 3.3 :u;
    u = u < 0? 0 :u;
    EPwm1Regs.CMPA.half.CMPA = (EPwm1Regs.TBPRD+1) * u / 3.3;
    LED_showfloat(2,out);
    LED_showfloat(6,in);

    AdcRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;       //Clear ADCINT1 flag reinitialize for next SOC
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;   // Acknowledge interrupt to PIE
}
