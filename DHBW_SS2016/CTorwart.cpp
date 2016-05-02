#include "CTorwart.h"

#include <iostream>

using namespace std;

// Constructor
CTorwart::CTorwart(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer) {
	name = name;
	vorname = vorname;
	alter = alter;
	position = position;
	nummer = nummer;
}

unsigned int CTorwart::GetStrafRaumBeherrschung(){
	return strafRaumBeherrschung;
}

unsigned int CTorwart::GetLinienQualitaet(){
	return linienQualitaet;
}

unsigned int CTorwart::GetAbwehrKommunikation(){
	return abwehrKommunikation;
}

void CTorwart::print() {
	cout << "Strafraumbeherrschung: " << CTorwart::GetStrafRaumBeherrschung;
	cout << "Linienqualität: " << CTorwart::GetLinienQualitaet;
	cout << "Abwehrkommunikation: " << CTorwart::GetAbwehrKommunikation;
}