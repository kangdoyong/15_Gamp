#include "Flower.h"

Flower::Flower(string name, int price)
	:name(name), price(price)
{
}

void Flower::Print()
{
	cout << "�̸� : " << name << endl;
	cout << name << "�� ���� : " << price << endl;
}
