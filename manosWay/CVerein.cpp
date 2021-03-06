/*
 * CVerein.cpp
 *
 *  Created on: May 9, 2016
 *      Author: manos
 */

#include "CVerein.h"
#include "CPerson.h"
#include "CKader.h"
#include "CFuehrung.h"

namespace std {

CVerein::CVerein() {
	// TODO Auto-generated constructor stub

}

CVerein::~CVerein() {
	// TODO Auto-generated destructor stub
}

bool CVerein::add(const CKader &kader){
	pMyKader = &kader;
	return true;
}

bool CVerein::add(const CFuehrung &fuehrung){
	if(anzFuehrung < maxAnzFuehrung) {
		FuehrungsMittglieder[anzFuehrung] = &fuehrung;
		anzFuehrung++;
		return true;
	}
	else {
		return false;
	}	
}

void CVerein::print(){
	pMyKader->print();
	for (int x = anzFuehrung-1; x>=0; x--){
		FuehrungsMittglieder[x]->print();
		cout << "\n---------------------------------------";
	}
}

} /* namespace std */
