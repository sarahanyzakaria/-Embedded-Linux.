#include"DIO.h"
#include"port.h"


int main(void)
{
	//to initiate all pins with configurations
	PORT_init();
	
	while (1)
	{
		// enable led 1 and disable led 2
		DIO_SetPin(DIO_enuPortA, DIO_enuPin0, High);
		DIO_SetPin(DIO_enuPortA, DIO_enuPin1, Low);

		DIO_DelayMs(1000);

		//enable led 2 and disable led 1
		DIO_SetPin(DIO_enuPortA, DIO_enuPin0, Low);
		DIO_SetPin(DIO_enuPortA, DIO_enuPin1, High);

		 DIO_DelayMs(1000);

	}
}
