/******************************************************************
  Project name : Plc Lab - Piezo control
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : Piezo speaker control example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/

int piezoPin = 10;
int analogPin = A6;

void setup(){
}

void loop(){
  int analogValue = analogRead(analogPin); 
  int freq = map(analogValue, 0, 1023, 100, 10000);
  
  tone(piezoPin, freq, 500);  
  delay(1000);
}
