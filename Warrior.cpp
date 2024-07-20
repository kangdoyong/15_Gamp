#include "Warrior.h"

// 지금 같이, 베이스 클래스의 기본생성자가 없을 경우
// 명시적으로 베이스 클래스의 생성자를 호출해야 함.
Warrior::Warrior(string name, string weapon, int def)
	: Job(name, weapon)
{
	this->def = def;
}

void Warrior::Print()
{
	Job::Print();
	cout << "방어력 : " << def << endl;
}
