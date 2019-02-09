/******************************************************************
  Project name : Plc Lab - Infrared receiver example
  Author       : PLC-EXPERT
  Date Time    : 2019-01-02
  Description  : Infrared receiver example
  CPU BOARD    : Arduino NANO
  URL          : www.plc-expert.com
******************************************************************/

#include <IRremote.h>
const int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup(){
  Serial.begin(9600);

  irrecv.enableIRIn(); 
}

void loop(){
  if (irrecv.decode(&results))
  {
    Serial.print("Received value = ");
    Serial.print(results.value, HEX);

    Serial.print("         Decode type = ");
    if (results.decode_type == NEC) {
      Serial.print("NEC: ");
    } else if (results.decode_type == SONY) {
      Serial.print("SONY: ");
    } else if (results.decode_type == RC5) {
      Serial.print("RC5: ");
    } else if (results.decode_type == RC6) {
      Serial.print("RC6: ");
    } else if (results.decode_type == UNKNOWN) {
      Serial.print("UNKNOWN: ");
    }

    Serial.println();
    
    // Receive the next value
    irrecv.resume();
  } 
}
