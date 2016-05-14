#include "Verein.h"
#include "Kader.h"
#include <iostream>
using namespace std;

bool CVerein::add(CFuehrung &fuehrung)
{
	if(anzFuehrung < maxAnzFuehrung) {
		fuehrungMitglieder[anzFuehrung] = &fuehrung;
		anzFuehrung++;
		return true;
	}
	else {
		return false;
	}	
}

bool CVerein::add(CKader &kader)
{
		pMyKader = &kader;
		return true;
}

void CVerein::print() const
{
	pMyKader->print();
	for (int x = anzFuehrung - 1; x >= 0; x--) {
		fuehrungMitglieder[x]->print();
	}
}