/*
 * CTrainer.h
 *
 *  Created on: May 2, 2016
 *      Author: manos
 */

#ifndef CTRAINER_H_
#define CTRAINER_H_

#include "CPerson.h"

namespace std{

class CTrainer: public CPerson {
public:
	CTrainer(string name, string vorname, unsigned int alter);
	virtual ~CTrainer();
	unsigned int lizenzStufe;
	void print();
};
}

#endif /* CTRAINER_H_ */
