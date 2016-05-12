#ifndef CSPIELER_CPP
#define CSPIELER_CPP

#include "CPerson.h"
#include "e_position.h"

class CSpieler : public CPerson{

protected:
	e_position position;
	unsigned int nummer;

public:
	e_position GetPosition();
	unsigned int GetNummer();
	virtual void print() const;
};

#endif