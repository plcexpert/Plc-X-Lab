
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
int analogPin = A6;

Servo servo;
int pos = 0;

void setup(){
  Serial.begin(9600);
  servo.attach(servoPin);
}

void loop(){
  int analogValue = analogRead(analogPin); 
  int angle = map(analogValue, 0, 1023, 0, 180); 
  servo.write(angle);

  Serial.print("Analog Value = ");
  Serial.print(analogValue);
  Serial.print("     Angle = ");
  Serial.println(angle);

  delay(100);
}
