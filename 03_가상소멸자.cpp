#include <iostream>
using namespace std;

class AA
{
public:
	AA() { cout << "AA ������" << endl; }
	virtual ~AA() { cout << "AA �Ҹ���" << endl; }
};

class BB : public AA
{
public:
	BB() { cout << "BB ������" << endl; }
	// ��� ���踦 �̿� ��, �������� ����ϴ� ��찡 �����Ƿ�
	// ��� ���迡�� ���� �Ҹ��� �ۼ��� ��Ȱȭ
	virtual ~BB() { cout << "BB �Ҹ���" << endl; }
};

void main()
{
	// �������� �̿��Ͽ� �ν��Ͻ� ���� ��
	// ������ ��ü�� �Ҹ��ڰ� ���������� ȣ����� ����
	// �Ҹ��ڰ� ���������� ȣ����� �������� ����
	// �߻��� �� �ִ� ������?
	//  -> �����Ҵ��� �ʵ尡 ������ ���, �޸� ������ �̾���
	// �������� �̿��Ͽ� ������ �ν��Ͻ���
	// �Ҹ��ڸ� ���������� ȣ���ϱ� ����, ���� �Ҹ��� �̿�

	AA* instance = new BB();

	delete instance;
	instance = nullptr;
}