

/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
#include "Morse.h"

Morse morse(14);

void setup() {                
  // initialize the digital pin as an output.
  // Pin 14 has an LED connected on most Arduino boards:
//  pinMode(RED_LED, OUTPUT);     
}

void loop() {
//  digitalWrite(RED_LED, HIGH);   // set the LED on
//  delay(1000);              // wait for a second
//  digitalWrite(RED_LED, LOW);    // set the LED off
//  delay(1000);              // wait for a second
  morse.dot(); morse.dot(); morse.dot();
  morse.dash(); morse.dash(); morse.dash();
  morse.dot(); morse.dot(); morse.dot();
  delay(3000);  
}
