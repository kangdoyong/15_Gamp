#pragma once
#include "Computer.h"

// final 명시되어 있다면,
// 해당 클래스에서 더 이상 파생클래스를 선언할 수 없음
class MyWindow final :
    public Computer
{
public:
	// Computer을(를) 통해 상속됨
	void SetPower(Power power) override;
	void Coding() override;
};

