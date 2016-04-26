#pragma once
#include "Person.h"

const unsigned int maxAnzKader = 50;

class CKader
{
private:
	unsigned int anzKader;
	CPerson* pKaderMitgleider[maxAnzKader];

public:
	CKader();
	bool add(const CPerson & arg);
	void print();
};