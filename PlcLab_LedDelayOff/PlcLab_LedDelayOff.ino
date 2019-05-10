  /******************************************************************
  Project name : Plc Lab - LED delay off
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : LED delay switching example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/


#define led1 4

#define button1 A0
long last_millis;
bool button_state;
int interval = 3000;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(button1, INPUT);
}

void loop()
{
    if(digitalRead(button1) && digitalRead(led1) == false)
    {
        button_state = true;
    }    

    if(button_state && digitalRead(button1) == false)
    {
        button_state = false;
        digitalWrite(led1, true);
        last_millis = millis() + interval;
    }

    long current_millis = millis();

    if(current_millis > last_millis)
    {
        digitalWrite(led1, false);
    }
}