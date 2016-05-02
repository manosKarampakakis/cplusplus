#include "CFeldspieler.h"

#include <iostream>

using namespace std;

// Constructor
CFeldSpieler::CFeldSpieler(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer) {
	name = name;
	vorname = vorname;
	alter = alter;
	position = position;
	nummer = nummer;
}

e_starkerFuss CFeldSpieler::GetStarkerFuss(){
	return starkerFuss;
}

unsigned int CFeldSpieler::GetVerteidigung(){
	return verteidigung;
}

unsigned int CFeldSpieler::GetBallbeherrschung(){
	return ballBeherrschung;
}

unsigned int CFeldSpieler::GetSchussKraft(){
	return schussKraft;
}

unsigned int CFeldSpieler::GetSchussgenauigkeit(){
	return schussGenauigkeit;
}

void CFeldSpieler::print() {
	cout << "StarkerFuss: " << CFeldSpieler::GetStarkerFuss;
	cout << "verteidigung: " << CFeldSpieler::GetVerteidigung;
	cout << "ballBeherrschung: " << CFeldSpieler::GetBallbeherrschung;
	cout << "schussKraft: " << CFeldSpieler::GetSchussKraft;
	cout << "schussGenauigkeit: " << CFeldSpieler::GetSchussgenauigkeit;
}