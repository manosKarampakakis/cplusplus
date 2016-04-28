#include "Verein.h"

bool CVerein::add(const CFuehrung & arg)
{
	if(anzFuehrung < maxAnzFuehrung) {
		//this->CVerein = CFuehrung; 
		anzFuehrung++;
		return true;
	}
	else {
		return false;
	}	
}

bool CVerein::add(const CKader & arg)
{
	//this->CVerein = CKader;
	return true;
}

void CVerein::print()
{
	// Diese Funktion wird von Main aufgerufen
	//CKader:print();
	//CFuehrung:print();
}