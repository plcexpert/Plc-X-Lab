/******************************************************************
  Project name : Plc Lab - Buttons
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : Buttons example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/

#define led1 4
#define led2 5
#define led3 6
#define led4 7

#define button1 A0
#define button2 A1
#define button3 A2
#define button4 A3

#define pause 200

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);  
}

void loop(){  
  digitalWrite(led1, ButtonState(button1));
  digitalWrite(led2, ButtonState(button2));
  digitalWrite(led3, ButtonState(button3));
  digitalWrite(led4, ButtonState(button4));

  delay(20);
}

bool ButtonState(int button){
  return digitalRead(button);
}
