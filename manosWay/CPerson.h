/*
 * CPerson.h
 *
 *  Created on: May 2, 2016
 *      Author: manos
 */

#ifndef CPERSON_H_
#define CPERSON_H_

#include <iostream>

namespace std{

class CPerson {
public:
	virtual void print();
	CPerson();
	virtual ~CPerson();
	string name;
	string vorname;
	unsigned int alter;
};
}

#endif /* CPERSON_H_ */

