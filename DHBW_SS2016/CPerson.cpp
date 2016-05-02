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
	cout << "--------------------------------------------------";
	cout << "Name:  " << CPerson::GetName << ", " << CPerson::GetVorname;
	cout << "   Alter : " << CPerson::GetAlter;
}
