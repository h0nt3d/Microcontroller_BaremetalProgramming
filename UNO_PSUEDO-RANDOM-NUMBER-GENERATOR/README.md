# randomNumGen


# Avrdude Configuration
Inside Makefile: <br>
`sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyUSB0 -b 115200 -U flash:w:led.hex`

Replace `dev/ttyUSB0` with your corresponding.

# Pin Layout
![alt text](https://components101.com/sites/default/files/component_pin/7-segment-display-pin-diagr_0.png)
https://components101.com/displays/7-segment-display-pinout-working-datasheet
