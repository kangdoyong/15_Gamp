#include "Student.h"

Student::Student(string name, int age)
{
	this->name = name;
	this->age = age;
}

void Student::PrintInfo()
{
	// ���� �θ��� ����� ����ϰ� �ʹٸ�
	// ��������� �θ�Ŭ������::�Լ��ĺ���() ȣ���ϸ� ��� ����
	Human::PrintInfo();

	cout << "�л� �̸� : " << name << endl;
	cout << "���� : " << age << endl;
}
