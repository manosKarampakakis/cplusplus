#pragma once
#include "Person.h"
using namespace std;

enum e_aufgabe { praesident, vorstand, sportdirektor };

class CFuehrung : public CPerson 
{
private:
	e_aufgabe aufgabe;

public:
	void print();
	CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe);
};

