#include "Torwart.h"
#include <iostream>
using namespace std;

CTorwart::CTorwart(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->position = position;
	this->nummer = nummer;
}

void CTorwart::print()
{
	cout << "---------------------------------------------------" << endl;
	cout << "Name:  " << name << ", " << vorname << endl;
	cout << "Alter: " << alter << endl;
	cout << "Position: " << position << " Nummer: " << nummer << endl;
	cout << "Kommunikation mit der Abwehr: " << strafRaumBeherrschung << endl;
	cout << "Qualitaet auf der Linie: " << linienQualitaet << endl;
	cout << "Beherrschung des Strafraums: " << abwehrKommunikation << endl;
}