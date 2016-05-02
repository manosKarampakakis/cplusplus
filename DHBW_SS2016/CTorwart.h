#include "CSpieler.h"
#include <iostream>
using namespace std;

class CTorwart : public CSpieler {

private:
	unsigned int strafRaumBeherrschung = 0;
	unsigned int linienQualitaet = 0;
	unsigned int abwehrKommunikation = 0;

public:
	unsigned int GetStrafRaumBeherrschung();
	unsigned int GetLinienQualitaet();
	unsigned int GetAbwehrKommunikation();
	void print();

	CTorwart(
		string name, 
		string vorname, 
		unsigned int alter, 
		e_position position, 
		unsigned int nummer
	);
};



