#include "CKader.h"

#include <iostream>

using namespace std;

//Constructor
CKader::CKader() {
	CPerson * pKaderMitglieder = new CPerson;
}

bool CKader::add(const CPerson &person) {
	CPerson pKaderMitglieder = person;
	return true;
}

void CKader::print() {
	for (CPerson *p : pKaderMitglieder){
		p->print();
	}
}