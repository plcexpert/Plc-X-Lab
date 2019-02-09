
/******************************************************************
  Project name : Plc Lab - LCD Servo Control
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : Lcd and servo motor example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/
#include <LiquidCrystal.h>
#include <Servo.h>

const int rs = 12, en = 11, d4 = 6, d5 = 7, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define servoPin 8
int analogPin = A6;

Servo servo;
int pos = 0;

void setup(){
  Serial.begin(9600);
  servo.attach(servoPin);

  lcd.begin(16, 2);
  lcd.print("PLC LAB LCD");

  lcd.setCursor(0, 1); 
  lcd.print("Angle:");
}

void loop(){
  int analogValue = analogRead(analogPin); 
  int angle = map(analogValue, 0, 1023, 0, 180); 
  servo.write(angle);

  char charBuffer[4];
  snprintf(charBuffer,sizeof(charBuffer), "%03d", angle);
  lcd.setCursor(7, 1);
  lcd.print(charBuffer);

  delay(100);
}
