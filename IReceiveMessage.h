#pragma once
#include <iostream>
using namespace std;
#include <combaseapi.h>

// ���� ����
class Phone;
// ������ �����̶�� �մϴ�.
// ������ Ŭ������ �����Ѵٴ� ���� �˸��ϴ�.
// ����ϴ� ����?
// - Phone.h���� IReceiveMessage�� �����ؾ��ϹǷ� IReceiveMessage.h�� ������.
// - IReceiveMessage.h ���� Phone Ŭ������ �ν� ��Ű�� ���� Phone.h�� ������.
// ��� : Phone.h �� IReceiveMessage.h ���̿��� ���� ������ �Ͼ -> ������ ����
// �̷� ������ �ذ��ϱ� ���� ���� ������ ���

// �޼����� �޴� ����� ���� �������̽�
interface IReceiveMessage
{
	virtual void ReceiveMessage(Phone* phone, string text) abstract;
};

