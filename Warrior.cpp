#include "Warrior.h"

// ���� ����, ���̽� Ŭ������ �⺻�����ڰ� ���� ���
// ��������� ���̽� Ŭ������ �����ڸ� ȣ���ؾ� ��.
Warrior::Warrior(string name, string weapon, int def)
	: Job(name, weapon)
{
	this->def = def;
}

void Warrior::Print()
{
	Job::Print();
	cout << "���� : " << def << endl;
}
