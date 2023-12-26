/*
 * dio.h
 * Author : Sara Hany
 */
#ifndef DIO_H_
#define DIO_H_
#include"std_types.h"
#include"private.h"

/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/

typedef enum
{
	DIO_enuPortA,DIO_enuPortB,DIO_enuPortC,DIO_enuPortD
}DIO_enuPortOption;

typedef enum
{
	DIO_enuPin0,DIO_enuPin1,DIO_enuPin2,DIO_enuPin3,DIO_enuPin4,DIO_enuPin5,DIO_enuPin6,DIO_enuPin7
}DIO_enuPinOption;


typedef enum
{
		DIO_enuInput_PU,
		DIO_enuInput_HI,
		DIO_enuOutput_HIGH,
		DIO_enuOutput_LOW
}DIO_enuConfiguration;

typedef enum
{
	Low,High
}DIO_enuState;


/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/

/*
 * Description :
 * Setup the direction of the required pin input/output.
 * If the input port number or pin number are not correct, The function will not handle the request.
 */
enuErrorState DIO_SetPinConfiguration(DIO_enuPortOption PortNum, DIO_enuPinOption PinNum, DIO_enuConfiguration Configuration);

/*
 * Description :
 * Write the value Logic High or Logic Low on the required pin.
 * If the input port number or pin number are not correct, The function will not handle the request.
 */
enuErrorState DIO_SetPin(DIO_enuPortOption PortNum, DIO_enuPinOption PinNum, DIO_enuState state);

/*
 * Description :
 * Read and return the value for the required pin, it should be Logic High or Logic Low.
 * If the input port number or pin number are not correct, The function will return Logic Low.
 */
enuErrorState DIO_GetPin(DIO_enuPortOption PortNum, DIO_enuPinOption PinNum, uint8* Add_puint8Value);

/*
 * Description :
 * Setup the direction of the required port all pins input/output.
 * If the direction value is INPUT all pins in this port should be input pins.
 * If the direction value is OUTPUT all pins in this port should be output pins.
 * If the input port number is not correct, The function will not handle the request.
 */
enuErrorState DIO_SetPortConfiguration(DIO_enuPortOption PortNum, DIO_enuConfiguration Configuration);

/*
 * Description :
 * Write the value on the required port.
 * If any pin in the port is output pin the value will be written.
 * If the input port number is not correct, The function will not handle the request.
 */
enuErrorState DIO_SetPort(DIO_enuPortOption PortNum, DIO_enuState state);

/*
* Description :
* Write the value on the low 4 pins.
* If the input port number is not correct, The function will not handle the request.
*/
enuErrorState display(DIO_enuPortOption PortNum,uint8 VALUE);

/*
* Description :
* function used to delay time.
* take the time in milliseconds.
*/
void DIO_DelayMs(uint32 Copy_u32TimeMs);


#endif /* DIO_H_ */

