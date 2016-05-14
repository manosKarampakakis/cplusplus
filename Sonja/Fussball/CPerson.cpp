#include "Person.h"
#include <iostream>
using namespace std;

void CPerson::print() const
{
	cout << "---------------------------------------------------" << endl;
	cout << "Name:  " << name << ", " << vorname << endl;
	cout << "Alter: " << alter << endl;
}