#include "stdafx.h"
#include "CTorwart.h"

#include <iostream>

using namespace std;

// Constructor
CTorwart::CTorwart(string name, string vorname, unsigned int alter, 
	e_position position, unsigned int nummer) {
		this->name = name;
		this->vorname = vorname;
		this->alter = alter;
		this->position = position;
		this->nummer = nummer;
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

void print() {
	cout << "Strafraumbeherrschung: " << CTorwart::GetStrafRaumBeherrschung;
	cout << "Linienqualität: " << CTorwart::GetLinienQualitaet;
	cout << "Abwehrkommunikation: " << CTorwart::GetAbwehrKommunikation;
}