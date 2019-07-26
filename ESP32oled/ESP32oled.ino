
#include "SSD1306Wire.h" // 

//data pin 21
//clock pin 22

SSD1306Wire  display(0x3c, 21, 22);

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println();

  // Initialising the UI will init the display too.
  display.init();

  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);

}

void displayText() {
    // Font Demo1
    // create more fonts at http://oleddisplay.squix.ch/
    display.setFont(ArialMT_Plain_24);
    display.drawString(0, 26, "  ESP32");
}

void loop() {
  // clear the display
  display.clear();
  displayText();
  display.display();
  delay(1000);
}
