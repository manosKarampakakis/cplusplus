/*
 * CFuehrung.cpp
 *
 *  Created on: May 2, 2016
 *      Author: manos
 */

#include "CFuehrung.h"

namespace std{

CFuehrung::CFuehrung(string nname, string vname, unsigned int alt, e_aufgaben aufg) {
	// TODO Auto-generated constructor stub
	name = nname;
	vorname = vname;
	alter = alt;
	aufgabe = aufg;
}

void CFuehrung::print(){
	cout << "\nName: " << name << "\nVorname: "<< vorname <<"\nAlter: "<<alter << "\nAufgabe: "<< aufgabe;
}
}
