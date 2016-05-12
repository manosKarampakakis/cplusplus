#ifndef CFELDSPIELER_CPP
#define CFELDSPIELER_CPP

#include "e_starkerFuss.h"
#include "e_position.h"

#include "CSpieler.h"

#include <iostream>

using namespace std;

class CFeldSpieler : public CSpieler {

private:
	e_starkerFuss starkerFuss;
	unsigned int verteidigung = 0;
	unsigned int ballBeherrschung = 0;
	unsigned int schussKraft = 0;
	unsigned int schussGenauigkeit = 0;

public:
	e_starkerFuss GetStarkerFuss();
	unsigned int GetVerteidigung();
	unsigned int GetBallbeherrschung();
	unsigned int GetSchussKraft();
	unsigned int GetSchussgenauigkeit();
	void print();

	CFeldSpieler(
		string name,
		string vorname,
		unsigned int alter,
		e_position position,
		unsigned int nummer
	);
};

#endif

