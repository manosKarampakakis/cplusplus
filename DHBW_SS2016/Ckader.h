#ifndef CKADER_CPP
#define CKADER_CPP

const unsigned int maxAnzKader = 50;

class CKader {

private:
	unsigned int anzKader;
	CPerson *pKaderMitglieder[maxAnzKader];

public:
	CKader();
	bool add(const CPerson & person);
	void print();
};

#endif