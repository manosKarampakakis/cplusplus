#include "CPerson.h"

const unsigned int maxAnzKader = 50;

class CKader {

private:
	unsigned int anzKader;
	CPerson* pKaderMitgleider[maxAnzKader];

public:
	CKader();
	bool add(const CPerson & person);
	void print();
};