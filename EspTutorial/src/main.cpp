#include "Arduino.h"
#define LED_BUILTIN 2

void setup()
{
  Serial.begin(115200);
  delay(500);
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("ON");
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("OFF");
  // wait for a second
  delay(1000);
}