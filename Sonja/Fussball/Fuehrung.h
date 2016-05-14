#pragma once
#include "Person.h"
#include "EAufgabe.h"
using namespace std;

class CFuehrung : public CPerson 
{
private:
	e_aufgabe aufgabe;

public:
	void print() const;
	CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe);
};

