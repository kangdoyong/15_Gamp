#pragma once
#include "Human.h"
class Student :
    public Human
{
public:
	Student(string name, int age);

	// 베이스에 있는 PrintInfo와 동일한 형태의 메서드를 선언
	void PrintInfo();
};

