#pragma once
#include <iostream>
using namespace std;

class Human
{
protected:
	// �ϴܿ� ������ �ʵ�, �޼���� ��� protected�� ����
	// �ڽŰ� �Ļ� Ŭ���������� ���� ����, �ܺ� ���� �Ұ�
	string name;
	int age;

public:
	void PrintInfo();
};

