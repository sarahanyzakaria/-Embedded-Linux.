#ifndef PRIVATE_H
#define PRIVATE_H
#include "std_types.h"

// PORTA
#define DDRA		*((volatile uint8 *)0x3A)
#define PORTA		*((volatile uint8 *)0x3B)
#define PINA		*((volatile uint8 *)0x39)

//PORTB
#define DDRB		*((volatile uint8 *)0x37)
#define PORTB		*((volatile uint8 *)0x38)
#define PINB		*((volatile uint8 *)0x36)

//PORTC
#define DDRC		*((volatile uint8 *)0x34)
#define PORTC		*((volatile uint8 *)0x35)
#define PINC		*((volatile uint8 *)0x33)

//PORTD
#define DDRD		*((volatile uint8 *)0x31)
#define PORTD		*((volatile uint8 *)0x32)
#define PIND		*((volatile uint8 *)0x30)

#define PORT_LOW	LOGIC_LOW
#define PORT_HIGH	LOGIC_HIGH

#define CONCAT(p7,p6,p5,p4,p3,p2,p1,p0)	helper(p7,p6,p5,p4,p3,p2,p1,p0)
#define helper(p7,p6,p5,p4,p3,p2,p1,p0)	0b##p7##p6##p5##p4##p3##p2##p1##p0

typedef enum
{
	OK,NOK
}enuErrorState;

#endif
