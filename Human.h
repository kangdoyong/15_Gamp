#pragma once
#include <iostream>
using namespace std;

class Human
{
protected:
	// 하단에 선언한 필드, 메서드는 모두 protected로 설정
	// 자신과 파생 클래스에서만 접근 가능, 외부 접근 불가
	string name;
	int age;

public:
	void PrintInfo();
};

