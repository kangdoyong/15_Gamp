#include "Archer.h"

Archer::Archer(string name, string weapon, int evasion)
	: Job(name, weapon)
{
	this->evasion = evasion;
}

void Archer::Print()
{
	Job::Print();
	cout << "È¸ÇÇ·Â : " << evasion << endl;
}
