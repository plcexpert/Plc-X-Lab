/******************************************************************
  Project name : Plc Lab - Piezo
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : Piezo speaker example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/

int piezoPin = 10;

void setup(){
}

void loop(){  
  tone(piezoPin, 1000, 500);  
  delay(2000);
}
