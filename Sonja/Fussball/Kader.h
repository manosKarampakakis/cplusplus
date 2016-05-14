#pragma once
#include "Person.h"

const unsigned int maxAnzKader = 50;

class CKader
{
private:
	unsigned int anzKader = 0;
	CPerson* pKaderMitglieder[maxAnzKader];

public:
	CKader();
	bool add(CPerson & person);
	void print() const;
};