#pragma once
#include "Person.h"
#include "Kader.h"
#include "Fuehrung.h"

const unsigned int maxAnzFuehrung = 20;

class CVerein 
{
private:
	CKader* pMyKader;
	unsigned int anzFuehrung = 0;
	CFuehrung* fuehrungMitgleider[maxAnzFuehrung];

public:
	bool add(const CFuehrung & arg);
	bool add(const CKader & arg);
	void print();
};