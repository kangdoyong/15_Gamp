#pragma once
#include "Job.h"
class Archer :
    public Job
{
private:
	// È¸ÇÇ
	int evasion;

public:
	Archer(string name, string weapon, int evasion);
	void Print();
};

