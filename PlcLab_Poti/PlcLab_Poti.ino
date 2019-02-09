/******************************************************************
  Project name : Plc Lab - Potentiometer
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : Potentiometer example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/

int analogPin = A6;

void setup(){
  Serial.begin(9600);
}

void loop(){
  // Read analog value
  int analogValue = analogRead(analogPin);

  Serial.print("Analog Value = ");
  Serial.print(analogValue);

  // Percentage
  int percentValue = (analogValue)*100L/(1023);
  
  Serial.print("       Analog percentage = ");
  Serial.println(percentValue);
  
}
