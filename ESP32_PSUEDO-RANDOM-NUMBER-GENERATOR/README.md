# ESP32_PSUEDO-RANDOM-NUMBER-GENERATOR
![alt text](https://github.com/h0nt3d/Microcontroller_BaremetalProgramming/blob/main/ESP32_PSUEDO-RANDOM-NUMBER-GENERATOR/ESP32_PSUEDO-RANDOM-NUMBER-GENERATOR.jpg?raw=true)

# esp-idf Configuration
- Clone the esp-idf framework: <br>
`git clone https://github.com/espressif/esp-idf.git`

- Run the install script: <br>
`./install.sh`

- Run export script: <br>
`. ./export.sh`

## Creating Project
- Using idf.py create project: <br>
`idf.py create-project <project-name>`

- Building Project (Inside Project Directory) <br>
`idf.py build`

- Flashing the Development Board <br>
`idf.py -p /dev/ttyUSB0 flash`

Replace /dev/ttyUSB0 with your corresponding port.


# Pin Layout
![alt text](https://components101.com/sites/default/files/component_pin/7-segment-display-pin-diagr_0.png)

https://components101.com/displays/7-segment-display-pinout-working-datasheet
