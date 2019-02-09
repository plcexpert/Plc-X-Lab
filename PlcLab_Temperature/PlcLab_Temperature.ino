/******************************************************************
  Project name : Plc Lab - Temperature
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : Temperature sensor example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/

#include <Wire.h>
#include <LM75.h>

LM75 sensor;

void setup()
{
  Wire.begin();
  Serial.begin(9600);
}

void loop()
{
  // Read sensor value
  Serial.print("Temperature = ");
  Serial.print(sensor.temp());
  Serial.println(" C");
  delay(2000);
}
