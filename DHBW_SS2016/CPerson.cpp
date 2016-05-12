#include "CPerson.h"

#include <iostream>

using namespace std;

string CPerson::GetName(){
	return name;
}

string CPerson::GetVorname(){
	return vorname;
}

unsigned int CPerson::GetAlter(){
	return alter;
}

void CPerson::print() const{
	cout << "--------------------------------------------------" << endl;
	cout << "Name:  " << &CPerson::GetName << ", " << &CPerson::GetVorname << endl;
	cout << "   Alter : " << &CPerson::GetAlter << endl;
}
