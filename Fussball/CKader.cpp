#include "Kader.h"
#include "Torwart.h"
#include "FeldSpieler.h"

CKader::CKader()
{
	CTorwart;
	CFeldSpieler;
}

bool CKader::add(const CPerson & arg)
{

	return false;
}

void CKader::print()
{
	CTorwart:print();
	CFeldSpieler:print();

}
