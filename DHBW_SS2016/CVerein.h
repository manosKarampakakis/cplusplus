#ifndef CVEREIN_CPP
#define CVEREIN_CPP

#include "CKader.h"
#include "CFuehrung.h"

const unsigned int maxAnzFuehrung = 20;

class CVerein {

private:
	CKader *pMyKader;
	unsigned int anzFuehrung;
	CFuehrung *fuehrungMitglieder[maxAnzFuehrung];

public:
	bool add(const CFuehrung &fuehrung);
	bool add(const CKader &kader);
	void print();
};

#endif