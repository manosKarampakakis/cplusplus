#include "Kader.h"
#include "Torwart.h"
#include "FeldSpieler.h"
#include "Trainer.h"

CKader::CKader()
{
	//Konstruktor
}

bool CKader::add(const CPerson & arg)
{
	if (anzKader < maxAnzKader) {
		//this->CKader = CPerson;
		anzKader++;
		return true;
	}
	else {
		return false;
	}	
}

void CKader::print()
{
	
}
