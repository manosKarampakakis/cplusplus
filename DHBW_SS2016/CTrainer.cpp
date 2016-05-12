#include "CTrainer.h"

#include <iostream>

using namespace std;

// Constructor
CTrainer::CTrainer(string name, string vorname, unsigned int alter) {
	name = name;
	vorname = vorname;
	alter = alter;
}

unsigned int CTrainer::GetLizenzstufe(){
	return lizenzStufe;
}

void CTrainer::print() {
	cout << "Lizenzstufe: " << &CTrainer::GetLizenzstufe << endl;
}
