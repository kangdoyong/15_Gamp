#include "Job.h"

// ��� �̴ϼȶ������� ���� �ʵ� �ʱ�ȭ ��,
// �Ķ���Ϳ� �ʵ��� �̸��� �����ص� this Ű���带 �� ��� ��
// ���ʿ� ���°� �ʵ�, ������ ��ȣ �ȿ� ���°� �Ķ������
Job::Job(string name, string weapon)
	: name(name), weapon(weapon)
{
}

void Job::Print()
{
	cout << "���� : " << name << endl;
	cout << "���� : " << weapon << endl;
}
