#pragma once
#include "Job.h"
class Warrior :
    public Job
{
private:
	// ¹æ¾î·Â
	int def;

public:
	Warrior(string name, string weapon, int def);
	void Print();
};

