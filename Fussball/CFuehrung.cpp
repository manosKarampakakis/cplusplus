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

void CFuehrung::print()
{
	cout << "---------------------------------------------------" << endl;
	cout << "Name: " << name << ", " << vorname << endl;
	cout << "Alter: " << alter << endl;
	cout << "Aufgabe: " << aufgabe << endl;
}

