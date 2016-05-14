#include "CVerein.h"

#include <iostream>

using namespace std;

bool CVerein::add(const CFuehrung &fuehrung) {
	CFuehrung fuehrungMitglieder = fuehrung;
	return true;
}

bool CVerein::add(const CKader &kader) {
	CKader MyKader = kader;
	pMyKader = &MyKader;
	return true;
}

void CVerein::print() {
	cout << "---------------------- - " << endl;
	for (CFuehrung *f : fuehrungMitglieder){
		f->print();
	}
	cout << "*****************" << endl;
	pMyKader->print();
}

