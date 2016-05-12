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

bool CKader::add(CPerson &person){
	 pKaderMitglieder[anzKader]= &person;
	 //pKaderMitglieder[anzKader]->print();
	 anzKader++;
	 return true;
}

void CKader::print(){
	for (unsigned int x=0; x <= anzKader-1; x++){
		pKaderMitglieder[x]->print();
		cout << "\n---------------------------------------";
	}
}

} /* namespace std */
