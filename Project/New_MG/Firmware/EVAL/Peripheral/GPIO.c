#include "F28x_Project.h"
#include "GPIO.h"

void GPIO_init (void)
{
	//
    // Step 2. Initialize GPIO:
    // This example function is found in the F2837xD_Gpio.c file and
    // illustrates how to set the GPIO to it's default state.
    //

	InitGpio(); // Skipped for this example

	EALLOW;
    //LED2
	GpioCtrlRegs.GPAMUX2.bit.GPIO31 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO31 = 1;
    GpioCtrlRegs.GPAPUD.bit.GPIO31 = 0; //pull-up
    //LED3
	GpioCtrlRegs.GPBMUX1.bit.GPIO34 = 0;
    GpioCtrlRegs.GPBDIR.bit.GPIO34 = 1;
    GpioCtrlRegs.GPBPUD.bit.GPIO34 = 0; //pull-up

    //SCI
   	EDIS;
}



