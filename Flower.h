#pragma once
#include <iostream>
using namespace std;

class Flower
{
protected:
	Flower(string name, int price);
	string name;
	int price;

public:
	void Print();
};

