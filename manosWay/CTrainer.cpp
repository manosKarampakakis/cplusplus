/*
 * CTrainer.cpp
 *
 *  Created on: May 2, 2016
 *      Author: manos
 */

#include "CTrainer.h"

namespace std{

CTrainer::CTrainer(string nname, string vname, unsigned int alt) {
	// TODO Auto-generated constructor stub
	name = nname;
	vorname = vname;
	alter = alt;
}

CTrainer::~CTrainer() {
	// TODO Auto-generated destructor stub
}

void CTrainer::print(){
	cout << "\nName: " << name << "\nVorname: "<< vorname <<"\nAlter: "<<alter << "\nLizenzstyffe: "<< lizenzStufe;
}
}

