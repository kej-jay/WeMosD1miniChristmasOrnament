#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

#define PIN            D4 //Pin on which the data will be sent
#define NUMPIXELS      12 //Amount of LEDs on the strip

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500;

void setup() {            //will run once at the boot of the chip
  pixels.begin();
  pixels.setBrightness(50);
}

void loop() {             //this loop will run as long as the chip is powered on
  for(int i=0;i<NUMPIXELS;i++){
    changeColor(i, 234, 10, 142); //params are: the pixel you want to adress; the RGB code of the color seperated by comma
  }
}

void changeColor(int pixel, int color1, int color2, int color3) {
  pixels.setPixelColor(pixel, pixels.Color(color1,color2,color3)); 
  pixels.show(); // Updates the color
  }
