#pragma once
#include "Machine.h"

// �߻�Ŭ������ ��ӹ޴� �߻�Ŭ����
// �̷��� ��� �Ļ� �߻� Ŭ�������� ���� �����Լ���
// �����ص� �ǰ�, �������� �ʾƵ� ��

// �ش� Ŭ������ �߻� Ŭ�����̹Ƿ�, ������ �ν��Ͻ�ȭ�� �ȵ�
// ����ϱ� ���ؼ�, �ش� Ŭ������ ��ӹ޴� �Ļ�Ŭ������ �ʿ��ϰ�
// �������� ������ �Ļ�Ŭ������ �̷� �� �ִٴ� ��

class Computer abstract :
    public Machine
{
public:
	// �ӽſ� ����� Repair�� ������
	virtual void Repair() override;
	virtual void Coding() abstract;
};

