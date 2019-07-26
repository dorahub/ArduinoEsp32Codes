#include "ledconfig.h"
#include <Arduino.h>

// Initialise Led pins
void ledInit(){
  for(int i=0; i<4 ;i++){
      pinMode(Led[i],OUTPUT);
     }
}

// patterns to blink LEDs

void pattern1(unsigned int loops){
  for(int j=loops;j>0;j--){
  for(int i=0; i<4 ;i++){
    digitalWrite(Led[i],HIGH);
    delay(50);
    digitalWrite(Led[i],LOW);
    delay(50);
    }
  }
}


void pattern2(unsigned int loops){
 for(int j=loops;j>0;j--){
  for(int i=3; i>=0 ;i--){
    digitalWrite(Led[i],HIGH);
    delay(50);
    digitalWrite(Led[i],LOW);
    delay(50);
    }
    --loops;
  }
}
void pattern3(unsigned int loops){
  for(int j=loops;j>0;j--){
    digitalWrite(Led[0],HIGH);
    digitalWrite(Led[2],HIGH);
    delay(50);
    digitalWrite(Led[0],LOW);
    digitalWrite(Led[2],LOW);
    delay(50);
    digitalWrite(Led[1],HIGH);
    digitalWrite(Led[3],HIGH);
    delay(50);
    digitalWrite(Led[1],LOW);
    digitalWrite(Led[3],LOW);
    delay(50);
    --loops;
  }
  }
