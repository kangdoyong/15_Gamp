#pragma once
#include "Computer.h"

// final ��õǾ� �ִٸ�,
// �ش� Ŭ�������� �� �̻� �Ļ�Ŭ������ ������ �� ����
class MyWindow final :
    public Computer
{
public:
	// Computer��(��) ���� ��ӵ�
	void SetPower(Power power) override;
	void Coding() override;
};

