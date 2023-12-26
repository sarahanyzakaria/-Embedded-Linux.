/*
 * port_cfg.c
 *      Author: Sara Hany
 */
#include"port_cfg.h"

#if(CONFIGURATION_TYPE==POST_COMPILE_CONFIGURATION)
//in case number of ports equal two ports the array will be as shown(2*8)
#if (NO_OF_PORTS==TWO_PORTS)

const PORT_enuPinOpt DIO_PinCfg[NO_OF_PORTS*NO_OF_PINS]=
{INPUT_HI,
		INPUT_PU,
		INPUT_PU,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		INPUT_PU,
		OUTPUT_LOW,
		INPUT_PU,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		INPUT_HI,
		INPUT_HI,
		INPUT_PU};


//in case number of ports equal three ports the array will be as shown(3*8)
#elif(NO_OF_PORTS==THREE_PORTS)

const PORT_enuPinOpt DIO_PinCfg[NO_OF_PORTS*NO_OF_PINS]=
{INPUT_HI,
		INPUT_PU,
		INPUT_PU,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		INPUT_PU,
		OUTPUT_LOW,
		INPUT_PU,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		INPUT_HI,
		INPUT_HI,
		INPUT_PU,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_HIGH};


//in case number of ports equal four ports the array will be as shown(4*8)
#elif(NO_OF_PORTS==FOUR_PORTS)
const PORT_enuPinOpt DIO_PinCfg[NO_OF_PORTS*NO_OF_PINS]=
		{OUTPUT_LOW,
		OUTPUT_LOW,
		INPUT_PU,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		INPUT_PU,
		OUTPUT_LOW,
		INPUT_PU,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		INPUT_HI,
		INPUT_HI,
		INPUT_PU,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_HIGH,
		OUTPUT_LOW,
		OUTPUT_LOW,
		OUTPUT_LOW,
		INPUT_PU,
		OUTPUT_LOW,
		OUTPUT_LOW,
		INPUT_HI,
		INPUT_HI
		};


#endif
#endif
