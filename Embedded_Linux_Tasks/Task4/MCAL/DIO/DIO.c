/*
 * dio.c
 * Author : Sara Hany
 */
#include "DIO.h"
#include "math.h" /* To use the macros like SET_BIT */
#include"port_cfg.h"

/*
 * Description :
 * Setup the direction of the required pin input/output.
 * If the input port number or pin number are not correct, The function will not handle the request.
 */
enuErrorState DIO_SetPinConfiguration(DIO_enuPortOption PortNum, DIO_enuPinOption PinNum, DIO_enuConfiguration Configuration)
{
	enuErrorState ret_enuErrorStatus=NOK;
	//to check the number of ports is equal two ports
#if	(NO_OF_PORTS==TWO_PORTS)
	{
		// check if the input port greater than PORTB or lesser than PORTA
		if((PortNum>DIO_enuPortB)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		// check if the input pIN greater than PIN7 or lesser than PIN0
		else if((PinNum>DIO_enuPin7)||(PinNum<DIO_enuPin0))
		{
			ret_enuErrorStatus=NOK;
		}
		//check on the input configuration if this configuration was wrong this function will return not OK
		else if((Configuration>DIO_enuOutput_LOW)||(Configuration<DIO_enuInput_PU))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			// we use switch case to check on number of input PORT
			switch(PortNum)
			{
			case DIO_enuPortA:
				// in case PORTA, we switch on all options of configuration
				switch(Configuration)
				{
				case DIO_enuInput_PU:
					//clear the the bit of DDRA register to make this pin as input pin
					CLEAR_BIT(DDRA,PinNum);
					// set the bit of PORTA register to activate the pull up resistor
					SET_BIT(PORTA,PinNum);
					break;

				case DIO_enuInput_HI:
					//clear the the bit of DDRA register to make this pin as input pin
					CLEAR_BIT(DDRA,PinNum);
					// clear the bit of PORTA register to activate the high impedance
					CLEAR_BIT(PORTA,PinNum);
					break;

				case DIO_enuOutput_HIGH:
					//set the the bit of DDRA register to make this pin as output pin
					SET_BIT(DDRA,PinNum);
					// set the bit of PORTA register to write high on this pin
					SET_BIT(PORTA,PinNum);
					break;

				case DIO_enuOutput_LOW:
					//set the the bit of DDRA register to make this pin as output pin
					SET_BIT(DDRA,PinNum);
					// clear the bit of PORTA register to write low on this pin
					CLEAR_BIT(PORTA,PinNum);
					break;
				}
				break;
				case DIO_enuPortB:
					// in case PORTB, we switch on all options of configuration
					switch(Configuration)
					{
					case DIO_enuInput_PU:
						//clear the the bit of DDRB register to make this pin as input pin
						CLEAR_BIT(DDRB,PinNum);
						// set the bit of PORTB register to activate the pull up resistor
						SET_BIT(PORTB,PinNum);
						break;

					case DIO_enuInput_HI:
						//clear the the bit of DDRB register to make this pin as input pin
						CLEAR_BIT(DDRB,PinNum);
						// clear the bit of PORTB register to activate the high impedance
						CLEAR_BIT(PORTB,PinNum);
						break;

					case DIO_enuOutput_HIGH:
						//set the the bit of DDRB register to make this pin as output pin
						SET_BIT(DDRB,PinNum);
						// set the bit of PORTB register to write high on this pin
						SET_BIT(PORTB,PinNum);
						break;

					case DIO_enuOutput_LOW:
						//set the the bit of DDRB register to make this pin as output pin
						SET_BIT(DDRB,PinNum);
						// clear the bit of PORTB register to write low on this pin
						CLEAR_BIT(PORTB,PinNum);
						break;
					}
					break;
			}
		}
	}
	//to check the number of ports is equal three ports
#elif (NO_OF_PORTS==THREE_PORTS)
	{
		// check if the input port greater than PORTC or lesser than PORTA
		if((PortNum>DIO_enuPortC)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		// check if the input pIN greater than PIN7 or lesser than PIN0
		else if((PinNum>DIO_enuPin7)||(PinNum<DIO_enuPin0))
		{
			ret_enuErrorStatus=NOK;
		}
		//check on the input configuration if this configuration was wrong this function will return not OK
		else if((Configuration>DIO_enuOutput_LOW)||(Configuration<DIO_enuInput_PU))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			// we use switch case to check on number of input PORT
			switch(PortNum)
			{
			case DIO_enuPortA:
				// in case PORTA, we switch on all options of configuration
				switch(Configuration)
				{
				case DIO_enuInput_PU:
					//clear the the bit of DDRA register to make this pin as input pin
					CLEAR_BIT(DDRA,PinNum);
					// set the bit of PORTA register to activate the pull up resistor
					SET_BIT(PORTA,PinNum);
					break;

				case DIO_enuInput_HI:
					//clear the the bit of DDRA register to make this pin as input pin
					CLEAR_BIT(DDRA,PinNum);
					// clear the bit of PORTA register to activate the high impedance
					CLEAR_BIT(PORTA,PinNum);
					break;

				case DIO_enuOutput_HIGH:
					//set the the bit of DDRA register to make this pin as output pin
					SET_BIT(DDRA,PinNum);
					// set the bit of PORTA register to write high on this pin
					SET_BIT(PORTA,PinNum);
					break;

				case DIO_enuOutput_LOW:
					//set the the bit of DDRA register to make this pin as output pin
					SET_BIT(DDRA,PinNum);
					// clear the bit of PORTA register to write low on this pin
					CLEAR_BIT(PORTA,PinNum);
					break;
				}
				break;
				case DIO_enuPortB:
					// in case PORTB, we switch on all options of configuration
					switch(Configuration)
					{
					case DIO_enuInput_PU:
						//clear the the bit of DDRB register to make this pin as input pin
						CLEAR_BIT(DDRB,PinNum);
						// set the bit of PORTB register to activate the pull up resistor
						SET_BIT(PORTB,PinNum);
						break;

					case DIO_enuInput_HI:
						//clear the the bit of DDRB register to make this pin as input pin
						CLEAR_BIT(DDRB,PinNum);
						// clear the bit of PORTB register to activate the high impedance
						CLEAR_BIT(PORTB,PinNum);
						break;

					case DIO_enuOutput_HIGH:
						//set the the bit of DDRB register to make this pin as output pin
						SET_BIT(DDRB,PinNum);
						// set the bit of PORTB register to write high on this pin
						SET_BIT(PORTB,PinNum);
						break;

					case DIO_enuOutput_LOW:
						//set the the bit of DDRB register to make this pin as output pin
						SET_BIT(DDRB,PinNum);
						// clear the bit of PORTB register to write low on this pin
						CLEAR_BIT(PORTB,PinNum);
						break;
					}
					break;
					case DIO_enuPortC:
						// // in case PORTC, we switch on all options of configuration
						switch(Configuration)
						{
						case DIO_enuInput_PU:
							//clear the the bit of DDRC register to make this pin as input pin
							CLEAR_BIT(DDRC,PinNum);
							// set the bit of PORTC register to activate the pull up resistor
							SET_BIT(PORTC,PinNum);
							break;

						case DIO_enuInput_HI:
							//clear the the bit of DDRC register to make this pin as input pin
							CLEAR_BIT(DDRC,PinNum);
							// clear the bit of PORTC register to activate the high impedance
							CLEAR_BIT(PORTC,PinNum);
							break;

						case DIO_enuOutput_HIGH:
							//set the the bit of DDRC register to make this pin as output pin
							SET_BIT(DDRC,PinNum);
							// set the bit of PORTC register to write high on this pin
							SET_BIT(PORTC,PinNum);
							break;

						case DIO_enuOutput_LOW:
							//set the the bit of DDRC register to make this pin as output pin
							SET_BIT(DDRC,PinNum);
							// clear the bit of PORTC register to write low on this pin
							CLEAR_BIT(PORTC,PinNum);
							break;
						}
						break;
			}
		}
	}
	//to check the number of ports is equal four ports
#elif (NO_OF_PORTS==FOUR_PORTS)
	{
		// check if the input port greater than PORTD or lesser than PORTA
		if((PortNum>DIO_enuPortD)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		// check if the input pIN greater than PIN7 or lesser than PIN0
		else if((PinNum>DIO_enuPin7)||(PinNum<DIO_enuPin0))
		{
			ret_enuErrorStatus=NOK;
		}
		//check on the input configuration if this configuration was wrong this function will return not OK
		else if((Configuration>DIO_enuOutput_LOW)||(Configuration<DIO_enuInput_PU))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			// we use switch case to check on number of input PORT
			switch(PortNum)
			{
			case DIO_enuPortA:
				// in case PORTA, we switch on all options of configuration
				switch(Configuration)
				{
				case DIO_enuInput_PU:
					//clear the the bit of DDRA register to make this pin as input pin
					CLEAR_BIT(DDRA,PinNum);
					// set the bit of PORTA register to activate the pull up resistor
					SET_BIT(PORTA,PinNum);
					break;

				case DIO_enuInput_HI:
					//clear the the bit of DDRA register to make this pin as input pin
					CLEAR_BIT(DDRA,PinNum);
					// clear the bit of PORTA register to activate the high impedance
					CLEAR_BIT(PORTA,PinNum);
					break;

				case DIO_enuOutput_HIGH:
					//set the the bit of DDRA register to make this pin as output pin
					SET_BIT(DDRA,PinNum);
					// set the bit of PORTA register to write high on this pin
					SET_BIT(PORTA,PinNum);
					break;

				case DIO_enuOutput_LOW:
					//set the the bit of DDRA register to make this pin as output pin
					SET_BIT(DDRA,PinNum);
					// clear the bit of PORTA register to write low on this pin
					CLEAR_BIT(PORTA,PinNum);
					break;
				}
				break;
				case DIO_enuPortB:
					// in case PORTB, we switch on all options of configuration
					switch(Configuration)
					{
					case DIO_enuInput_PU:
						//clear the the bit of DDRB register to make this pin as input pin
						CLEAR_BIT(DDRB,PinNum);
						// set the bit of PORTB register to activate the pull up resistor
						SET_BIT(PORTB,PinNum);
						break;

					case DIO_enuInput_HI:
						//clear the the bit of DDRB register to make this pin as input pin
						CLEAR_BIT(DDRB,PinNum);
						// clear the bit of PORTB register to activate the high impedance
						CLEAR_BIT(PORTB,PinNum);
						break;

					case DIO_enuOutput_HIGH:
						//set the the bit of DDRB register to make this pin as output pin
						SET_BIT(DDRB,PinNum);
						// set the bit of PORTB register to write high on this pin
						SET_BIT(PORTB,PinNum);
						break;

					case DIO_enuOutput_LOW:
						//set the the bit of DDRB register to make this pin as output pin
						SET_BIT(DDRB,PinNum);
						// clear the bit of PORTB register to write low on this pin
						CLEAR_BIT(PORTB,PinNum);
						break;
					}
					break;
					case DIO_enuPortC:
						// in case PORTC, we switch on all options of configuration
						switch(Configuration)
						{
						case DIO_enuInput_PU:
							//clear the the bit of DDRC register to make this pin as input pin
							CLEAR_BIT(DDRC,PinNum);
							// set the bit of PORTC register to activate the pull up resistor
							SET_BIT(PORTC,PinNum);
							break;

						case DIO_enuInput_HI:
							//clear the the bit of DDRC register to make this pin as input pin
							CLEAR_BIT(DDRC,PinNum);
							// clear the bit of PORTC register to activate the high impedance
							CLEAR_BIT(PORTC,PinNum);
							break;

						case DIO_enuOutput_HIGH:
							//set the the bit of DDRC register to make this pin as output pin
							SET_BIT(DDRC,PinNum);
							// set the bit of PORTC register to write high on this pin
							SET_BIT(PORTC,PinNum);
							break;

						case DIO_enuOutput_LOW:
							//set the the bit of DDRC register to make this pin as output pin
							SET_BIT(DDRC,PinNum);
							// clear the bit of PORTC register to write low on this pin
							CLEAR_BIT(PORTC,PinNum);
							break;
						}
						break;
						case DIO_enuPortD:
							// in case PORTD, we switch on all options of configuration
							switch(Configuration)
							{
							case DIO_enuInput_PU:
								//clear the the bit of DDRD register to make this pin as input pin
								CLEAR_BIT(DDRD,PinNum);
								// set the bit of PORTD register to activate the pull up resistor
								SET_BIT(PORTD,PinNum);
								break;

							case DIO_enuInput_HI:
								//clear the the bit of DDRD register to make this pin as input pin
								CLEAR_BIT(DDRD,PinNum);
								// clear the bit of PORTB register to activate the high impedance
								CLEAR_BIT(PORTD,PinNum);
								break;

							case DIO_enuOutput_HIGH:
								//set the the bit of DDRD register to make this pin as output pin
								SET_BIT(DDRD,PinNum);
								// set the bit of PORTD register to write high on this pin
								SET_BIT(PORTD,PinNum);
								break;

							case DIO_enuOutput_LOW:
								//set the the bit of DDRD register to make this pin as output pin
								SET_BIT(DDRD,PinNum);
								// clear the bit of PORTD register to write low on this pin
								CLEAR_BIT(PORTD,PinNum);
								break;
							}
							break;
			}
		}
	}
#endif
	return ret_enuErrorStatus;
}



/*
 * Description :
 * Write the value Logic High or Logic Low on the required pin.
 * If the input port number or pin number are not correct, The function will not handle the request.
 */
enuErrorState DIO_SetPin(DIO_enuPortOption PortNum, DIO_enuPinOption PinNum, DIO_enuState state)
{
	enuErrorState ret_enuErrorStatus=NOK;
	//to check the number of ports is equal two ports
#if (NO_OF_PORTS==TWO_PORTS)
	{
		// check if the input port greater than PORTB or lesser than PORTA
		if((PortNum>DIO_enuPortB)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		// check if the input pIN greater than PIN7 or lesser than PIN0
		else if((PinNum>DIO_enuPin7)||(PinNum<DIO_enuPin0))
		{
			ret_enuErrorStatus=NOK;
		}
		//check on the input state if this configuration was wrong this function will return not OK
		else if((state>High)||(state<Low))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;

			switch(PortNum)
			{
			// we use switch case to check on number of input PORT
			case DIO_enuPortA:
				// in case PORTA, we switch on all options of state
				switch(state)
				{
				case High:
					// set the bit of PORTA register to write high on this pin
					SET_BIT(PORTA,PinNum);
					break;
				case Low:
					// clear the bit of PORTA register to write low on this pin
					CLEAR_BIT(PORTA,PinNum);
					break;
				}
				break;
				case DIO_enuPortB:
					// in case PORTB, we switch on all options of state
					switch(state)
					{
					case High:
						// set the bit of PORTB register to write high on this pin
						SET_BIT(PORTB,PinNum);
						break;
					case Low:
						// clear the bit of PORTB register to write low on this pin
						CLEAR_BIT(PORTB,PinNum);
						break;
					}
			}
		}
	}
	//to check the number of ports is equal three ports
#elif(NO_OF_PORTS==THREE_PORTS)
	{
		// check if the input port greater than PORTC or lesser than PORTA
		if((PortNum>DIO_enuPortC)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		// check if the input pIN greater than PIN7 or lesser than PIN0
		else if((PinNum>DIO_enuPin7)||(PinNum<DIO_enuPin0))
		{
			ret_enuErrorStatus=NOK;
		}
		//check on the input state if this configuration was wrong this function will return not OK
		else if((state>High)||(state<Low))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			// we use switch case to check on number of input PORT
			switch(PortNum)
			{
			case DIO_enuPortA:
				// in case PORTA, we switch on all options of state
				switch(state)
				{
				case High:
					// set the bit of PORTA register to write high on this pin
					SET_BIT(PORTA,PinNum);
					break;
				case Low:
					// clear the bit of PORTA register to write low on this pin
					CLEAR_BIT(PORTA,PinNum);
					break;
				}
				break;
				case DIO_enuPortB:
					// in case PORTB, we switch on all options of state
					switch(state)
					{
					case High:
						// set the bit of PORTB register to write high on this pin
						SET_BIT(PORTB,PinNum);
						break;
					case Low:
						// clear the bit of PORTB register to write low on this pin
						CLEAR_BIT(PORTB,PinNum);
						break;
					}
					case DIO_enuPortC:
						// in case PORTC, we switch on all options of state
						switch(state)
						{
						case High:
							// set the bit of PORTC register to write high on this pin
							SET_BIT(PORTC,PinNum);
							break;
						case Low:
							// clear the bit of PORTC register to write low on this pin
							CLEAR_BIT(PORTC,PinNum);
							break;
						}
						break;
			}
		}
	}
	//to check the number of ports is four two ports
#elif(NO_OF_PORTS==FOUR_PORTS)
	{
		// check if the input port greater than PORTD or lesser than PORTA
		if((PortNum>DIO_enuPortD)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		// check if the input pIN greater than PIN7 or lesser than PIN0
		else if((PinNum>DIO_enuPin7)||(PinNum<DIO_enuPin0))
		{
			ret_enuErrorStatus=NOK;
		}
		//check on the input state if this configuration was wrong this function will return not OK
		else if((state>High)||(state<Low))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			switch(PortNum)
			{
			// we use switch case to check on number of input PORT
			case DIO_enuPortA:
				// in case PORTA, we switch on all options of state
				switch(state)
				{
				case High:
					// set the bit of PORTA register to write high on this pin
					SET_BIT(PORTA,PinNum);
					break;
				case Low:
					// clear the bit of PORTA register to write low on this pin
					CLEAR_BIT(PORTA,PinNum);
					break;
				}
				break;
				case DIO_enuPortB:
					// in case PORTB, we switch on all options of state
					switch(state)
					{
					case High:
						// set the bit of PORTB register to write high on this pin
						SET_BIT(PORTB,PinNum);
						break;
					case Low:
						// clear the bit of PORTB register to write low on this pin
						CLEAR_BIT(PORTB,PinNum);
						break;
					}
					break;
					case DIO_enuPortC:
						// in case PORTC, we switch on all options of state
						switch(state)
						{
						case High:
							// set the bit of PORTC register to write high on this pin
							SET_BIT(PORTC,PinNum);
							break;
						case Low:
							// clear the bit of PORTC register to write low on this pin
							CLEAR_BIT(PORTC,PinNum);
							break;
						}
						break;
						case DIO_enuPortD:
							// in case PORTD, we switch on all options of state
							switch(state)
							{
							case High:
								// set the bit of PORTD register to write high on this pin
								SET_BIT(PORTD,PinNum);
								break;
							case Low:
								// clear the bit of PORTD register to write low on this pin
								CLEAR_BIT(PORTD,PinNum);
								break;
							}
							break;
			}
		}
	}
#endif
	return ret_enuErrorStatus;
}

/*
 * Description :
 * Read and return the value for the required pin, it should be Logic High or Logic Low.
 * If the input port number or pin number are not correct, The function will return Logic Low.
 */
enuErrorState DIO_GetPin(DIO_enuPortOption PortNum, DIO_enuPinOption PinNum, uint8* Add_puint8Value)
{
	enuErrorState ret_enuErrorStatus=NOK;
	//to check the number of ports is equal TWO ports
#if(NO_OF_PORTS==TWO_PORTS)
	{
		// check if the input port greater than PORTB or lesser than PORTA
		if((PortNum>DIO_enuPortB)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		// check if the input PIN greater than PIN7 or lesser than PIN0
		else if((PinNum>DIO_enuPin7)||(PinNum<DIO_enuPin0))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;

			switch(PortNum)
			{
			// we use switch case to check on number of input PORT
			case DIO_enuPortA:
				// in case PORTA, we switch on all options of state

				//check if this PIN is set in PINA register, we write high in the variable
				if(BIT_IS_SET(PINA,PinNum))
				{
					*Add_puint8Value= High;
				}
				//if this PIN is not set in PINA register, we write low in the variable
				else
				{
					*Add_puint8Value= Low;
				}
				break;
			case DIO_enuPortB:
				// in case PORTB, we switch on all options of state

				//check if this PIN is set in PINB register, we write high in the variable
				if(BIT_IS_SET(PINB,PinNum))
				{
					*Add_puint8Value= High;
				}
				//if this PIN is not set in PINB register, we write low in the variable
				else
				{
					*Add_puint8Value= Low;
				}
				break;
			}
		}
	}
	//to check the number of ports is equal three ports
#elif(NO_OF_PORTS==THREE_PORTS)
	{
		// check if the input port greater than PORTC or lesser than PORTA
		if((PortNum>DIO_enuPortC)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		// check if the input PIN greater than PIN7 or lesser than PIN0
		else if((PinNum>DIO_enuPin7)||(PinNum<DIO_enuPin0))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;

			switch(PortNum)
			{
			// we use switch case to check on number of input PORT
			case DIO_enuPortA:
				// in case PORTA, we switch on all options of state

				//check if this PIN is set in PINA register, we write high in the variable
				if(BIT_IS_SET(PINA,PinNum))
				{
					*Add_puint8Value= High;
				}
				//if this PIN is not set in PINA register, we write low in the variable
				else
				{
					*Add_puint8Value= Low;
				}
				break;
			case DIO_enuPortB:
				// in case PORTB, we switch on all options of state

				//check if this PIN is set in PINB register, we write high in the variable
				if(BIT_IS_SET(PINB,PinNum))
				{
					*Add_puint8Value= High;
				}
				//if this PIN is not set in PINB register, we write low in the variable
				else
				{
					*Add_puint8Value= Low;
				}
				break;
			case DIO_enuPortC:
				// in case PORTC, we switch on all options of state

				//check if this PIN is set in PINC register, we write high in the variable
				if(BIT_IS_SET(PINC,PinNum))
				{
					*Add_puint8Value= High;
				}
				//if this PIN is not set in PINC register, we write low in the variable
				else
				{
					*Add_puint8Value= Low;
				}
				break;
			}
		}
	}
	//to check the number of ports is equal four ports
#elif(NO_OF_PORTS==FOUR_PORTS)
	{
		// check if the input port greater than PORTD or lesser than PORTA
		if((PortNum>DIO_enuPortD)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		// check if the input PIN greater than PIN7 or lesser than PIN0
		else if((PinNum>DIO_enuPin7)||(PinNum<DIO_enuPin0))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;

			switch(PortNum)
			{
			// we use switch case to check on number of input PORT
			case DIO_enuPortA:
				// in case PORTA, we switch on all options of state

				//if this PIN is not set in PINA register, we write high in the variable
				if(BIT_IS_SET(PINA,PinNum))
				{
					*Add_puint8Value= High;
				}
				//if this PIN is not set in PINA register, we write low in the variable
				else
				{
					*Add_puint8Value= Low;
				}
				break;
			case DIO_enuPortB:
				// in case PORTB, we switch on all options of state

				//if this PIN is not set in PINB register, we write high in the variable
				if(BIT_IS_SET(PINB,PinNum))
				{
					*Add_puint8Value= High;
				}
				//if this PIN is not set in PINB register, we write low in the variable
				else
				{
					*Add_puint8Value= Low;
				}
				break;
			case DIO_enuPortC:
				// in case PORTC, we switch on all options of state

				//if this PIN is not set in PINC register, we write high in the variable
				if(BIT_IS_SET(PINC,PinNum))
				{
					*Add_puint8Value= High;
				}
				//if this PIN is not set in PINC register, we write low in the variable
				else
				{
					*Add_puint8Value= Low;
				}
				break;
			case DIO_enuPortD:
				// in case PORTD, we switch on all options of state

				//if this PIN is not set in PIND register, we write high in the variable
				if(BIT_IS_SET(PIND,PinNum))
				{
					*Add_puint8Value= High;
				}
				//if this PIN is not set in PIND register, we write low in the variable
				else
				{
					*Add_puint8Value= Low;
				}
				break;
			}
		}
	}
#endif
	return ret_enuErrorStatus;
}


/*
 * Description :
 * Setup the direction of the required port all pins input/output.
 * If the direction value is INPUT all pins in this port should be input pins.
 * If the direction value is OUTPUT all pins in this port should be output pins.
 * If the input port number is not correct, The function will not handle the request.
 */
enuErrorState DIO_SetPortConfiguration(DIO_enuPortOption PortNum, DIO_enuConfiguration Configuration)
{	
	enuErrorState ret_enuErrorStatus=NOK;
	//to check the number of ports is equal two ports
#if(NO_OF_PORTS==TWO_PORTS)
	{
		// check if the input port greater than PORTB or lesser than PORTA
		if((PortNum>DIO_enuPortD)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		//check on the input configuration if this configuration was wrong this function will return not OK
		else if((Configuration>DIO_enuOutput_LOW)||(Configuration<DIO_enuInput_PU))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			// we use switch case to check on number of input PORT
			switch(PortNum)
			{

			case DIO_enuPortA:
				// in case PORTA, we switch on all options of configuration
				switch(Configuration)
				{
				case DIO_enuInput_PU:
					//clear DDRA register to make this port as input port
					DDRA=0x00;
					//set PORTA register to register to activate the pull up resistor
					PORTA=0xff;
					break;
				case DIO_enuInput_HI:
					//clear DDRA register to make this port as input port
					DDRA=0x00;
					//clear PORTA register to register to activate the high impedance resistor
					PORTA=0x00;
					break;
				case DIO_enuOutput_HIGH:
					//set DDRA register to make this port as output port
					DDRA=0xff;
					//set PORTA register to write high on port
					PORTA=0xff;
					break;
				case DIO_enuOutput_LOW:
					//set DDRA register to make this port as output port
					DDRA=0xff;
					//clear the PORTA register to write low on port
					PORTA=0x00;
					break;
				}
				break;
				case DIO_enuPortB:
					// in case PORTB, we switch on all options of configuration
					switch(Configuration)
					{
					case DIO_enuInput_PU:
						//clear DDRB register to make this port as input port
						DDRB=0x00;
						//set PORTB register to register to activate the pull up resistor
						PORTB=0xff;
						break;
					case DIO_enuInput_HI:
						//clear DDRB register to make this port as input port
						DDRB=0x00;
						//clear PORTB register to register to activate the high impedance resistor
						PORTB=0x00;
						break;
					case DIO_enuOutput_HIGH:
						//set DDRB register to make this port as output port
						DDRB=0xff;
						//set PORTB register to write high on port
						PORTB=0xff;
						break;
					case DIO_enuOutput_LOW:
						//set DDRB register to make this port as output port
						DDRB=0xff;
						//clear the PORTB register to write low on port
						PORTB=0x00;
						break;
					}
					break;
			}
		}
	}
	//to check the number of ports is equal three ports
#elif(NO_OF_PORTS==THREE_PORTS)
	{
		// check if the input port greater than PORTC or lesser than PORTA
		if((PortNum>DIO_enuPortC)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		//check on the input configuration if this configuration was wrong this function will return not OK
		else if((Configuration>DIO_enuOutput_LOW)||(Configuration<DIO_enuInput_PU))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			// we use switch case to check on number of input PORT
			switch(PortNum)
			{
			case DIO_enuPortA:
				// in case PORTA, we switch on all options of configuration
				switch(Configuration)
				{
				case DIO_enuInput_PU:
					//clear DDRA register to make this port as input port
					DDRA=0x00;
					//set PORTA register to register to activate the pull up resistor
					PORTA=0xff;
					break;
				case DIO_enuInput_HI:
					//clear DDRA register to make this port as input port
					DDRA=0x00;
					//clear PORTA register to register to activate the high impedance resistor
					PORTA=0x00;
					break;
				case DIO_enuOutput_HIGH:
					//set DDRA register to make this port as output port
					DDRA=0xff;
					//set PORTA register to write high on port
					PORTA=0xff;
					break;
				case DIO_enuOutput_LOW:
					//set DDRA register to make this port as output port
					DDRA=0xff;
					//clear the PORTA register to write low on port
					PORTA=0x00;
					break;
				}
				break;
				case DIO_enuPortB:
					// in case PORTB, we switch on all options of configuration
					switch(Configuration)
					{
					case DIO_enuInput_PU:
						//clear DDRB register to make this port as input port
						DDRB=0x00;
						//set PORTB register to register to activate the pull up resistor
						PORTB=0xff;
						break;
					case DIO_enuInput_HI:
						//clear DDRB register to make this port as input port
						DDRB=0x00;
						//clear PORTB register to register to activate the high impedance resistor
						PORTB=0x00;
						break;
					case DIO_enuOutput_HIGH:
						//set DDRB register to make this port as output port
						DDRB=0xff;
						//set PORTB register to write high on port
						PORTB=0xff;
						break;
					case DIO_enuOutput_LOW:
						//set DDRB register to make this port as output port
						DDRB=0xff;
						//clear the PORTB register to write low on port
						PORTB=0x00;
						break;
					}
					break;
					case DIO_enuPortC:
						// in case PORTC, we switch on all options of configuration
						switch(Configuration)
						{
						case DIO_enuInput_PU:
							//clear DDRC register to make this port as input port
							DDRC=0x00;
							//set PORTC register to register to activate the pull up resistor
							PORTC=0xff;
							break;
						case DIO_enuInput_HI:
							//clear DDRC register to make this port as input port
							DDRC=0x00;
							//clear PORTC register to register to activate the high impedance resistor
							PORTC=0x00;
							break;
						case DIO_enuOutput_HIGH:
							//set DDRC register to make this port as output port
							DDRC=0xff;
							//set PORTC register to write high on port
							PORTC=0xff;
							break;
						case DIO_enuOutput_LOW:
							//set DDRC register to make this port as output port
							DDRC=0xff;
							//clear the PORTC register to write low on port
							PORTC=0x00;
							break;
						}
						break;
			}
		}
	}
	//to check the number of ports is equal four ports
#elif(NO_OF_PORTS==FOUR_PORTS)
	{
		// check if the input port greater than PORTD or lesser than PORTA
		if((PortNum>DIO_enuPortD)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		//check on the input configuration if this configuration was wrong this function will return not OK
		else if((Configuration>DIO_enuOutput_LOW)||(Configuration<DIO_enuInput_PU))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			// we use switch case to check on number of input PORT
			switch(PortNum)
			{
			case DIO_enuPortA:
				// in case PORTA, we switch on all options of configuration
				switch(Configuration)
				{
				case DIO_enuInput_PU:
					//clear DDRA register to make this port as input port
					DDRA=0x00;
					//set PORTA register to register to activate the pull up resistor
					PORTA=0xff;
					break;
				case DIO_enuInput_HI:
					//clear DDRA register to make this port as input port
					DDRA=0x00;
					//clear PORTA register to register to activate the high impedance resistor
					PORTA=0x00;
					break;
				case DIO_enuOutput_HIGH:
					//set DDRA register to make this port as output port
					DDRA=0xff;
					//set PORTA register to write high on port
					PORTA=0xff;
					break;
				case DIO_enuOutput_LOW:
					//set DDRA register to make this port as output port
					DDRA=0xff;
					//clear the PORTA register to write low on port
					PORTA=0x00;
					break;
				}
				break;
				case DIO_enuPortB:
					// in case PORTB, we switch on all options of configuration
					switch(Configuration)
					{
					case DIO_enuInput_PU:
						//clear DDRB register to make this port as input port
						DDRB=0x00;
						//set PORTB register to register to activate the pull up resistor
						PORTB=0xff;
						break;
					case DIO_enuInput_HI:
						//clear DDRB register to make this port as input port
						DDRB=0x00;
						//clear PORTB register to register to activate the high impedance resistor
						PORTB=0x00;
						break;
					case DIO_enuOutput_HIGH:
						//set DDRB register to make this port as output port
						DDRB=0xff;
						//set PORTB register to write high on port
						PORTB=0xff;
						break;
					case DIO_enuOutput_LOW:
						//set DDRB register to make this port as output port
						DDRB=0xff;
						//clear the PORTB register to write low on port
						PORTB=0x00;
						break;
					}
					break;
					case DIO_enuPortC:
						// in case PORTC, we switch on all options of configuration
						switch(Configuration)
						{
						case DIO_enuInput_PU:
							//clear DDRC register to make this port as input port
							DDRC=0x00;
							//set PORTC register to register to activate the pull up resistor
							PORTC=0xff;
							break;
						case DIO_enuInput_HI:
							//clear DDRC register to make this port as input port
							DDRC=0x00;
							//clear PORTC register to register to activate the high impedance resistor
							PORTC=0x00;
							break;
						case DIO_enuOutput_HIGH:
							//set DDRC register to make this port as output port
							DDRC=0xff;
							//set PORTC register to write high on port
							PORTC=0xff;
							break;
						case DIO_enuOutput_LOW:
							//set DDRC register to make this port as output port
							DDRC=0xff;
							//clear the PORTC register to write low on port
							PORTC=0x00;
							break;
						}
						break;
						case DIO_enuPortD:
							// in case PORTD, we switch on all options of configuration
							switch(Configuration)
							{
							case DIO_enuInput_PU:
								//clear DDRD register to make this port as input port
								DDRD=0x00;
								//set PORTD register to register to activate the pull up resistor
								PORTD=0xff;
								break;
							case DIO_enuInput_HI:
								//clear DDRD register to make this port as input port
								DDRD=0x00;
								//clear PORTD register to register to activate the high impedance resistor
								PORTD=0x00;
								break;
							case DIO_enuOutput_HIGH:
								//set DDRD register to make this port as output port
								DDRD=0xff;
								//set PORTD register to write high on port
								PORTD=0xff;
								break;
							case DIO_enuOutput_LOW:
								//set DDRD register to make this port as output port
								DDRD=0xff;
								//clear the PORTD register to write low on port
								PORTD=0x00;
								break;
							}
							break;
			}
		}
	}
#endif
	return ret_enuErrorStatus;
}

/*
 * Description :
 * Write the value Logic High or Logic Low on the required port.
 * If the input port number is not correct, The function will not handle the request.
 */

enuErrorState DIO_SetPort(DIO_enuPortOption PortNum, DIO_enuState state)
{
	enuErrorState ret_enuErrorStatus=NOK;
	//to check the number of ports is equal two ports
#if(NO_OF_PORTS==TWO_PORTS)
	{

		// check if the input port greater than PORTB or lesser than PORTA
		if((PortNum>DIO_enuPortB)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		//check on the input state if this configuration was wrong this function will return not OK
		else if((state>High)||(state<Low))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			// we use switch case to check on number of input PORT
			switch(PortNum)
			{
			// in case PORTA, we switch on all options of state
			case DIO_enuPortA:
				switch(state)
				{
				// set PORTA register to write high on this port
				case High:
					PORTA=0xff;
					break;
					// clear PORTA register to write low on this pin
				case Low:
					PORTA=0x00;
					break;
				}
				break;
				// in case PORTB, we switch on all options of state
				case DIO_enuPortB:
					switch(state)
					{
					// set PORTB register to write high on this port
					case High:
						PORTB=0xff;
						break;
						// clear PORTB register to write low on this pin
					case Low:
						PORTB=0x00;
						break;
					}
					break;
			}
		}
	}
	//to check the number of ports is equal three ports
#elif(NO_OF_PORTS==THREE_PORTS)
	{

		// check if the input port greater than PORTC or lesser than PORTA
		if((PortNum>DIO_enuPortC)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		//check on the input state if this configuration was wrong this function will return not OK
		else if((state>High)||(state<Low))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			// we use switch case to check on number of input PORT
			switch(PortNum)
			{
			// in case PORTA, we switch on all options of state
			case DIO_enuPortA:
				switch(state)
				{
				// set PORTA register to write high on this port
				case High:
					PORTA=0xff;
					break;
					// clear PORTA register to write low on this pin
				case Low:
					PORTA=0x00;
					break;
				}
				break;
				// in case PORTB, we switch on all options of state
				case DIO_enuPortB:
					switch(state)
					{
					// set PORTB register to write high on this port
					case High:
						PORTB=0xff;
						break;
						// clear PORTB register to write low on this pin
					case Low:
						PORTB=0x00;
						break;
					}
					break;
					// in case PORTC, we switch on all options of state
					case DIO_enuPortC:
						switch(state)
						{
						// set PORTC register to write high on this port
						case High:
							PORTC=0xff;
							break;
							// clear PORTC register to write low on this pin
						case Low:
							PORTC=0x00;
							break;
						}
						break;
			}
		}
	}
	//to check the number of ports is equal four ports
#elif(NO_OF_PORTS==FOUR_PORTS)
	{

		// check if the input port greater than PORTD or lesser than PORTA
		if((PortNum>DIO_enuPortD)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		//check on the input state if this configuration was wrong this function will return not OK
		else if((state>High)||(state<Low))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			// we use switch case to check on number of input PORT
			switch(PortNum)
			{
			// in case PORTA, we switch on all options of state
			case DIO_enuPortA:
				switch(state)
				{
				// set PORTA register to write high on this port
				case High:
					PORTA=0xff;
					break;
					// clear PORTA register to write low on this pin
				case Low:
					PORTA=0x00;
					break;
				}
				break;
				// in case PORTB, we switch on all options of state
				case DIO_enuPortB:
					switch(state)
					{
					// set PORTB register to write high on this port
					case High:
						PORTB=0xff;
						break;
						// clear PORTB register to write low on this pin
					case Low:
						PORTB=0x00;
						break;
					}
					break;
					// in case PORTC, we switch on all options of state
					case DIO_enuPortC:
						switch(state)
						{
						// set PORTC register to write high on this port
						case High:
							PORTC=0xff;
							break;
							// clear PORTC register to write low on this pin
						case Low:
							PORTC=0x00;
							break;
						}
						break;
						case DIO_enuPortD:
							switch(state)
							{
							// set PORTD register to write high on this port
							case High:
								PORTD=0xff;
								break;
								// clear PORTD register to write low on this pin
							case Low:
								PORTD=0x00;
								break;
							}
							break;
			}
		}
	}
#endif
	return ret_enuErrorStatus;
}

/*
 * Description :
 * Write the value on the low 4 pins.
 * If the input port number is not correct, The function will not handle the request.
 */

enuErrorState display(DIO_enuPortOption PortNum,uint8 VALUE)
{
	enuErrorState ret_enuErrorStatus=NOK;
	//to check the number of ports is equal two ports
#if(NO_OF_PORTS==TWO_PORTS)
	{
		// check if the input port greater than PORTB or lesser than PORTA
		if((PortNum>DIO_enuPortB)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			// we use switch case to check on number of input PORT
			switch(PortNum)
			{
			// in case PORTA
			case DIO_enuPortA:
				//to clear the low bits in PORTA
				CLR_LOW_NIB(PORTA);
				//to assign the value in the low bits in PORTA
				ASSIGN_LOW_NIB(PORTA,VALUE) ;
				break;

				// in case PORTB
			case DIO_enuPortB:
				//to clear the low bits in PORTB
				CLR_LOW_NIB(PORTB);
				//to assign the value in the low bits in PORTB
				ASSIGN_LOW_NIB(PORTB,VALUE) ;
				break;
			}
		}
	}
	//to check the number of ports is equal three ports
#elif(NO_OF_PORTS==THREE_PORTS)
	{
		// check if the input port greater than PORTC or lesser than PORTA
		if((PortNum>DIO_enuPortC)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			// we use switch case to check on number of input PORT
			switch(PortNum)
			{
			// in case PORTA
			case DIO_enuPortA:
				//to clear the low bits in PORTA
				CLR_LOW_NIB(PORTA);
				//to assign the value in the low bits in PORTA
				ASSIGN_LOW_NIB(PORTA,VALUE) ;
				break;

				// in case PORTB
			case DIO_enuPortB:
				//to clear the low bits in PORTB
				CLR_LOW_NIB(PORTB);
				//to assign the value in the low bits in PORTB
				ASSIGN_LOW_NIB(PORTB,VALUE) ;
				break;

				// in case PORTC
			case DIO_enuPortC:
				//to clear the low bits in PORTC
				CLR_LOW_NIB(PORTC);
				//to assign the value in the low bits in PORTC
				ASSIGN_LOW_NIB(PORTC,VALUE) ;
				break;
			}
		}
	}		
	//to check the number of ports is equal four ports
#elif(NO_OF_PORTS==FOUR_PORTS)
	{
		// check if the input port greater than PORTD or lesser than PORTA
		if((PortNum>DIO_enuPortD)||(PortNum<DIO_enuPortA))
		{
			ret_enuErrorStatus=NOK;
		}
		// in case all inputs were correct the function will handle the request
		else
		{
			ret_enuErrorStatus=OK;
			// we use switch case to check on number of input PORT
			switch(PortNum)
			{
			// in case PORTA
			case DIO_enuPortA:
				//to clear the low bits in PORTA
				CLR_LOW_NIB(PORTA);
				//to assign the value in the low bits in PORTA
				ASSIGN_LOW_NIB(PORTA,VALUE) ;
				break;

				// in case PORTB
			case DIO_enuPortB:
				//to clear the low bits in PORTB
				CLR_LOW_NIB(PORTB);
				//to assign the value in the low bits in PORTB
				ASSIGN_LOW_NIB(PORTB,VALUE) ;
				break;

				// in case PORTC
			case DIO_enuPortC:
				//to clear the low bits in PORTC
				CLR_LOW_NIB(PORTC);
				//to assign the value in the low bits in PORTC
				ASSIGN_LOW_NIB(PORTC,VALUE) ;
				break;

				// in case PORTD
			case DIO_enuPortD:
				//to clear the low bits in PORTD
				CLR_LOW_NIB(PORTD);
				//to assign the value in the low bits in PORTD
				ASSIGN_LOW_NIB(PORTD,VALUE) ;
				break;
			}
		}
	}
#endif
	return ret_enuErrorStatus;
}
/*
 * Description :
 * function used to delay time.
 * take the time in milliseconds.
 */
void DIO_DelayMs(uint32 Copy_u32TimeMs)
{
	for(int i=0;i<Copy_u32TimeMs;i++)
	{
		for (unsigned int j = 0; j < 100; ++j) 
		{
			asm("NOP");
		}
	}
	return;
}
