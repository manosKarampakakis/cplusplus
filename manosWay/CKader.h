/*
 * CKader.h
 *
 *  Created on: May 3, 2016
 *      Author: manos
 */

#ifndef CKADER_H_
#define CKADER_H_
#include "CPerson.h"

namespace std {

class CKader {
public:
	CKader();
	virtual ~CKader();
	unsigned int anzKader;
	CPerson * pKaderMitglieder[30];
	bool add(const CPerson &person);
	void print();
};

} /* namespace std */

#endif /* CKADER_H_ */
