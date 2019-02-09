/******************************************************************
  Project name : Plc Lab - Infrared sender
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : Infrared sender example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/
#include <IRremote.h>
IRsend irsend;

void setup(){
}

void loop(){
  irsend.sendNEC(0xFFA25D, 32);
  delay(1000);
}
