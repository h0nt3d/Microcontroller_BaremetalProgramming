default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o randomNumGen.o randomNumGen.c
	avr-gcc -o randomNumGen.bin randomNumGen.o
	avr-objcopy -O ihex -R .eeprom randomNumGen.bin randomNumGen.hex
	sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyUSB0 -b 115200 -U flash:w:randomNumGen.hex
