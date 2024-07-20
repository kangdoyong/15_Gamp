#include <iostream>
using namespace std;

// 순수 가상함수
//  - 가상함수는 파생클래스에서 재정의할 것으로 기대하는 메서드
//  - 순수 가상함수는 파생클래스에서 반드시 재정의해야하는 메서드

// 베이스 클래스에서 순수 가상함수를 선언한다면,
// 함수의 선언만 존재하고, 동작은 정의하지 않습니다.
//  -> 무조건 파생 클래스에서 재정의하므로, 동작을 적어도 의미가 없음

// c++에서 이러한 순수 가상함수를 하나 이상 가지고 있는 클래스를
// 추상 클래스라고 합니다.

// 추상클래스
// 순수 가상함수를 하나 이상 가지고 있는 완전하지 않은 클래스
// 추상 클래스는 동작이 정의되지 않는 순수 가상 함수를 가진 클래스이므로
// 인스턴스화가 불가능합니다.
// 추상 클래스를 나타날 때, 클래스명 뒤에 abstract 키워드를 명시

class Test abstract
{
protected:
	string myStr;

public:
	// 순수 가상함수 선언
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

	// 베이스의 순수 가상함수 Print()를 재정의
	virtual void Print() override
	{
		cout << myStr << endl;
	}
};

void main()
{
	// 추상 클래스이므로 Test 타입의 인스턴스 생성 불가
	// Test* test = new Test();

	Test* test = new Test2("Hello");
	test->Print();

	delete test;
	test = nullptr;
}