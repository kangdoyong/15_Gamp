#pragma once
#include "Job.h"
class Archer :
    public Job
{
private:
	// ȸ��
	int evasion;

public:
	Archer(string name, string weapon, int evasion);
	void Print();
};

