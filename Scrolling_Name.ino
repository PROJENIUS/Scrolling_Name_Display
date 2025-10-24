#include <MD_Parola.h>
#include <MD_MAX72XX.h>
#include <SPI.h>

// Define hardware type and pins
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4  // Number of 8x8 matrices

#define DATA_PIN  23
#define CS_PIN    5
#define CLK_PIN   18

// Create Parola object
MD_Parola display = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

void setup() {
  display.begin();
  display.setIntensity(3);        // Brightness (0-15)
  display.displayClear();
  display.displayScroll(" Priyanka Naganandita ", PA_LEFT, PA_SCROLL_LEFT, 100);// here write the name that you need to display
}

void loop() {
  if (display.displayAnimate()) {
    display.displayReset();
  }
}
