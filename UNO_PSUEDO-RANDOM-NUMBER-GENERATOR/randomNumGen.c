/*
Pins 2, 3, 4, 5, 6, 7, 8 are Output | https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf
Common-Anode 2 - a | 3 - b | 4 - c | 5 - d | 6 - e | 7 - f | 8 - g | https://www.xlitx.com/datasheet/5161BS.pdf
*/

#include <avr/io.h>
#include <util/delay.h>
#include <time.h>

void main ()
{
	// Set Output Pins
	DDRD = DDRD | (1 << 2) | 
		(1 << 3) | (1 << 4) | 
		(1 << 5) | (1 << 6) |
		(1 << 7) | (1 << 8);
	DDRB = DDRB | (1 << 0);

	uint8_t lfsr = 0xAA;
	uint8_t bit;
	char num = 0;

	while (1) {
		PORTD = 0xFF;
		PORTB = 0x1;

		bit = ((lfsr >> 7) ^ (lfsr >> 5)) & 1;
		lfsr = (lfsr << 1) | bit;
		
		num = lfsr % 10;
		
		if (num == 0) {
			PORTD = (uint8_t) ~((1 << 2) | (1 << 3) | (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7));
		}
		else if (num == 1) {
			PORTD = (uint8_t) ~((1 << 3) | (1 << 4)); 
		}
		else if (num == 2) {
			PORTD = (uint8_t) ~((1 << 2) | (1 << 3) | (1 << 6) | (1 << 5));
			PORTB = (uint8_t) ~(1 << 0);
		}
		else if (num == 3) {
			PORTD = (uint8_t) ~((1 << 2) | (1 << 3) | (1 << 4) | (1 << 5));
			PORTB = (uint8_t) ~(1 << 0);
		}
		else if (num == 4) {
			PORTD = (uint8_t) ~((1 << 7) | (1 << 3) | (1 << 4));
			PORTB = (uint8_t) ~(1 << 0);
		}
		else if (num == 5) {
			PORTD = (uint8_t) ~((1 << 2) | (1 << 7) | (1 << 4)| (1 << 5));
			PORTB = (uint8_t) ~(1 << 0);
		}
		else if (num == 6) {
			PORTD = (uint8_t) ~((1 << 2) | (1 << 7) | (1 << 6) | (1 << 5) | (1 << 4));
			PORTB = (uint8_t) ~(1 << 0);
		}
		else if (num == 7) {
			PORTD = (uint8_t) ~((1 << 2) | (1 << 3) | (1 << 4));
		}
		else if (num == 8) {
			PORTD = (uint8_t) ~((1 << 2) | (1 << 3) | (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7));
			PORTB = (uint8_t) ~(1 << 0);
		}
		else if (num == 9) {
			PORTD = (uint8_t) ~((1 << 2) | (1 << 3) | (1 << 4) | (1 << 5) | (1 << 7));
			PORTB = (uint8_t) ~(1 << 0);
		}
		_delay_ms(1000);
		PORTD = 0xFF;
		PORTB = 0x1;
	
	}
}
