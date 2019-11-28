# WeMosD1miniChristmasOrnament
A complete guide on how to prepare, solder, code and have fun with a self made christmas ornament.

# Soldering the ornament
When soldering we are using a very basic circuit. We wire the red cable from the batterie case to the 5V Part of the LED strip and also attach a wire from the WeMos 5v Port to the same spot on the LED strip.
Next step is connecting the Ground (G) port of the WeMos to the ground of the strip and again to the black cable of the batterie case.
Finally we will solder the data port of the strip to the D4 pin on the WeMos using a wire.

# Getting started with the code
## Install the Driver
I included the current driver for windows within this repository. You can install it right out of the box. If you prefer to load it from the official wemos site, or simply want a newer version (or one for OSX), please follow [this link](https://wiki.wemos.cc/downloads).

## Installing the board in the Arduino IDE
The following [intro](https://github.com/esp8266/Arduino#installing-with-boards-manager) is copied from the [ESP8266 Arduino github Repo](https://github.com/esp8266/Arduino).

### Installing with Boards Manager
1. Install the current upstream Arduino IDE at the 1.8.7 level or later. The current version is on the Arduino website.
2. Start Arduino and open the Preferences window.
3. Enter https://arduino.esp8266.com/stable/package_esp8266com_index.json into the Additional Board Manager URLs field. You can add multiple URLs, separating them with commas.
4. Open Boards Manager from Tools > Board menu and install esp8266 platform (and don't forget to select your ESP8266 board from Tools > Board menu after installation).

## Installing the necessary libraries
Go to "tools > library manager" and install the "Adafruit NeoPixel by Adafruit".
Additionally you can install the "Adafruit ESP8266 by Adafruit" library for example code for the chip.

## Start coding
### Example code
I have included examples of code which you can use in your own code. 
To adress your LED strip, you will have to send a digital signal to the data port of the strip. You can adress each LED individually with a RGB code which consists of three numbers. you can look those color codes up online.

### Color code examples
Telekom Magenta: hex(EA0A8E) bzw. rgb(234, 10, 142)

# Helpful links (maybe)
https://www.youtube.com/watch?v=QnWZdxMytaA
https://github.com/jasoncoon/esp8266-fastled-webserver

# Things to look out for
- Check if you have selected the right COM-port under tools > ports
- Select the LOLIN(WEMOS) D1 R2 & mini from the board menu