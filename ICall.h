#pragma once

#include <iostream>
using namespace std;
#include <combaseapi.h>

// ��ȭ�� �Ŵ� ����� ���� �������̽�
interface ICall
{
	virtual void Call(string phoneNumber) abstract;
	virtual ~ICall() {}
};
