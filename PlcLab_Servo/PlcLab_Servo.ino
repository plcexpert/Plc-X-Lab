
/******************************************************************
  Project name : Plc Lab - Servo
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : servo motor example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/

#include <Servo.h>
#define servoPin 8

Servo servo;
int pos = 0;

void setup(){
  servo.attach(servoPin);
}

void loop(){
  for (pos = 0; pos <= 180; pos++) {    
    servo.write(pos);
    delay(15);
  }
  for (pos = 180; pos >= 0; pos--) {
    servo.write(pos);
    delay(15);
  }
}
