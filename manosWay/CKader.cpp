/*
 * CKader.cpp
 *
 *  Created on: May 3, 2016
 *      Author: manos
 */

#include "CKader.h"
#include "CPerson.h"

namespace std {

CKader::CKader() {
	// TODO Auto-generated constructor stub

}

CKader::~CKader() {
	// TODO Auto-generated destructor stub
}

bool CKader::add(const CPerson &person){
	if (anzKader < maxAnzKader) {
	 	pKaderMitglieder[anzKader]= &person;
	 	anzKader++;
	 	return true;
	}
	else {
		return false;
	}
}

void CKader::print(){
	for (unsigned int x=0; x <= anzKader-1; x++){
		pKaderMitglieder[x]->print();
		cout << "\n---------------------------------------";
	}
}

} /* namespace std */
