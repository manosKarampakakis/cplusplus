/*
 * CTorwart.h
 *
 *  Created on: May 2, 2016
 *      Author: manos
 */

#ifndef CTORWART_H_
#define CTORWART_H_

#include "CSpieler.h"
#include "position.h"

namespace std {

class CTorwart: public CSpieler {
public:
	unsigned int strafRaumBeherrschung;
	unsigned int linieneQuallitaet;
	unsigned int abwehrKommunikation;

	CTorwart(string name, string vorname, unsigned int alter, unsigned int nummer);
	virtual ~CTorwart();
	void print();
};

} /* namespace std */

#endif /* CTORWART_H_ */
