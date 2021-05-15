#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRB = 0xff;

	while(1)
	{
		PORTB = 0x3f;
		_delay_ms(1000);
		PORTB = 0x06;
		_delay_ms(1000);
		PORTB = 0x5b;
		_delay_ms(1000);
		PORTB = 0x4f;
		_delay_ms(1000);
		PORTB = 0x66;
		_delay_ms(1000);
		PORTB = 0x6d;
		_delay_ms(1000);
		PORTB = 0x7d;
		_delay_ms(1000);
		PORTB = 0x07;
		_delay_ms(1000);
		PORTB = 0x7f;
		_delay_ms(1000);
		PORTB = 0x6f;
		_delay_ms(1000);
	}

	return 0;
}
