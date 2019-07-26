#ifndef _LEDCONFIG_H_
#define _LEDCONFIG_H_


//define LED pins

const int Led[]={13,14,26,33};

// Initialise LEDs funcion

void ledInit();
void pattern1(unsigned int);
void pattern2(unsigned int);
void pattern3(unsigned int);

#endif
