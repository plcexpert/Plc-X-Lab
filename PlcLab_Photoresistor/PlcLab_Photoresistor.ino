/******************************************************************
  Project name : Plc Lab - Photoresistor
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : Photoresistor example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/

int analogPin = A7;

void setup(){
  Serial.begin(9600);
}

void loop(){
  // Read analog value
  int analogValue = analogRead(analogPin);

  Serial.print("Analog Value = ");
  Serial.println(analogValue);
}
