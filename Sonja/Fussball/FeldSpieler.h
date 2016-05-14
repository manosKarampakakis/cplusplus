#pragma once
#include "Spieler.h"
#include "EStarkerFuss.h"
#include <string>
using namespace std;

class CFeldSpieler : public CSpieler 
{
private:
	e_starkerFuss starkerFuss = unKnown;
	unsigned int verteidigung = 0;
	unsigned int ballBeherrschung = 0;
	unsigned int schussKraft = 0;
	unsigned int schussGenauigkeit = 0;

public:
	void print() const;
	CFeldSpieler(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer);
	void setStarkerFuss(e_starkerFuss starkerFuss);
	e_starkerFuss getStarkerFuss();
	void setVerteidigung(int verteidigung);
	int getVerteidigung();
	void setBallBeherrschung(int ballBeherrschung);
	int getBallBeherrschung();
	void setSchussKraft(int schussKraft);
	int getSchussKraft();
	void setSchussGenauigkeit(int schussGenauigkeit);
	int getSchussGenauigkeit();
};
