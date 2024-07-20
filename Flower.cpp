#include "Flower.h"

Flower::Flower(string name, int price)
	:name(name), price(price)
{
}

void Flower::Print()
{
	cout << "이름 : " << name << endl;
	cout << name << "의 가격 : " << price << endl;
}
