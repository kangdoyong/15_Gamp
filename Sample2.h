#pragma once
#include "Sample1.h"

// 베이스 클래스(Sample1)의
// 파생 클래스(Sample2)를 정의

// 베이스를 지정할 때,
// 콜론을 이용하여 지정
// 콜론 뒤에 오는 접근제어자는 상속의 유형을 나타냄

class Sample2 : public Sample1
{
public:
	void Test2();
};

