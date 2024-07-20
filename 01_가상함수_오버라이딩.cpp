#include <iostream>
using namespace std;

class Test1
{
	// 가상함수란?
	// 파생 클래스에서 재정의할 것으로 기대하는 메서드를 의미
	// 가상함수 호출 시, 객체를 가리키는 변수의 타입을 기준으로
	// 호출하는 것이 아닌 가리키는 객체의 타입을 기준으로 호출하게 됨
	// 파생 클래스에서 베이스 클래스의 가상함수를 오버라이딩 하는 경우
	// 오버라이딩을 진행한 메서드도 가상함수가 됩니다.
public:
	// virtual 키워드를 붙여 가상함수를 선언
	virtual void Method()
	{
		cout << "Test1 메서드 호출" << endl;
	}
};

class Test2 : public Test1
{
public:
	virtual void Method() override
	{
		// 오버라이딩한 메서드도 가상함수이므로,
		// 이를 표현하기 위해 명시적으로 virtual 작성

		// 베이스에 정의되지 않은 가상함수를 오버라이딩하는
		// 실수를 방지하기 위해 명시적으로 override 작성

		cout << "Test2 메서드 호출" << endl;
	}
};

// 오버라이딩이란?
// 베이스 클래스에 있는 같은 이름, 같은 매개변수의
// 메서드를 파생 클래스에서 재정의하는 것을 의미
// 오버라이딩을 하게 되면 해당 파생 클래스 타입의
// 메서드가 호출된다.

// 베이스 클래스의 오버라이딩 시킬 메서드는
// 항상 가상함수여야 합니다.

void main()
{
	Test1* test = new Test2;

	test->Method();

	delete test;
	test = nullptr;
}


