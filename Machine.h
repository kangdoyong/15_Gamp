#pragma once
#include <iostream>
using namespace std;

class Machine abstract
{
public:
	enum Power { On, Off };

	virtual void SetPower(Power power) abstract;
	virtual void Repair() abstract;
};

