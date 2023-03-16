/*
Sketch to read and display level of vibration from an analog vibration sensor
code adapted from www.learnrobotics.com
0.1   2023-02-08   T.K. Cahall
*/


int ldr = A0;

void setup(){
    pinMode(ldr, INPUT); //initialize ldr sensor as INPUT
    Serial.begin(9600); //begin the serial monitor at 9600 baud
}

void loop(){
    int data=analogRead(ldr);
    if (data>75) {
    Serial.print("ldr reading=");
    Serial.println(data);
    }
    delay(10);
}
