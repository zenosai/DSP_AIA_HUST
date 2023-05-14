// TI File $Revision: /main/1 $
// Checkin $Date: August 14, 2008   16:58:25 $
//###########################################################################
//
// FILE:   DSP2802x_ECap.c
//
// TITLE:  DSP2802x eCAP Initialization & Support Functions.
//
//###########################################################################
// $TI Release: 2802x C/C++ Header Files V1.25 $
// $Release Date: December 18, 2009 $
//###########################################################################

#include "DSP2802x_Device.h"     // DSP2802x Headerfile Include File
#include "DSP2802x_Examples.h"   // DSP2802x Examples Include File

//---------------------------------------------------------------------------
// InitECap:
//---------------------------------------------------------------------------
// This function initializes the eCAP(s) to a known state.
//
void InitECap(void)
{
   // Initialize eCAP1

   //tbd...

}

//---------------------------------------------------------------------------
// Example: InitECapGpio:
//---------------------------------------------------------------------------
// This function initializes GPIO pins to function as ECAP pins
//
// Each GPIO pin can be configured as a GPIO pin or up to 3 different
// peripheral functional pins. By default all pins come up as GPIO
// inputs after reset.
//
// Caution:
// For each eCAP peripheral
// Only one GPIO pin should be enabled for ECAP operation.
// Comment out other unwanted lines.

void InitECapGpio()
{

   InitECap1Gpio();
}

void InitECap1Gpio(void)
{
   EALLOW;
   GpioCtrlRegs.GPAPUD.bit.GPIO19 = 0;     // Enable pull-up on GPIO19 (CAP1)
   GpioCtrlRegs.GPAQSEL2.bit.GPIO19 = 0;   // Synch to SYSCLKOUT GPIO19 (CAP1)
   GpioCtrlRegs.GPAMUX2.bit.GPIO19 = 3;    // Configure GPIO19 as CAP1
   EDIS;
}
//===========================================================================
// End of file.
//===========================================================================
