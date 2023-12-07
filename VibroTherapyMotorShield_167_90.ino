// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!
// updated for PD Vibrotherapy stimulation pattern
// 2023-01-25

#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

int timer = 167;           // The higher the number, the slower the timing.
int ledPins[] = { 3, 2, 4, 1, 1, 2, 4, 3, 2, 4, 3, 1, 13, 13, 13, 13, 13, 13, 13, 13, 2, 4, 3, 1, 2, 1, 3, 4, 1, 3, 4, 2 };
// an array of pin numbers to which LEDs are attached Pin 13 is a pause
int pinCount = 32;           // the number of pins (i.e. the length of the array)


void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");
  pinMode(13, OUTPUT);

  // turn on motor
  motor1.setSpeed(230);
 
  motor1.run(RELEASE);
  motor2.setSpeed(230);
 
  motor2.run(RELEASE);
  motor3.setSpeed(230);
 
  motor3.run(RELEASE);
  motor4.setSpeed(230);
 
  motor4.run(RELEASE);
}

void loop() {
for (int thisPin = 0; thisPin < pinCount; thisPin++) {

  switch (ledPins[thisPin]) { 
    case 1:
     motor1.run(FORWARD);
      motor1.setSpeed(230);  
      delay(timer);
      motor1.run(RELEASE);
      break;
    case 2:
      motor2.run(FORWARD);
      motor2.setSpeed(230);  
      delay(timer);
      motor2.run(RELEASE);
      break;
    case 3:
      motor3.run(FORWARD);
      motor3.setSpeed(230);  
      delay(timer);
      motor3.run(RELEASE);
      break;
    case 4:
      motor4.run(FORWARD);
      motor4.setSpeed(230);  
      delay(timer);
      motor4.run(RELEASE);
      break;
    case 13:
      digitalWrite(13, HIGH);
      delay(timer);
      digitalWrite(13, LOW);
      break;
  }
}
}