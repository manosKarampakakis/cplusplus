#pragma once
#include "Person.h"
#include "EPosition.h"

class CSpieler : public CPerson 
{
protected:
	e_position position;
	unsigned int nummer;

public:
	virtual void print() const;
};