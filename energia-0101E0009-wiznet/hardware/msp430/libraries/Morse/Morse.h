
#ifndef Morse_h
#define Morse_h

#include "Energia.h"

class Morse
{
public:
	Morse(int pin);
	void dot();
	void dash();
private:
	int _pin;
};

#endif
