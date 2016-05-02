#include "stdafx.h"
#include "CTrainer.h"

#include <iostream>

using namespace std;

// Constructor
CTrainer::CTrainer(string name, string vorname, unsigned int alter) {
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
}

unsigned int CTrainer::GetLizenzstufe(){
	return lizenzStufe;
}
