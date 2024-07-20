#pragma once
#include "Machine.h"

// 추상클래스를 상속받는 추상클래스
// 이러한 경우 파생 추상 클래스에서 순수 가상함수를
// 구현해도 되고, 구현하지 않아도 됨

// 해당 클래스도 추상 클래스이므로, 어차피 인스턴스화가 안됨
// 사용하기 위해선, 해당 클래스를 상속받는 파생클래스가 필요하고
// 최종적인 구현을 파생클래스로 미룰 수 있다는 뜻

class Computer abstract :
    public Machine
{
public:
	// 머신에 선언된 Repair를 재정의
	virtual void Repair() override;
	virtual void Coding() abstract;
};

