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
	// 외부에서 이 생성자가 호출될 수 없음
	// -> Job 형태의 인스턴스가 생성될 수 없음
	// 결과적으로 잘못된 사용을 방지할 수 있음

public:
	void Print();
};

