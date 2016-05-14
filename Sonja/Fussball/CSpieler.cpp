#include "Spieler.h"
#include <iostream>
using namespace std;

void CSpieler::print() const
{
	string position_name;
	switch (position)
	{
	case mittelfeld:
		position_name = "Mittelfeld"; 
		break;
	case abwehr:
		position_name = "Abwehr";
		break;
	case torwart:
		position_name = "Torwart";
		break;
	case sturm:
		position_name = "Sturm";
		break;
	default:
		break;
	}
	cout << "Position: " << position_name << ", Nummer: " << nummer << endl;
}

