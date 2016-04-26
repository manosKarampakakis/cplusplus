#pragma once
#include "Person.h"

enum e_position { torwart, abwehr, mittelfeld, sturm };

class CSpieler : public CPerson 
{
protected:
	e_position position;
	unsigned int nummer;

public:
	virtual void print() = 0;			//virtuelle Methode -> abstrakte Klasse
};