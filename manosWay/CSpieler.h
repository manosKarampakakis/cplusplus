/*
 * CSpieler.h
 *
 *  Created on: May 2, 2016
 *      Author: manos
 */

#ifndef CSPIELER_H_
#define CSPIELER_H_

#include "position.h"
#include "CPerson.h"

namespace std {

class CSpieler: public CPerson {
public:
	CSpieler();
	virtual ~CSpieler();
	e_position position;
	unsigned int nummer;
	virtual void print();
};

} /* namespace std */

#endif /* CSPIELER_H_ */
