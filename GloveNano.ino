// Arduino Nano code to run Tass 3:2 pattern on Nano
// Written by M. Fritz April 2023

#define FINGER_ON_TIME 100
#define FINGER_OFF_TIME 66
#define FRAME_OFF_TIME (8*166)

#define BLINK_LED 13

int Hand[4]={3,5,7,9}; //Pin Dxx Assignments

// Define all 24 Random Sequences
unsigned int Seq[]={/*0x1234,*/0x1243,0x1324,0x1342,0x1423,0x1432,  0x2134,0x2143,0x2314,0x2341,0x2413,0x2431,
       0x3142,0x3124,0x3214,0x3241,0x3412,0x3421,  0x4123,0x4132,0x4213,0x4231,0x4312/*,0x4321*/ };
int nSeq = sizeof(Seq)/sizeof(int);

void setup() {
//Serial.begin(57600); Serial.println("Glove Nano!");   
  randomSeed(analogRead(A0));
  pinMode(BLINK_LED, OUTPUT);//activity Blinking led     
  for(int i=0;i<4;i++){ pinMode(Hand[i], OUTPUT); }
  for(int i=0;i<4;i++){ digitalWrite(Hand[i], LOW); }
}

void loop() {  
 int Pin;

 for(int n=0;n<3;n++){ // Buzz  hand 3 times  
  int Idx = random(0,nSeq); //get random index into Sequence table
//    Serial.print(", "); Serial.print(Idx);
  for(int i=0;i<4;i++){ //Buzz each finger randomly once
    int finger = ((Seq[Idx]>>(12-(i*4)))&0xf)-1;
    Pin = Hand[finger]; //index to get pin
//    Serial.print("["); Serial.print(finger); Serial.print("-P"); Serial.print(Pin); Serial.print("]");    
    digitalWrite(Pin, HIGH);
    delay(FINGER_ON_TIME);
    digitalWrite(Pin, LOW); 
    delay(FINGER_OFF_TIME);              
  }
 } 
//  Serial.print("\n");
  digitalWrite(BLINK_LED, HIGH);
  delay(FRAME_OFF_TIME);
  digitalWrite(BLINK_LED, LOW);  
}

