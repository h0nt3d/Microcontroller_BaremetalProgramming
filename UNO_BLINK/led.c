#include <avr/io.h>
#include <util/delay.h>


void blink()
{
	//set PORTB5 as an output
	DDRB = DDRB | (1 << DDB5);

	//forever...
	while (1) {
		//set PORTB5
		PORTB = PORTB | (1 << PORTB5);
		_delay_ms(100);
		PORTB = PORTB & ~(1 << PORTB5);
		_delay_ms(100);

	}
	

}


int main (void)
{
	blink();
}
