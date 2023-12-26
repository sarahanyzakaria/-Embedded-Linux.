/*
 * port_cfg.h
 *      Author: Sara Hany
 */
#ifndef PORT_CFG_H
#define PORT_CFG_H

#include "std_types.h"

/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/

/* NUM_OF_PORTS OPTIONS */
#define TWO_PORTS   2
#define THREE_PORTS 3
#define FOUR_PORTS  4

/* NUM_OF_PINS OPTIONS */
#define ONE_PIN		1
#define TWO_PINS	2
#define THREE_PINS	3
#define FOUR_PINS	4
#define FIVE_PINS	5
#define SIX_PINS	6
#define SEVEN_PINS	7
#define EIGHT_PINS	8

/* PIN_CONFIGURATION OPTIONS */
#define INPUT_PU	1
#define INPUT_HI	2
#define OUTPUT_HIGH	3
#define OUTPUT_LOW	4

/* POST OR PRE CONFIGURATION OPTIONS */
#define PRE_COMPILE_CONFIGURATION	LOGIC_HIGH
#define POST_COMPILE_CONFIGURATION	LOGIC_LOW

/***************************************************************************************************/
#define NO_OF_PORTS			FOUR_PORTS
#define NO_OF_PINS			EIGHT_PINS
#define CONFIGURATION_TYPE	POST_COMPILE_CONFIGURATION


	/*PORTA*/
#define DIO_PIN00              OUTPUT_LOW
#define DIO_PIN01              OUTPUT_LOW
#define DIO_PIN02              INPUT_PU
#define DIO_PIN03              OUTPUT_LOW
#define DIO_PIN04              OUTPUT_LOW
#define DIO_PIN05              OUTPUT_LOW
#define DIO_PIN06              OUTPUT_LOW
#define DIO_PIN07              INPUT_PU
	/*PORTB*/
#define DIO_PIN08              OUTPUT_LOW
#define DIO_PIN09              INPUT_PU
#define DIO_PIN10              OUTPUT_LOW
#define DIO_PIN11              OUTPUT_LOW
#define DIO_PIN12              OUTPUT_LOW
#define DIO_PIN13              INPUT_HI
#define DIO_PIN14              INPUT_HI
#define DIO_PIN15              INPUT_PU
	/*PORTC*/
#define DIO_PIN16              OUTPUT_LOW
#define DIO_PIN17              OUTPUT_LOW
#define DIO_PIN18              OUTPUT_LOW
#define DIO_PIN19              OUTPUT_LOW
#define DIO_PIN20              OUTPUT_LOW
#define DIO_PIN21              OUTPUT_LOW
#define DIO_PIN22              OUTPUT_LOW
#define DIO_PIN23              OUTPUT_HIGH
	/*PORTD*/
#define DIO_PIN24              OUTPUT_LOW
#define DIO_PIN25              OUTPUT_LOW
#define DIO_PIN26              OUTPUT_LOW
#define DIO_PIN27              INPUT_PU
#define DIO_PIN28              OUTPUT_LOW
#define DIO_PIN29              OUTPUT_LOW
#define DIO_PIN30              INPUT_HI
#define DIO_PIN31              INPUT_HI

/* POST COMPILE CONFIGURATION */
typedef enum
{
	PORT_enuPortA,
	PORT_enuPortB,
	PORT_enuPortC,
	PORT_enuPortD
}PORT_enuPortOption;

typedef enum
{
	PORT_enuInput_PU,
	PORT_enuInput_HI,
	PORT_enuOutput_HIGH,
	PORT_enuOutput_LOW
}PORT_enuPinOpt;


#endif /* PORT_CFG_H_ */
