#include "Servo.h"

Servo myServo12;
Servo myServo2;
byte val;

void setup() {
  // put your setup code here, to run once:
  myServo12.attach(14);
  myServo12.write(0);

  myServo2.attach(12);
  myServo2.write(0);

  pinMode(D1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  val = digitalRead( D1);
   if( val == HIGH){
      myServo12.write(0);
   }else{
      myServo12.write(90);
   }
  delay(3000);
   val = digitalRead( D1);
   if( val == HIGH){
      myServo2.write(0);
   }else{
      myServo2.write(180);
   }
  delay(3000); 
  
}
