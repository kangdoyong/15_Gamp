#include <iostream>
using namespace std;

// ���� �����Լ�
//  - �����Լ��� �Ļ�Ŭ�������� �������� ������ ����ϴ� �޼���
//  - ���� �����Լ��� �Ļ�Ŭ�������� �ݵ�� �������ؾ��ϴ� �޼���

// ���̽� Ŭ�������� ���� �����Լ��� �����Ѵٸ�,
// �Լ��� ���� �����ϰ�, ������ �������� �ʽ��ϴ�.
//  -> ������ �Ļ� Ŭ�������� �������ϹǷ�, ������ ��� �ǹ̰� ����

// c++���� �̷��� ���� �����Լ��� �ϳ� �̻� ������ �ִ� Ŭ������
// �߻� Ŭ������� �մϴ�.

// �߻�Ŭ����
// ���� �����Լ��� �ϳ� �̻� ������ �ִ� �������� ���� Ŭ����
// �߻� Ŭ������ ������ ���ǵ��� �ʴ� ���� ���� �Լ��� ���� Ŭ�����̹Ƿ�
// �ν��Ͻ�ȭ�� �Ұ����մϴ�.
// �߻� Ŭ������ ��Ÿ�� ��, Ŭ������ �ڿ� abstract Ű���带 ���

class Test abstract
{
protected:
	string myStr;

public:
	// ���� �����Լ� ����
	virtual void Print() abstract;
	// virtual void Print() = 0;

	Test() {}
	virtual ~Test() {}
};

class Test2 : public Test
{
public:
	Test2(string str) { myStr = str; }
	virtual ~Test2() {}

	// ���̽��� ���� �����Լ� Print()�� ������
	virtual void Print() override
	{
		cout << myStr << endl;
	}
};

void main()
{
	// �߻� Ŭ�����̹Ƿ� Test Ÿ���� �ν��Ͻ� ���� �Ұ�
	// Test* test = new Test();

	Test* test = new Test2("Hello");
	test->Print();

	delete test;
	test = nullptr;
}