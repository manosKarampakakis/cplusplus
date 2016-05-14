#include "Fuehrung.h"
#include <iostream>
using namespace std;

CFuehrung::CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe) 
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->aufgabe = aufgabe;
}

void CFuehrung::print() const
{
	string aufgabe_name;
	switch (aufgabe) 
	{
	case praesident:
		aufgabe_name = "Praesident";
		break;
	case vorstand:
		aufgabe_name = "Vorstand";
		break;
	case sportdirektor:
		aufgabe_name = "Sportdirektor";
		break;
	default:
		break;
	}

	CPerson::print();
	cout << "Aufgabe: " << aufgabe_name << endl;

	
}

