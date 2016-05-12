#include "Trainer.h"
#include <iostream>
using namespace std;

CTrainer::CTrainer(string name, string vorname, unsigned int alter) 
{
	this->name = name;
	this->vorname = vorname;
	this->alter = alter;
}

void CTrainer::print() 
{
	cout << "---------------------------------------------------" << endl;
	cout << "Name: " << name << ", " << vorname << endl;
	cout << "Alter: " << alter << endl;
	cout << "Lizenzstufe: " << lizenzStufe << endl;
}

void CTrainer::setLizenzStufe(int lizenzStufe)
{
	this->lizenzStufe = lizenzStufe;
}
int CTrainer::getLizenzStufe()
{
	return lizenzStufe;
}

