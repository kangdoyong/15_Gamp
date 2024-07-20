#include "Student.h"

Student::Student(string name, int age)
{
	this->name = name;
	this->age = age;
}

void Student::PrintInfo()
{
	// 만약 부모의 멤버를 사용하고 싶다면
	// 명시적으로 부모클래스명::함수식별자() 호출하면 사용 가능
	Human::PrintInfo();

	cout << "학생 이름 : " << name << endl;
	cout << "나이 : " << age << endl;
}
