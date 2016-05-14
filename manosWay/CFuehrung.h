/*
 * CFuehrung.h
 *
 *  Created on: May 2, 2016
 *      Author: manos
 */

#ifndef CFUEHRUNG_H_
#define CFUEHRUNG_H_

#include "aufgabe.h"
#include "CPerson.h"

namespace std{

class CFuehrung: public CPerson {
public:
	e_aufgaben aufgabe;
	CFuehrung(string name, string vorname, unsigned int alter, e_aufgaben aufgabe);
	void print();
};
}

#endif /* CFUEHRUNG_H_ */
