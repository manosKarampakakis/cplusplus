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

void CFeldSpieler::setStarkerFuss(e_starkerFuss starkerFuss)
{
	this->starkerFuss = starkerFuss;
}
e_starkerFuss CFeldSpieler::getStarkerFuss()
{
	return starkerFuss;
}
void CFeldSpieler::setVerteidigung(int verteidigung)
{
	this->verteidigung = verteidigung;
}
int CFeldSpieler::getVerteidigung()
{
	return verteidigung;
}
void CFeldSpieler::setBallBeherrschung(int ballBeherrschung)
{
	this->ballBeherrschung = ballBeherrschung;
}
int CFeldSpieler::getBallBeherrschung()
{
	return ballBeherrschung;
}
void CFeldSpieler::setSchussKraft(int schussKraft)
{
	this->schussKraft = schussKraft;
}
int CFeldSpieler::getSchussKraft()
{
	return schussKraft;
}
void CFeldSpieler::setSchussGenauigkeit(int schussGenauigkeit)
{
	this->schussGenauigkeit = schussGenauigkeit;
}
int CFeldSpieler::getSchussGenauigkeit()
{
	return schussGenauigkeit;
}

