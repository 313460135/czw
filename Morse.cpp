#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(250);
	digitalWrite(_pin,LOW);
	delay(250);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(1000);
	digitalWrite(_pin,LOW);
	delay(250);
}

void Morse::a_space()
{
  digitalWrite(_pin,LOW);
  delay(1000);
}

void Morse::b_space()
{ digitalWrite(_pin,HIGH);
  delay(100);
  digitalWrite(_pin,LOW);
  delay(100);
 digitalWrite(_pin,HIGH);
  delay(100);
  digitalWrite(_pin,LOW);
  delay(100);
 digitalWrite(_pin,HIGH);
  delay(100);
  digitalWrite(_pin,LOW);
  delay(100);
}
