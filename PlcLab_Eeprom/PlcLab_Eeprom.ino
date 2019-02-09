/******************************************************************
  Project name : Plc Lab - EEPROM
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : Eeprom example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/

#include <Wire.h>    
 
#define eeprom 0x50    //EEPROM Address

void setup(void)
{  
  Serial.begin(9600);

  Wire.begin();  

  // Write random byte to eeprom 
  byte randNumber = random(9,255);
  Serial.print("Write to eeprom = ");
  Serial.println(randNumber);
  writeEEPROM(eeprom, 0, randNumber);

  // read from eeprom
  Serial.print("Read from eeprom = ");
  Serial.println(readEEPROM(eeprom, 0), DEC);
}
 
void loop()
{
}
 
void writeEEPROM(int deviceAddress, unsigned int memoryAddress, byte data){
  Wire.beginTransmission(deviceAddress);
  Wire.write((int)(memoryAddress >> 8));   // MSB
  Wire.write((int)(memoryAddress & 0xFF)); // LSB
  Wire.write(data);
  Wire.endTransmission();
 
  delay(5);
}
 
byte readEEPROM(int deviceAddress, unsigned int memoryAddress ){
  byte rdata = 0xFF;
 
  Wire.beginTransmission(deviceAddress);
  Wire.write((int)(memoryAddress >> 8));   // MSB
  Wire.write((int)(memoryAddress & 0xFF)); // LSB
  Wire.endTransmission();
 
  Wire.requestFrom(deviceAddress,1);
 
  if (Wire.available()) rdata = Wire.read();
 
  return rdata;
}
