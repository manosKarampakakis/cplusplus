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

void CTorwart::print() const
{
	CPerson::print();
	CSpieler::print();
	cout << "Kommunikation mit der Abwehr: " << abwehrKommunikation << endl;
	cout << "Qualitaet auf der Linie: " << linienQualitaet << endl;
	cout << "Beherrschung des Strafraums: " << strafRaumBeherrschung << endl;
}

void CTorwart::setStrafRaumBeherrschung(int strafRaumBeherrschung)
{
	this->strafRaumBeherrschung = strafRaumBeherrschung;
}
int CTorwart::getStrafRaumBeherrschung()
{
	return strafRaumBeherrschung;
}
void CTorwart::setLinienQualitaet(int linienQualitaet)
{
	this->linienQualitaet = linienQualitaet;
}
int CTorwart::getLinienQualitaet()
{
	return linienQualitaet;
}
void CTorwart::setAbwehrKommunikation(int abwehrKommunikation)
{
	this->abwehrKommunikation = abwehrKommunikation;
}
int CTorwart::getAbwehrKommunikation()
{
	return abwehrKommunikation;
}