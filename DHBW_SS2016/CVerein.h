#include "CKader.h"
#include "CFuehrung.h"

const unsigned int maxAnzFuehrung = 20;

class CVerein {

private:
	CKader *pMyKader;
	unsigned int anzFuehrung;
	CFuehrung *fuehrungMitgleider[maxAnzFuehrung];

public:
	bool add(const CFuehrung & person);
	bool add(const CKader & person);
	void print();
};