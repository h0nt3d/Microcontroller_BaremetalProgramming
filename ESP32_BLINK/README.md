# In-built LED
![alt text](https://github.com/h0nt3d/Microcontroller_BaremetalProgramming/blob/main/ESP32_BLINK/ESP32_BLINK.jpg?raw=true)

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
