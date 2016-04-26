#pragma once
#include "Spieler.h"
#include <string>
using namespace std;

enum e_starkerFuss { unKnown, links, rechts, gleich };

class CFeldSpieler : public CSpieler 
{
private:
	e_starkerFuss starkerFuss;
	unsigned int verteidigung = 0;
	unsigned int ballBeherrschung = 0;
	unsigned int schussKraft = 0;
	unsigned int schussGenauigkeit = 0;

public:
	void print();
	CFeldSpieler(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer);
};
