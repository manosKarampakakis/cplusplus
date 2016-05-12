/*
 * CFeldSpieler.h
 *
 *  Created on: May 2, 2016
 *      Author: manos
 */

#ifndef CFELDSPIELER_H_
#define CFELDSPIELER_H_

#include "CSpieler.h"
#include "starkerfuss.h"

namespace std {

class CFeldSpieler: public CSpieler {
public:
	e_startkerFuss starkerFuss;
	unsigned int verteidigung;
	unsigned int ballBeherrschung;
	unsigned int schussKraft;
	unsigned int schussGenauigkeit;
	CFeldSpieler(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer);
	virtual ~CFeldSpieler();
	void print();
};

} /* namespace std */

#endif /* CFELDSPIELER_H_ */
