#include <Arduino.h>

#define SECONDS(x) x * 1000

//0 - 5 pines que tiene la placa DigiPark
// 3 y 4 son para USB
//los pines se llaman PINx
const int red = PIN0;
const int yellow = PIN1;
const int green = PIN2;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
}

void loop()
{
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  delay(SECONDS(10));
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  delay(SECONDS(2));
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(SECONDS(10));
}