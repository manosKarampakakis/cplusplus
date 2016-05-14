/*
 * CFeldSpieler.cpp
 *
 *  Created on: May 2, 2016
 *      Author: manos
 */

#include "CFeldSpieler.h"
#include "starkerfuss.h"

namespace std {

CFeldSpieler::CFeldSpieler(string nname, string vname, unsigned int alt, e_position pos, unsigned int num) {
	// TODO Auto-generated constructor stub
	name = nname;
	vorname = vname;
	alter = alt;
	position = pos;
	nummer = num;

}

CFeldSpieler::~CFeldSpieler() {
	// TODO Auto-generated destructor stub
}

void CFeldSpieler::print(){
	cout << "\nName: " << name << "\nVorname: "<< vorname <<"\nAlter: "<<alter << "\nNummer: "<< nummer <<"\nPosition: "<< position
			<<"\nverteidigung: "<<verteidigung<<"\nballBeherrschung: "
			<<ballBeherrschung<<"\nschussKraft: "<<schussKraft<<"\nschussGenauigkeit: "<<schussKraft;
}

} /* namespace std */
