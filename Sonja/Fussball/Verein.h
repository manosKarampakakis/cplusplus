#pragma once
#include "Person.h"
#include "Kader.h"
#include "Fuehrung.h"

const unsigned int maxAnzFuehrung = 20;

class CVerein 
{
private:
	CKader* pMyKader;
	CFuehrung* fuehrungMitglieder[maxAnzFuehrung];
	unsigned int anzFuehrung = 0;

public:
	bool add(CFuehrung & fuehrung);
	bool add(CKader & kader);
	void print() const;
};