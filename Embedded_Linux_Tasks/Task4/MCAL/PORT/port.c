/*
 * port.c
 *      Author: Sara Hany
 */


#include"port.h"
#include"private.h"
#include"math.h"

//in case post compile option we extern the array of all configuration
#if(CONFIGURATION_TYPE==POST_COMPILE_CONFIGURATION)
extern const PORT_enuPinOpt DIO_PinCfg[NO_OF_PORTS*NO_OF_PINS];
#endif

/*
 * function to set the configuration of all ports
 * function used pre compile method and post compile method
 * function access the array of all configuration of ports.
 */
void PORT_init(void)
{
	//in case pre compile configuration we use #define to configure all pins
#if(CONFIGURATION_TYPE==PRE_COMPILE_CONFIGURATION)
	{
		#if (NO_OF_PORTS==TWO_PORTS)
		{
			//configuration for pin00

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN00==INPUT_PU
			#define PIN00_DIR    PORT_LOW
			#define PIN00_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN00==INPUT_HI
			#define PIN00_DIR    PORT_LOW
			#define PIN00_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN0==OUTPUT_HIGH
			#define PIN00_DIR    PORT_HIGH
			#define PIN00_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN00==OUTPUT_LOW
			#define PIN00_DIR    PORT_HIGH
			#define PIN00_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin01

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN01==INPUT_PU
			#define PIN01_DIR    PORT_LOW
			#define PIN01_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN01==INPUT_HI
			#define PIN01_DIR    PORT_LOW
			#define PIN01_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN01==OUTPUT_HIGH
			#define PIN01_DIR    PORT_HIGH
			#define PIN01_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN01==OUTPUT_LOW
			#define PIN01_DIR    PORT_HIGH
			#define PIN01_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin02

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN02==INPUT_PU
			#define PIN02_DIR    PORT_LOW
			#define PIN02_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN02==INPUT_HI
			#define PIN02_DIR    PORT_LOW
			#define PIN02_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN2==OUTPUT_HIGH
			#define PIN02_DIR    PORT_HIGH
			#define PIN02_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN02==OUTPUT_LOW
			#define PIN02_DIR    PORT_HIGH
			#define PIN02_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin03

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN03==INPUT_PU
			#define PIN03_DIR    PORT_LOW
			#define PIN03_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN2==INPUT_HI
			#define PIN03_DIR    PORT_LOW
			#define PIN03_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN3==OUTPUT_HIGH
			#define PIN03_DIR    PORT_HIGH
			#define PIN03_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN3==OUTPUT_LOW
			#define PIN03_DIR    PORT_HIGH
			#define PIN03_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin04

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN04==INPUT_PU
			#define PIN04_DIR    PORT_LOW
			#define PIN04_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN04==INPUT_HI
			#define PIN04_DIR    PORT_LOW
			#define PIN04_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN04==OUTPUT_HIGH
			#define PIN04_DIR    PORT_HIGH
			#define PIN04_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN04==OUTPUT_LOW
			#define PIN04_DIR    PORT_HIGH
			#define PIN04_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin05

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN05==INPUT_PU
			#define PIN05_DIR    PORT_LOW
			#define PIN05_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN05==INPUT_HI
			#define PIN05_DIR    PORT_LOW
			#define PIN05_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN05==OUTPUT_HIGH
			#define PIN05_DIR    PORT_HIGH
			#define PIN05_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN05==OUTPUT_LOW
			#define PIN05_DIR    PORT_HIGH
			#define PIN05_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin06

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN06==INPUT_PU
			#define PIN06_DIR    PORT_LOW
			#define PIN06_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN06==INPUT_HI
			#define PIN06_DIR    PORT_LOW
			#define PIN06_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN06==OUTPUT_HIGH
			#define PIN06_DIR    PORT_HIGH
			#define PIN06_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN06==OUTPUT_LOW
			#define PIN06_DIR    PORT_HIGH
			#define PIN06_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin07

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN07==INPUT_PU
			#define PIN07_DIR    PORT_LOW
			#define PIN07_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN07==INPUT_HI
			#define PIN07_DIR    PORT_LOW
			#define PIN07_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN07==OUTPUT_HIGH
			#define PIN07_DIR    PORT_HIGH
			#define PIN07_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN07==OUTPUT_LOW
			#define PIN07_DIR    PORT_HIGH
			#define PIN07_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin08

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN08==INPUT_PU
			#define PIN08_DIR    PORT_LOW
			#define PIN08_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN08==INPUT_HI
			#define PIN08_DIR    PORT_LOW
			#define PIN08_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN08==OUTPUT_HIGH
			#define PIN08_DIR    PORT_HIGH
			#define PIN08_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN08==OUTPUT_LOW
			#define PIN08_DIR    PORT_HIGH
			#define PIN08_PORT   PORT_LOW
			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin09

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN09==INPUT_PU
			#define PIN09_DIR    PORT_LOW
			#define PIN09_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN09==INPUT_HI
			#define PIN09_DIR    PORT_LOW
			#define PIN09_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN09==OUTPUT_HIGH
			#define PIN09_DIR    PORT_HIGH
			#define PIN09_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN09==OUTPUT_LOW
			#define PIN09_DIR    PORT_HIGH
			#define PIN09_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin10

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN10==INPUT_PU
			#define PIN10_DIR    PORT_LOW
			#define PIN10_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN10==INPUT_HI
			#define PIN10_DIR    PORT_LOW
			#define PIN10_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN10==OUTPUT_HIGH
			#define PIN10_DIR    PORT_HIGH
			#define PIN10_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN10==OUTPUT_LOW
			#define PIN10_DIR    PORT_HIGH
			#define PIN10_PORT   PORT_LOW0_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin11

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN11==INPUT_PU
			#define PIN11_DIR    PORT_LOW
			#define PIN11_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN11==INPUT_HI
			#define PIN11_DIR    PORT_LOW
			#define PIN11_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN11==OUTPUT_HIGH
			#define PIN11_DIR    PORT_HIGH
			#define PIN11_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN11==OUTPUT_LOW
			#define PIN11_DIR    PORT_HIGH
			#define PIN11_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin12

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN12==INPUT_PU
			#define PIN12_DIR    PORT_LOW
			#define PIN12_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN12==INPUT_HI
			#define PIN12_DIR    PORT_LOW
			#define PIN12_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN12==OUTPUT_HIGH
			#define PIN12_DIR    PORT_HIGH
			#define PIN12_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN12==OUTPUT_LOW
			#define PIN12_DIR    PORT_HIGH
			#define PIN12_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin13

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN13==INPUT_PU
			#define PIN13_DIR    PORT_LOW
			#define PIN13_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN13==INPUT_HI
			#define PIN13_DIR    PORT_LOW
			#define PIN13_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN13==OUTPUT_HIGH
			#define PIN13_DIR    PORT_HIGH
			#define PIN13_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN13==OUTPUT_LOW
			#define PIN13_DIR    PORT_HIGH
			#define PIN13_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin14

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN14==INPUT_PU
			#define PIN14_DIR    PORT_LOW
			#define PIN14_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN14==INPUT_HI
			#define PIN14_DIR    PORT_LOW
			#define PIN14_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN14==OUTPUT_HIGH
			#define PIN14_DIR    PORT_HIGH
			#define PIN14_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN14==OUTPUT_LOW
			#define PIN14_DIR    PORT_HIGH
			#define PIN14_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin15

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN15==INPUT_PU
			#define PIN15_DIR    PORT_LOW
			#define PIN15_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN15==INPUT_HI
			#define PIN15_DIR    PORT_LOW
			#define PIN15_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN15==OUTPUT_HIGH
			#define PIN15_DIR    PORT_HIGH
			#define PIN15_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN15==OUTPUT_LOW
			#define PIN15_DIR    PORT_HIGH
			#define PIN15_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			DDRA= 	CONCAT(PIN07_DIR,PIN06_DIR,PIN05_DIR,PIN04_DIR,PIN03_DIR,PIN02_DIR,PIN01_DIR,PIN00_DIR);
			DDRB= 	CONCAT(PIN15_DIR,PIN14_DIR,PIN13_DIR,PIN12_DIR,PIN11_DIR,PIN10_DIR,PIN09_DIR,PIN08_DIR);

			PORTA= CONCAT(PIN07_PORT,PIN06_PORT,PIN05_PORT,PIN04_PORT,PIN03_PORT,PIN02_PORT,PIN01_PORT,PIN00_PORT);
			PORTB= CONCAT(PIN15_PORT,PIN14_PORT,PIN13_PORT,PIN12_PORT,PIN11_PORT,PIN10_PORT,PIN09_PORT,PIN08_PORT);
		}


#elif(NO_OF_PORTS==THREE_PORTS)
		{
			//configuration for pin00

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN00==INPUT_PU
			#define PIN00_DIR    PORT_LOW
			#define PIN00_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN00==INPUT_HI
			#define PIN00_DIR    PORT_LOW
			#define PIN00_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN0==OUTPUT_HIGH
			#define PIN00_DIR    PORT_HIGH
			#define PIN00_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN00==OUTPUT_LOW
			#define PIN00_DIR    PORT_HIGH
			#define PIN00_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin01

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN01==INPUT_PU
			#define PIN01_DIR    PORT_LOW
			#define PIN01_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN01==INPUT_HI
			#define PIN01_DIR    PORT_LOW
			#define PIN01_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN01==OUTPUT_HIGH
			#define PIN01_DIR    PORT_HIGH
			#define PIN01_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN01==OUTPUT_LOW
			#define PIN01_DIR    PORT_HIGH
			#define PIN01_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin02

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN02==INPUT_PU
			#define PIN02_DIR    PORT_LOW
			#define PIN02_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN02==INPUT_HI
			#define PIN02_DIR    PORT_LOW
			#define PIN02_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN2==OUTPUT_HIGH
			#define PIN02_DIR    PORT_HIGH
			#define PIN02_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN02==OUTPUT_LOW
			#define PIN02_DIR    PORT_HIGH
			#define PIN02_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin03

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN03==INPUT_PU
			#define PIN03_DIR    PORT_LOW
			#define PIN03_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN2==INPUT_HI
			#define PIN03_DIR    PORT_LOW
			#define PIN03_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN3==OUTPUT_HIGH
			#define PIN03_DIR    PORT_HIGH
			#define PIN03_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN3==OUTPUT_LOW
			#define PIN03_DIR    PORT_HIGH
			#define PIN03_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin04

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN04==INPUT_PU
			#define PIN04_DIR    PORT_LOW
			#define PIN04_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN04==INPUT_HI
			#define PIN04_DIR    PORT_LOW
			#define PIN04_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN04==OUTPUT_HIGH
			#define PIN04_DIR    PORT_HIGH
			#define PIN04_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN04==OUTPUT_LOW
			#define PIN04_DIR    PORT_HIGH
			#define PIN04_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin05

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN05==INPUT_PU
			#define PIN05_DIR    PORT_LOW
			#define PIN05_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN05==INPUT_HI
			#define PIN05_DIR    PORT_LOW
			#define PIN05_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN05==OUTPUT_HIGH
			#define PIN05_DIR    PORT_HIGH
			#define PIN05_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN05==OUTPUT_LOW
			#define PIN05_DIR    PORT_HIGH
			#define PIN05_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin06

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN06==INPUT_PU
			#define PIN06_DIR    PORT_LOW
			#define PIN06_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN06==INPUT_HI
			#define PIN06_DIR    PORT_LOW
			#define PIN06_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN06==OUTPUT_HIGH
			#define PIN06_DIR    PORT_HIGH
			#define PIN06_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN06==OUTPUT_LOW
			#define PIN06_DIR    PORT_HIGH
			#define PIN06_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin07

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN07==INPUT_PU
			#define PIN07_DIR    PORT_LOW
			#define PIN07_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN07==INPUT_HI
			#define PIN07_DIR    PORT_LOW
			#define PIN07_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN07==OUTPUT_HIGH
			#define PIN07_DIR    PORT_HIGH
			#define PIN07_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN07==OUTPUT_LOW
			#define PIN07_DIR    PORT_HIGH
			#define PIN07_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin08

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN08==INPUT_PU
			#define PIN08_DIR    PORT_LOW
			#define PIN08_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN08==INPUT_HI
			#define PIN08_DIR    PORT_LOW
			#define PIN08_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN08==OUTPUT_HIGH
			#define PIN08_DIR    PORT_HIGH
			#define PIN08_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN08==OUTPUT_LOW
			#define PIN08_DIR    PORT_HIGH
			#define PIN08_PORT   PORT_LOW
			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin09

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN09==INPUT_PU
			#define PIN09_DIR    PORT_LOW
			#define PIN09_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN09==INPUT_HI
			#define PIN09_DIR    PORT_LOW
			#define PIN09_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN09==OUTPUT_HIGH
			#define PIN09_DIR    PORT_HIGH
			#define PIN09_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN09==OUTPUT_LOW
			#define PIN09_DIR    PORT_HIGH
			#define PIN09_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin10

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN10==INPUT_PU
			#define PIN10_DIR    PORT_LOW
			#define PIN10_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN10==INPUT_HI
			#define PIN10_DIR    PORT_LOW
			#define PIN10_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN10==OUTPUT_HIGH
			#define PIN10_DIR    PORT_HIGH
			#define PIN10_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN10==OUTPUT_LOW
			#define PIN10_DIR    PORT_HIGH
			#define PIN10_PORT   PORT_LOW0_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin11

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN11==INPUT_PU
			#define PIN11_DIR    PORT_LOW
			#define PIN11_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN11==INPUT_HI
			#define PIN11_DIR    PORT_LOW
			#define PIN11_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN11==OUTPUT_HIGH
			#define PIN11_DIR    PORT_HIGH
			#define PIN11_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN11==OUTPUT_LOW
			#define PIN11_DIR    PORT_HIGH
			#define PIN11_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin12

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN12==INPUT_PU
			#define PIN12_DIR    PORT_LOW
			#define PIN12_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN12==INPUT_HI
			#define PIN12_DIR    PORT_LOW
			#define PIN12_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN12==OUTPUT_HIGH
			#define PIN12_DIR    PORT_HIGH
			#define PIN12_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN12==OUTPUT_LOW
			#define PIN12_DIR    PORT_HIGH
			#define PIN12_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin13

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN13==INPUT_PU
			#define PIN13_DIR    PORT_LOW
			#define PIN13_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN13==INPUT_HI
			#define PIN13_DIR    PORT_LOW
			#define PIN13_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN13==OUTPUT_HIGH
			#define PIN13_DIR    PORT_HIGH
			#define PIN13_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN13==OUTPUT_LOW
			#define PIN13_DIR    PORT_HIGH
			#define PIN13_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin14

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN14==INPUT_PU
			#define PIN14_DIR    PORT_LOW
			#define PIN14_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN14==INPUT_HI
			#define PIN14_DIR    PORT_LOW
			#define PIN14_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN14==OUTPUT_HIGH
			#define PIN14_DIR    PORT_HIGH
			#define PIN14_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN14==OUTPUT_LOW
			#define PIN14_DIR    PORT_HIGH
			#define PIN14_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin15

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN15==INPUT_PU
			#define PIN15_DIR    PORT_LOW
			#define PIN15_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN15==INPUT_HI
			#define PIN15_DIR    PORT_LOW
			#define PIN15_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN15==OUTPUT_HIGH
			#define PIN15_DIR    PORT_HIGH
			#define PIN15_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN15==OUTPUT_LOW
			#define PIN15_DIR    PORT_HIGH
			#define PIN15_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin16

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN16==INPUT_PU
			#define PIN16_DIR    PORT_LOW
			#define PIN16_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN16==INPUT_HI
			#define PIN16_DIR    PORT_LOW
			#define PIN16_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN16==OUTPUT_HIGH
			#define PIN16_DIR    PORT_HIGH
			#define PIN16_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN16==OUTPUT_LOW
			#define PIN16_DIR    PORT_HIGH
			#define PIN16_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin17

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN17==INPUT_PU
			#define PIN17_DIR    PORT_LOW
			#define PIN17_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN17==INPUT_HI
			#define PIN17_DIR    PORT_LOW
			#define PIN17_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN17==OUTPUT_HIGH
			#define PIN17_DIR    PORT_HIGH
			#define PIN17_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN17==OUTPUT_LOW
			#define PIN17_DIR    PORT_HIGH
			#define PIN17_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin18

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN18==INPUT_PU
			#define PIN18_DIR    PORT_LOW
			#define PIN18_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN18==INPUT_HI
			#define PIN18_DIR    PORT_LOW
			#define PIN18_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN18==OUTPUT_HIGH
			#define PIN18_DIR    PORT_HIGH
			#define PIN18_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN18==OUTPUT_LOW
			#define PIN18_DIR    PORT_HIGH
			#define PIN18_PORT   PORT_LOW
			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin19

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN19==INPUT_PU
			#define PIN19_DIR    PORT_LOW
			#define PIN19_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN19==INPUT_HI
			#define PIN19_DIR    PORT_LOW
			#define PIN19_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN19==OUTPUT_HIGH
			#define PIN19_DIR    PORT_HIGH
			#define PIN19_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN19==OUTPUT_LOW
			#define PIN19_DIR    PORT_HIGH
			#define PIN19_PORT   PORT_LOW
			#error   "invalid cfg"

			#endif

			//configuration for pin20

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN20==INPUT_PU
			#define PIN20_DIR    PORT_LOW
			#define PIN20_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN20==INPUT_HI
			#define PIN20_DIR    PORT_LOW
			#define PIN20_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN20==OUTPUT_HIGH
			#define PIN20_DIR    PORT_HIGH
			#define PIN20_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN20==OUTPUT_LOW
			#define PIN20_DIR    PORT_HIGH
			#define PIN20_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin21

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN21==INPUT_PU
			#define PIN21_DIR    PORT_LOW
			#define PIN21_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN21==INPUT_HI
			#define PIN21_DIR    PORT_LOW
			#define PIN21_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN21==OUTPUT_HIGH
			#define PIN21_DIR    PORT_HIGH
			#define PIN21_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN21==OUTPUT_LOW
			#define PIN21_DIR    PORT_HIGH
			#define PIN21_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin22

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN22==INPUT_PU
			#define PIN22_DIR    PORT_LOW
			#define PIN22_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN22==INPUT_HI
			#define PIN22_DIR    PORT_LOW
			#define PIN22_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN22==OUTPUT_HIGH
			#define PIN22_DIR    PORT_HIGH
			#define PIN22_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN22==OUTPUT_LOW
			#define PIN22_DIR    PORT_HIGH
			#define PIN22_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin23

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN23==INPUT_PU
			#define PIN23_DIR    PORT_LOW
			#define PIN23_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN23==INPUT_HI
			#define PIN23_DIR    PORT_LOW
			#define PIN23_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN23==OUTPUT_HIGH
			#define PIN23_DIR    PORT_HIGH
			#define PIN23_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN23==OUTPUT_LOW
			#define PIN23_DIR    PORT_HIGH
			#define PIN23_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			DDRA= CONCAT(PIN07_DIR,PIN06_DIR,PIN05_DIR,PIN04_DIR,PIN03_DIR,PIN02_DIR,PIN01_DIR,PIN00_DIR);
			DDRB= CONCAT(PIN15_DIR,PIN14_DIR,PIN13_DIR,PIN12_DIR,PIN11_DIR,PIN10_DIR,PIN09_DIR,PIN08_DIR);
			DDRC= CONCAT(PIN23_DIR,PIN22_DIR,PIN21_DIR,PIN20_DIR,PIN19_DIR,PIN18_DIR,PIN17_DIR,PIN16_DIR);

			PORTA= CONCAT(PIN07_PORT,PIN06_PORT,PIN05_PORT,PIN04_PORT,PIN03_PORT,PIN02_PORT,PIN01_PORT,PIN00_PORT);
			PORTB= CONCAT(PIN15_PORT,PIN14_PORT,PIN13_PORT,PIN12_PORT,PIN11_PORT,PIN10_PORT,PIN09_PORT,PIN08_PORT);
			PORTC= CONCAT(PIN23_PORT,PIN22_PORT,PIN21_PORT,PIN20_PORT,PIN19_PORT,PIN18_PORT,PIN17_PORT,PIN16_PORT);
		}


#elif (NO_OF_PORTS==FOUR_PORTS)
		{
			//configuration for pin00

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN00==INPUT_PU
			#define PIN00_DIR    PORT_LOW
			#define PIN00_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN00==INPUT_HI
			#define PIN00_DIR    PORT_LOW
			#define PIN00_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN0==OUTPUT_HIGH
			#define PIN00_DIR    PORT_HIGH
			#define PIN00_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN00==OUTPUT_LOW
			#define PIN00_DIR    PORT_HIGH
			#define PIN00_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin01

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN01==INPUT_PU
			#define PIN01_DIR    PORT_LOW
			#define PIN01_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN01==INPUT_HI
			#define PIN01_DIR    PORT_LOW
			#define PIN01_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN01==OUTPUT_HIGH
			#define PIN01_DIR    PORT_HIGH
			#define PIN01_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN01==OUTPUT_LOW
			#define PIN01_DIR    PORT_HIGH
			#define PIN01_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin02

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN02==INPUT_PU
			#define PIN02_DIR    PORT_LOW
			#define PIN02_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN02==INPUT_HI
			#define PIN02_DIR    PORT_LOW
			#define PIN02_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN2==OUTPUT_HIGH
			#define PIN02_DIR    PORT_HIGH
			#define PIN02_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN02==OUTPUT_LOW
			#define PIN02_DIR    PORT_HIGH
			#define PIN02_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin03

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN03==INPUT_PU
			#define PIN03_DIR    PORT_LOW
			#define PIN03_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN2==INPUT_HI
			#define PIN03_DIR    PORT_LOW
			#define PIN03_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN3==OUTPUT_HIGH
			#define PIN03_DIR    PORT_HIGH
			#define PIN03_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN3==OUTPUT_LOW
			#define PIN03_DIR    PORT_HIGH
			#define PIN03_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin04

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN04==INPUT_PU
			#define PIN04_DIR    PORT_LOW
			#define PIN04_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN04==INPUT_HI
			#define PIN04_DIR    PORT_LOW
			#define PIN04_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN04==OUTPUT_HIGH
			#define PIN04_DIR    PORT_HIGH
			#define PIN04_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN04==OUTPUT_LOW
			#define PIN04_DIR    PORT_HIGH
			#define PIN04_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin05

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN05==INPUT_PU
			#define PIN05_DIR    PORT_LOW
			#define PIN05_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN05==INPUT_HI
			#define PIN05_DIR    PORT_LOW
			#define PIN05_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN05==OUTPUT_HIGH
			#define PIN05_DIR    PORT_HIGH
			#define PIN05_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN05==OUTPUT_LOW
			#define PIN05_DIR    PORT_HIGH
			#define PIN05_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin06

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN06==INPUT_PU
			#define PIN06_DIR    PORT_LOW
			#define PIN06_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN06==INPUT_HI
			#define PIN06_DIR    PORT_LOW
			#define PIN06_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN06==OUTPUT_HIGH
			#define PIN06_DIR    PORT_HIGH
			#define PIN06_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN06==OUTPUT_LOW
			#define PIN06_DIR    PORT_HIGH
			#define PIN06_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin07

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN07==INPUT_PU
			#define PIN07_DIR    PORT_LOW
			#define PIN07_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN07==INPUT_HI
			#define PIN07_DIR    PORT_LOW
			#define PIN07_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN07==OUTPUT_HIGH
			#define PIN07_DIR    PORT_HIGH
			#define PIN07_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN07==OUTPUT_LOW
			#define PIN07_DIR    PORT_HIGH
			#define PIN07_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin08

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN08==INPUT_PU
			#define PIN08_DIR    PORT_LOW
			#define PIN08_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN08==INPUT_HI
			#define PIN08_DIR    PORT_LOW
			#define PIN08_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN08==OUTPUT_HIGH
			#define PIN08_DIR    PORT_HIGH
			#define PIN08_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN08==OUTPUT_LOW
			#define PIN08_DIR    PORT_HIGH
			#define PIN08_PORT   PORT_LOW
			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin09

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN09==INPUT_PU
			#define PIN09_DIR    PORT_LOW
			#define PIN09_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN09==INPUT_HI
			#define PIN09_DIR    PORT_LOW
			#define PIN09_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN09==OUTPUT_HIGH
			#define PIN09_DIR    PORT_HIGH
			#define PIN09_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN09==OUTPUT_LOW
			#define PIN09_DIR    PORT_HIGH
			#define PIN09_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin10

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN10==INPUT_PU
			#define PIN10_DIR    PORT_LOW
			#define PIN10_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN10==INPUT_HI
			#define PIN10_DIR    PORT_LOW
			#define PIN10_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN10==OUTPUT_HIGH
			#define PIN10_DIR    PORT_HIGH
			#define PIN10_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN10==OUTPUT_LOW
			#define PIN10_DIR    PORT_HIGH
			#define PIN10_PORT   PORT_LOW0_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin11

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN11==INPUT_PU
			#define PIN11_DIR    PORT_LOW
			#define PIN11_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN11==INPUT_HI
			#define PIN11_DIR    PORT_LOW
			#define PIN11_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN11==OUTPUT_HIGH
			#define PIN11_DIR    PORT_HIGH
			#define PIN11_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN11==OUTPUT_LOW
			#define PIN11_DIR    PORT_HIGH
			#define PIN11_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin12

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN12==INPUT_PU
			#define PIN12_DIR    PORT_LOW
			#define PIN12_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN12==INPUT_HI
			#define PIN12_DIR    PORT_LOW
			#define PIN12_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN12==OUTPUT_HIGH
			#define PIN12_DIR    PORT_HIGH
			#define PIN12_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN12==OUTPUT_LOW
			#define PIN12_DIR    PORT_HIGH
			#define PIN12_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin13

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN13==INPUT_PU
			#define PIN13_DIR    PORT_LOW
			#define PIN13_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN13==INPUT_HI
			#define PIN13_DIR    PORT_LOW
			#define PIN13_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN13==OUTPUT_HIGH
			#define PIN13_DIR    PORT_HIGH
			#define PIN13_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN13==OUTPUT_LOW
			#define PIN13_DIR    PORT_HIGH
			#define PIN13_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif


			//configuration for pin14

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN14==INPUT_PU
			#define PIN14_DIR    PORT_LOW
			#define PIN14_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN14==INPUT_HI
			#define PIN14_DIR    PORT_LOW
			#define PIN14_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN14==OUTPUT_HIGH
			#define PIN14_DIR    PORT_HIGH
			#define PIN14_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN14==OUTPUT_LOW
			#define PIN14_DIR    PORT_HIGH
			#define PIN14_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin15

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN15==INPUT_PU
			#define PIN15_DIR    PORT_LOW
			#define PIN15_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN15==INPUT_HI
			#define PIN15_DIR    PORT_LOW
			#define PIN15_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN15==OUTPUT_HIGH
			#define PIN15_DIR    PORT_HIGH
			#define PIN15_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN15==OUTPUT_LOW
			#define PIN15_DIR    PORT_HIGH
			#define PIN15_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin16

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN16==INPUT_PU
			#define PIN16_DIR    PORT_LOW
			#define PIN16_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN16==INPUT_HI
			#define PIN16_DIR    PORT_LOW
			#define PIN16_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN16==OUTPUT_HIGH
			#define PIN16_DIR    PORT_HIGH
			#define PIN16_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN16==OUTPUT_LOW
			#define PIN16_DIR    PORT_HIGH
			#define PIN16_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin17

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN17==INPUT_PU
			#define PIN17_DIR    PORT_LOW
			#define PIN17_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN17==INPUT_HI
			#define PIN17_DIR    PORT_LOW
			#define PIN17_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN17==OUTPUT_HIGH
			#define PIN17_DIR    PORT_HIGH
			#define PIN17_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN17==OUTPUT_LOW
			#define PIN17_DIR    PORT_HIGH
			#define PIN17_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin18

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN18==INPUT_PU
			#define PIN18_DIR    PORT_LOW
			#define PIN18_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN18==INPUT_HI
			#define PIN18_DIR    PORT_LOW
			#define PIN18_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN18==OUTPUT_HIGH
			#define PIN18_DIR    PORT_HIGH
			#define PIN18_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN18==OUTPUT_LOW
			#define PIN18_DIR    PORT_HIGH
			#define PIN18_PORT   PORT_LOW
			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin19

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN19==INPUT_PU
			#define PIN19_DIR    PORT_LOW
			#define PIN19_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN19==INPUT_HI
			#define PIN19_DIR    PORT_LOW
			#define PIN19_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN19==OUTPUT_HIGH
			#define PIN19_DIR    PORT_HIGH
			#define PIN19_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN19==OUTPUT_LOW
			#define PIN19_DIR    PORT_HIGH
			#define PIN19_PORT   PORT_LOW
			#error   "invalid cfg"

			#endif

			//configuration for pin20

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN20==INPUT_PU
			#define PIN20_DIR    PORT_LOW
			#define PIN20_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN20==INPUT_HI
			#define PIN20_DIR    PORT_LOW
			#define PIN20_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN20==OUTPUT_HIGH
			#define PIN20_DIR    PORT_HIGH
			#define PIN20_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN20==OUTPUT_LOW
			#define PIN20_DIR    PORT_HIGH
			#define PIN20_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin21

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN21==INPUT_PU
			#define PIN21_DIR    PORT_LOW
			#define PIN21_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN21==INPUT_HI
			#define PIN21_DIR    PORT_LOW
			#define PIN21_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN21==OUTPUT_HIGH
			#define PIN21_DIR    PORT_HIGH
			#define PIN21_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN21==OUTPUT_LOW
			#define PIN21_DIR    PORT_HIGH
			#define PIN21_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin22

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN22==INPUT_PU
			#define PIN22_DIR    PORT_LOW
			#define PIN22_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN22==INPUT_HI
			#define PIN22_DIR    PORT_LOW
			#define PIN22_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN22==OUTPUT_HIGH
			#define PIN22_DIR    PORT_HIGH
			#define PIN22_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN22==OUTPUT_LOW
			#define PIN22_DIR    PORT_HIGH
			#define PIN22_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin23

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN23==INPUT_PU
			#define PIN23_DIR    PORT_LOW
			#define PIN23_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN23==INPUT_HI
			#define PIN23_DIR    PORT_LOW
			#define PIN23_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN23==OUTPUT_HIGH
			#define PIN23_DIR    PORT_HIGH
			#define PIN23_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN23==OUTPUT_LOW
			#define PIN23_DIR    PORT_HIGH
			#define PIN23_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin24

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN24==INPUT_PU
			#define PIN24_DIR    PORT_LOW
			#define PIN24_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN24==INPUT_HI
			#define PIN24_DIR    PORT_LOW
			#define PIN24_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN24==OUTPUT_HIGH
			#define PIN24_DIR    PORT_HIGH
			#define PIN24_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN24==OUTPUT_LOW
			#define PIN24_DIR    PORT_HIGH
			#define PIN24_PORT   PORT_LOW
			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin25

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN25==INPUT_PU
			#define PIN25_DIR    PORT_LOW
			#define PIN25_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN25==INPUT_HI
			#define PIN25_DIR    PORT_LOW
			#define PIN25_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN25==OUTPUT_HIGH
			#define PIN25_DIR    PORT_HIGH
			#define PIN25_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN25==OUTPUT_LOW
			#define PIN25_DIR    PORT_HIGH
			#define PIN25_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin26

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN26==INPUT_PU
			#define PIN26_DIR    PORT_LOW
			#define PIN26_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN26==INPUT_HI
			#define PIN26_DIR    PORT_LOW
			#define PIN26_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN26==OUTPUT_HIGH
			#define PIN26_DIR    PORT_HIGH
			#define PIN26_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN26==OUTPUT_LOW
			#define PIN26_DIR    PORT_HIGH
			#define PIN26_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin27

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN27==INPUT_PU
			#define PIN27_DIR    PORT_LOW
			#define PIN27_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN27==INPUT_HI
			#define PIN27_DIR    PORT_LOW
			#define PIN27_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN27==OUTPUT_HIGH
			#define PIN27_DIR    PORT_HIGH
			#define PIN27_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN27==OUTPUT_LOW
			#define PIN27_DIR    PORT_HIGH
			#define PIN27_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin28

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN28==INPUT_PU
			#define PIN28_DIR    PORT_LOW
			#define PIN28_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN28==INPUT_HI
			#define PIN28_DIR    PORT_LOW
			#define PIN28_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN28==OUTPUT_HIGH
			#define PIN28_DIR    PORT_HIGH
			#define PIN28_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN28==OUTPUT_LOW
			#define PIN28_DIR    PORT_HIGH
			#define PIN28_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin29

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN29==INPUT_PU
			#define PIN29_DIR    PORT_LOW
			#define PIN29_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN29==INPUT_HI
			#define PIN29_DIR    PORT_LOW
			#define PIN29_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN29==OUTPUT_HIGH
			#define PIN29_DIR    PORT_HIGH
			#define PIN29_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN29==OUTPUT_LOW
			#define PIN29_DIR    PORT_HIGH
			#define PIN29_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin30

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN30==INPUT_PU
			#define PIN30_DIR    PORT_LOW
			#define PIN30_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN30==INPUT_HI
			#define PIN30_DIR    PORT_LOW
			#define PIN30_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN30==OUTPUT_HIGH
			#define PIN30_DIR    PORT_HIGH
			#define PIN30_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN30==OUTPUT_LOW
			#define PIN30_DIR    PORT_HIGH
			#define PIN30_PORT   PORT_LOW

			#else
			#error   "invalid cfg"

			#endif

			//configuration for pin31

			// in case input pull up we clear the direction(DDR register) and set the PORT register
			#if DIO_PIN31==INPUT_PU
			#define PIN31_DIR    PORT_LOW
			#define PIN31_PORT   PORT_HIGH

			// in case input high impedance we clear the direction(DDR register) and clear the PORT register
			#elif DIO_PIN31==INPUT_HI
			#define PIN31_DIR    PORT_LOW
			#define PIN31_PORT   PORT_LOW

			// in case output high we set the direction(DDR register) and set the PORT register
			#elif DIO_PIN31==OUTPUT_HIGH
			#define PIN31_DIR    PORT_HIGH
			#define PIN31_PORT   PORT_HIGH

			// in case output low we set the direction(DDR register) and clear the PORT register
			#elif DIO_PIN31==OUTPUT_LOW
			#define PIN31_DIR    PORT_HIGH
			#define PIN31_PORT   PORT_LOW
			#else
			#error   "invalid cfg"

			#endif


			DDRA= CONCAT(PIN07_DIR,PIN06_DIR,PIN05_DIR,PIN04_DIR,PIN03_DIR,PIN02_DIR,PIN01_DIR,PIN00_DIR);
			DDRB= CONCAT(PIN15_DIR,PIN14_DIR,PIN13_DIR,PIN12_DIR,PIN11_DIR,PIN10_DIR,PIN09_DIR,PIN08_DIR);
			DDRC= CONCAT(PIN23_DIR,PIN22_DIR,PIN21_DIR,PIN20_DIR,PIN19_DIR,PIN18_DIR,PIN17_DIR,PIN16_DIR);
			DDRD= CONCAT(PIN31_DIR,PIN30_DIR,PIN29_DIR,PIN28_DIR,PIN27_DIR,PIN26_DIR,PIN25_DIR,PIN24_DIR);

			PORTA= CONCAT(PIN07_PORT,PIN06_PORT,PIN05_PORT,PIN04_PORT,PIN03_PORT,PIN02_PORT,PIN01_PORT,PIN00_PORT);
			PORTB= CONCAT(PIN15_PORT,PIN14_PORT,PIN13_PORT,PIN12_PORT,PIN11_PORT,PIN10_PORT,PIN09_PORT,PIN08_PORT);
			PORTC= CONCAT(PIN23_PORT,PIN22_PORT,PIN21_PORT,PIN20_PORT,PIN19_PORT,PIN18_PORT,PIN17_PORT,PIN16_PORT);
			PORTD= CONCAT(PIN31_PORT,PIN30_PORT,PIN29_PORT,PIN28_PORT,PIN27_PORT,PIN26_PORT,PIN25_PORT,PIN24_PORT);
		}
		#else
		{
			#error "invalid cfg"
		}
		#endif
	#elif(CONFIGURATION_TYPE==POST_COMPILE_CONFIGURATION)
		{
			// to loop on all pins
			for(int i=0;i<NO_OF_PORTS*NO_OF_PINS;i++)
			{
				// to detect the port number
				PORT_enuPortOption loc_EnumPortNum=i/NO_OF_PINS;
				//to detect the pin number
				uint8 loc_PinNum=i%NO_OF_PINS;
				switch(loc_EnumPortNum)
				{
				// switch on number of port
				case PORT_enuPortA:
					//in case portA, we switch on the configuration of pin
					switch(DIO_PinCfg[i])
					{
					case PORT_enuInput_PU:
						// clear bit of DDRA register to make the pin input pin
						CLEAR_BIT(DDRA,loc_PinNum);
						//set bit of PORTA register to activate pull up resistor
						SET_BIT(PORTA,loc_PinNum);
						break;

					case PORT_enuInput_HI:
						// clear bit of DDRA register to make the pin input pin
						CLEAR_BIT(DDRA,loc_PinNum);
						//clear bit of PORTA register to activate high impedance
						CLEAR_BIT(PORTA,loc_PinNum);
						break;

					case PORT_enuOutput_HIGH:
						// set bit of DDRA register to make the pin output pin
						SET_BIT(DDRA,loc_PinNum);
						//set bit of PORTA register to write high on the pin
						SET_BIT(PORTA,loc_PinNum);
						break;

					case PORT_enuOutput_LOW:
						// set bit of DDRA register to make the pin output pin
						SET_BIT(DDRA,loc_PinNum);
						//clear bit of PORTA register to write low on the pin
						CLEAR_BIT(PORTA,loc_PinNum);
						break;
					}
					break;
					case PORT_enuPortB:
						//in case portB, we switch on the configuration of pin
						switch(DIO_PinCfg[i])
						{
						case PORT_enuInput_PU:
							// clear bit of DDRB register to make the pin input pin
							CLEAR_BIT(DDRB,loc_PinNum);
							//set bit of PORTB register to activate pull up resistor
							SET_BIT(PORTB,loc_PinNum);
							break;

						case PORT_enuInput_HI:
							// clear bit of DDRB register to make the pin input pin
							CLEAR_BIT(DDRB,loc_PinNum);
							//clear bit of PORTB register to activate high impedance
							CLEAR_BIT(PORTB,loc_PinNum);
							break;

						case PORT_enuOutput_HIGH:
							// set bit of DDRB register to make the pin output pin
							SET_BIT(DDRB,loc_PinNum);
							//set bit of PORTB register to write high on the pin
							SET_BIT(PORTB,loc_PinNum);
							break;

						case PORT_enuOutput_LOW:
							// set bit of DDRB register to make the pin output pin
							SET_BIT(DDRB,loc_PinNum);
							//clear bit of PORTB register to write low on the pin
							CLEAR_BIT(PORTB,loc_PinNum);
							break;
						}
						break;
						case PORT_enuPortC:
							//in case portC, we switch on the configuration of pin
							switch(DIO_PinCfg[i])
							{
							case PORT_enuInput_PU:
								// clear bit of DDRC register to make the pin input pin
								CLEAR_BIT(DDRC,loc_PinNum);
								//set bit of PORTC register to activate pull up resistor
								SET_BIT(PORTC,loc_PinNum);
								break;

							case PORT_enuInput_HI:
								// clear bit of DDRC register to make the pin input pin
								CLEAR_BIT(DDRC,loc_PinNum);
								//clear bit of PORTC register to activate high impedance
								CLEAR_BIT(PORTC,loc_PinNum);
								break;

							case PORT_enuOutput_HIGH:
								// set bit of DDRC register to make the pin output pin
								SET_BIT(DDRC,loc_PinNum);
								//set bit of PORTC register to write high on the pin
								SET_BIT(PORTC,loc_PinNum);
								break;

							case PORT_enuOutput_LOW:
								// set bit of DDRC register to make the pin output pin
								SET_BIT(DDRC,loc_PinNum);
								//clear bit of PORTC register to write low on the pin
								CLEAR_BIT(PORTC,loc_PinNum);
								break;
							}
							break;
							case PORT_enuPortD:
								//in case portD, we switch on the configuration of pin
								switch(DIO_PinCfg[i])
								{
								case PORT_enuInput_PU:
									// clear bit of DDRD register to make the pin input pin
									CLEAR_BIT(DDRD,loc_PinNum);
									//set bit of PORTD register to activate pull up resistor
									SET_BIT(PORTD,loc_PinNum);
									break;

								case PORT_enuInput_HI:
									// clear bit of DDRD register to make the pin input pin
									CLEAR_BIT(DDRD,loc_PinNum);
									//clear bit of PORTD register to activate high impedance
									CLEAR_BIT(PORTD,loc_PinNum);
									break;

								case PORT_enuOutput_HIGH:
									// set bit of DDRD register to make the pin output pin
									SET_BIT(DDRD,loc_PinNum);
									//set bit of PORTD register to write high on the pin
									SET_BIT(PORTD,loc_PinNum);
									break;

								case PORT_enuOutput_LOW:
									// set bit of DDRD register to make the pin output pin
									SET_BIT(DDRD,loc_PinNum);
									//clear bit of PORTD register to write low on the pin
									CLEAR_BIT(PORTD,loc_PinNum);
									break;
								}
								break;
				}
			}
#endif
		}
	}

