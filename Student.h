#pragma once
#include "Human.h"
class Student :
    public Human
{
public:
	Student(string name, int age);

	// ���̽��� �ִ� PrintInfo�� ������ ������ �޼��带 ����
	void PrintInfo();
};

