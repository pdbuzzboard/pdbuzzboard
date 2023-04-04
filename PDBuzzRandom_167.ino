/* written by M.Fritz March 2023*/
#include <AFMotor.h>

#define FINGER_ON_TIME 167
#define FINGER_OFF_TIME 66
#define FRAME_OFF_TIME (8*166)

AF_DCMotor *pMotor[4];

void randFinger(int *F){ //Generate a 4 finger random sequence
  F[0]=0;F[1]=1; F[2]=2; F[3]=3;
  int i,j,t;
  for(i=0;i<4;i++){
    t = F[i];
  j = random(0,4); // 0-3
    F[i]=F[j];
    F[j]=t;
  }
}

void setup() {
  int i=0;
  Serial.begin(9600);
  Serial.println("Motor test!");
  randomSeed(analogRead(A0));  
  pinMode(13, OUTPUT);
    
  while(i<4){
    pMotor[i]= new AF_DCMotor(i+1);
    pMotor[i]->setSpeed(200);
    pMotor[i]->run(RELEASE);
    i++; 
  }
}

void loop() {
  int Finger[12]; 
  AF_DCMotor *pM;
  
  randFinger(Finger); randFinger(Finger+4); randFinger(Finger+8);   //Set random order for 3 sets of 4 fingers into the Finger array
  //Serial.printf("%d%d%d%d-%d%d%d%d-%d%d%d%d\n",Finger[0]+1,Finger[1]+1,Finger[2]+1,Finger[3]+1,Finger[4]+1,Finger[5]+1,Finger[6]+1,Finger[7]+1,Finger[8]+1,Finger[9]+1,Finger[10]+1,Finger[11]+1);
  for(int i=0;i<12;i++){
    pM = pMotor[Finger[i]];
    pM->run(FORWARD);
    pM->setSpeed(255);
    delay(FINGER_ON_TIME);
    pM->run(RELEASE);      
    delay(FINGER_OFF_TIME);
  }
  digitalWrite(13, HIGH);
  delay(FRAME_OFF_TIME);
  digitalWrite(13, LOW);     
}
