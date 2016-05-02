#include "CPerson.h"
#include <iostream>

using namespace std;

class CTrainer : public CPerson{

private:
	unsigned int lizenzStufe = 0;

public:
	unsigned int GetLizenzstufe();
	void print();

	CTrainer (string name, string vorname, unsigned int alter);
};
