/******************************************************************
  Project name : Plc Lab - LED
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : Led diodes example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/

#define led1 4
#define led2 5
#define led3 6
#define led4 7
#define pause 200

bool ledState = true;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);  
}

void loop(){  
  digitalWrite(led1, ledState);
  delay(pause);
  digitalWrite(led2, ledState);
  delay(pause);
  digitalWrite(led3, ledState);
  delay(pause);
  digitalWrite(led4, ledState);
  delay(pause);
  
  ledState = !ledState;
}
