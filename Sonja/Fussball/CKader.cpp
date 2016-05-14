#include "Kader.h"
#include "Torwart.h"
#include "FeldSpieler.h"
#include "Trainer.h"
#include <iostream>
using namespace std;

CKader::CKader()
{
	CPerson * pKaderMitglieder = new CPerson;
}

bool CKader::add(CPerson & person)
{
	if (anzKader < maxAnzKader) {
		pKaderMitglieder[anzKader] = &person;
		anzKader++;
		return true;
	}
	else {
		return false;
	}	
}

void CKader::print() const
{
	for (unsigned int x = 0; x <= anzKader - 1; x++) {
		pKaderMitglieder[x]->print();
	}
}
