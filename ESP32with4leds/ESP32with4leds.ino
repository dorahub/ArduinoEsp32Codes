#include "ledconfig.h"

void setup() {
  // put your setup code here, to run once:
   ledInit();
   Serial.begin(9600);
   Serial.println("ENTER PATTERn NUMBER 1 2 or 3");
}

void loop() {
  // put your main code here, to run repeatedly:
  static int pattern;
 if(Serial.available()>0) {
  pattern = Serial.read();
   }
  switch(pattern){
  
  case '1': pattern1(5);
          break;
  case '2': pattern2(5);
          break;
  case '3': pattern3(5);
          break;
  default: Serial.println("Enter valid Pattern Numeber");
          break;
  }
 
}
