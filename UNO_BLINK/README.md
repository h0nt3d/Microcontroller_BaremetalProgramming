# In-built LED
![alt text](https://github.com/h0nt3d/Microcontroller_BaremetalProgramming/blob/main/UNO_BLINK/Pinout-UNOrev3_latest.png?raw=true)

# Avrdude Configuration
Inside Makefile: <br>
`sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyUSB0 -b 115200 -U flash:w:led.hex`

Replace `dev/ttyUSB0` with your corresponding.
