#pragma once
#include <string>
using namespace std;

class CPerson 
{
protected:
	string name;
	string vorname;
	unsigned int alter;

public:
	virtual void print() const;
};