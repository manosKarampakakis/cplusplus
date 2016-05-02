#include "CSpieler.h"

#include <iostream>

using namespace std;

e_position CSpieler::GetPosition(){
	return position;
}

unsigned int CSpieler::GetNummer(){
	return nummer;
}

void CSpieler::print() const {
	cout << "Position:  " << CSpieler::GetPosition << " Nummer:  " << CSpieler::GetNummer;
}