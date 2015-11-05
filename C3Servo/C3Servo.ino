#include <Servo.h>
#define Servo_pin 5
Servo MotorPosition;
void setup() {
  // put your setup code here, to run once:
 MotorPosition.attach(Servo_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  //tell servo to go to random position
  MotorPosition.write(random(0,180)); 
  delay(1000);                       // waits 1 s 
}
