#pragma once
#include "Job.h"
class Warrior :
    public Job
{
private:
	// ����
	int def;

public:
	Warrior(string name, string weapon, int def);
	void Print();
};

