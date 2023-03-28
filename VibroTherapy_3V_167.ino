/*
  Vibrotherapy sketch to drive 4 finger motors according to pattern from Coordinated Reset Vibrotacti
Stimulation article by Peter A. Tass et. al April, 2021

  Arrays

  created 2006

  by David A. Mellis

  modified 30 Aug 2011

  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cchttps://www.arduino.cc/en/Tutorial/Array

*/

int timer = 167;           // The higher the number, the slower the timing.
int ledPins[] = { 7, 5, 9, 3, 3, 5, 9, 7, 5, 9, 7, 3, 13, 13, 13, 13, 13, 13, 13, 13, 5, 9, 7, 3, 5, 3, 7, 9, 3, 7, 9, 5 };
// an array of pin numbers to which LEDs are attached Pin 13 is a pause
int pinCount = 32;           // the number of pins (i.e. the length of the array)

void setup() {

  // the array elements are numbered from 0 to (pinCount - 1).

  // use a for loop to initialize each pin as an output:

  for (int thisPin = 0; thisPin < pinCount; thisPin++) {

    pinMode(ledPins[thisPin], OUTPUT);

  }
}

void loop() {

  // loop from the lowest pin to the highest:

  for (int thisPin = 0; thisPin < pinCount; thisPin++) {

    // turn the pin off - motor on: assumes npn transistor

    digitalWrite(ledPins[thisPin], HIGH);

    delay(timer);

    // turn the pin on - motor off:

    digitalWrite(ledPins[thisPin], LOW);
  }

}
