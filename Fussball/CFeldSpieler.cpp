#include "FeldSpieler.h"
#include <iostream>
using namespace std;

CFeldSpieler::CFeldSpieler(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer)
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->position = position;
	this->nummer = nummer;
}


void CFeldSpieler::print()
{
	cout << "---------------------------------------------------" << endl;
	cout << "Name:  " << name << ", " << vorname << endl;
	cout << "Alter: " << alter << endl;
	cout << "Position: " << position << " Nummer: " << nummer << endl;
	cout << "StarkerFuss: " << starkerFuss << endl;
	cout << "Ballbeherrschung: " << ballBeherrschung << endl;
	cout << "Schussgenauigkeit: " << schussKraft << endl;
	cout << "Schusskraft: " << schussGenauigkeit << endl;
	cout << "Verteidigung: " << verteidigung << endl;
}

