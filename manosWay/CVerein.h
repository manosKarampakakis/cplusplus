/*
 * CVerein.h
 *
 *  Created on: May 9, 2016
 *      Author: manos
 */

#ifndef CVEREIN_H_
#define CVEREIN_H_

#include "CPerson.h"
#include "CKader.h"
#include "CFuehrung.h"

const unsigned int maxAnzFuehrung = 20;

namespace std {

class CVerein {
public:
	CVerein();
	virtual ~CVerein();
	CKader* pMyKader;
	unsigned int anzFuehrung;
	CFuehrung* FuehrungsMittglieder[maxAnzFuehrung];
	bool add(const CFuehrung &fuerhung);
	bool add(const CKader &kader);
	void print();
};

} /* namespace std */

#endif /* CVEREIN_H_ */
