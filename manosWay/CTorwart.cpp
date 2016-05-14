/*
 * CTorwart.cpp
 *
 *  Created on: May 2, 2016
 *      Author: manos
 */

#include "CTorwart.h"
#include "position.h"

namespace std {

CTorwart::CTorwart(string nname, string vname, unsigned int alt, unsigned int num) {
	position = torwart;
	name = nname;
	vorname = vname;
	alter = alt;
	nummer = num;
}

CTorwart::~CTorwart() {
	// TODO Auto-generated destructor stub
}
void CTorwart::print(){
	cout << "\nName: " << name << "\nVorname: "<< vorname <<"\nAlter: "<<alter << "\nNummer: "<< nummer <<"\nPosition: "<< torwart
			<<"\nStrafRaumBeherrschung: "<<strafRaumBeherrschung<<"\nlinieneQuallitaet: "
			<<linieneQuallitaet<<"\nabwehrKommunikation: "<<abwehrKommunikation;
}

} /* namespace std */
