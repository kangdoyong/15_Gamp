#pragma once
#include <iostream>
using namespace std;

class Job
{
private:
	string name;
	string weapon;

protected:
	Job(string name, string weapon);
	// �ܺο��� �� �����ڰ� ȣ��� �� ����
	// -> Job ������ �ν��Ͻ��� ������ �� ����
	// ��������� �߸��� ����� ������ �� ����

public:
	void Print();
};

