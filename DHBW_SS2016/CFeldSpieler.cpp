#include "stdafx.h"
#include "CFeldspieler.h"

#include <iostream>

using namespace std;

// Constructor
CFeldSpieler::CFeldSpieler(string name, string vorname, unsigned int alter, 
	e_position position, unsigned int nummer)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->position = position;
	this->nummer = nummer;
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