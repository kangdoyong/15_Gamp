#pragma once

#include <iostream>
using namespace std;
#include <combaseapi.h>

// 전화를 거는 기능을 갖는 인터페이스
interface ICall
{
	virtual void Call(string phoneNumber) abstract;
	virtual ~ICall() {}
};
