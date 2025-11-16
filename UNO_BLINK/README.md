# In-built LED


# Avrdude Configuration
Inside Makefile: <br>
`sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyUSB0 -b 115200 -U flash:w:led.hex`

Replace `dev/ttyUSB0` with your corresponding.
