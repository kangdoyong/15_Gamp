
// ��� ���迡�� ������, �Ҹ��� ȣ�� ����
// ������ : �ֻ��� ���̽� Ŭ�������� ������ �Ļ� Ŭ���� ������ ȣ��
// �Ҹ��� : ������ �Ļ� Ŭ�������� �ֻ��� ���̽� Ŭ���� ������ ȣ��

#include <iostream>
using namespace std;

class A
{
public:
	A() { cout << "a ������ ȣ��" << endl; }
	~A() { cout << "a �Ҹ��� ȣ��" << endl; }
};

class B : public A
{
public:
	B() { cout << "b ������ ȣ��" << endl; }
	~B() { cout << "b �Ҹ��� ȣ��" << endl; }
};

class C : public B
{
public:
	C() { cout << "c ������ ȣ��" << endl; }
	~C() { cout << "c �Ҹ��� ȣ��" << endl; }
};

void main()
{
	C c;
}