#pragma once

#include "Person.h"
#include <string>
using namespace std;

class CTrainer : public CPerson 
{
private:
	unsigned int lizenzStufe = 0;

public:
	void print() const;
	CTrainer(string name, string vorname, unsigned int alter);
	void setLizenzStufe(int lizenzStufe);
	int getLizenzStufe();
};
