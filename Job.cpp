#include "Job.h"

// 멤버 이니셜라이저를 통한 필드 초기화 시,
// 파라미터와 필드의 이름이 동일해도 this 키워드를 안 적어도 됨
// 왼쪽에 오는게 필드, 오른쪽 괄호 안에 오는게 파라미터임
Job::Job(string name, string weapon)
	: name(name), weapon(weapon)
{
}

void Job::Print()
{
	cout << "직업 : " << name << endl;
	cout << "무기 : " << weapon << endl;
}
