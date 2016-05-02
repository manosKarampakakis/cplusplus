#include "CFuehrung.h"

#include <iostream>

using namespace std;

// Constructor
CFuehrung::CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe) {
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
	this->aufgabe = aufgabe;
}

e_aufgabe CFuehrung::GetAufgabe(){
	return aufgabe;
}

void CFuehrung::print() {
	cout << "Aufgabe:  " << &CFuehrung::GetAufgabe << endl;
}