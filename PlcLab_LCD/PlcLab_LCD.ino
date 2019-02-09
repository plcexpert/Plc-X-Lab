/******************************************************************
  Project name : Plc Lab - LCD display example
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : LCD display example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/

#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 6, d5 = 7, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup(){
  lcd.begin(16, 2);
  lcd.print("PLC LAB LCD");
}

void loop(){  
  lcd.setCursor(0, 1);  
  lcd.print(millis());
  
  delay(500);
}
