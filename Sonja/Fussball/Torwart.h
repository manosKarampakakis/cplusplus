#pragma once
#include "Spieler.h"
#include <string>
using namespace std;

class CTorwart : public CSpieler
{
private:
	unsigned int strafRaumBeherrschung = 0;
	unsigned int linienQualitaet = 0;
	unsigned int abwehrKommunikation = 0;

public:
	void print() const;
	CTorwart(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer);
	void setStrafRaumBeherrschung(int strafRaumBeherrschung);
	int getStrafRaumBeherrschung();
	void setLinienQualitaet(int linienQualitaet);
	int getLinienQualitaet();
	void setAbwehrKommunikation(int abwehrKommunikation);
	int getAbwehrKommunikation();
};