#include <inttypes.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int main()
{
	DDRB = 0xFF;
	while(1)
	{
		PORTB ^= 0xFF;
		_delay_ms(500);
	}
}
