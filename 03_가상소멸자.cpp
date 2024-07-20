#include <iostream>
using namespace std;

class AA
{
public:
	AA() { cout << "AA 생성자" << endl; }
	virtual ~AA() { cout << "AA 소멸자" << endl; }
};

class BB : public AA
{
public:
	BB() { cout << "BB 생성자" << endl; }
	// 상속 관계를 이용 시, 다형성을 사용하는 경우가 많으므로
	// 상속 관계에서 가상 소멸자 작성을 생활화
	virtual ~BB() { cout << "BB 소멸자" << endl; }
};

void main()
{
	// 다형성을 이용하여 인스턴스 생성 시
	// 생성된 객체의 소멸자가 정상적으로 호출되지 않음
	// 소멸자가 정상적으로 호출되지 않음으로 인해
	// 발생할 수 있는 문제는?
	//  -> 동적할당한 필드가 존재할 경우, 메모리 누수로 이어짐
	// 다형성을 이용하여 생성한 인스턴스의
	// 소멸자를 정상적으로 호출하기 위해, 가상 소멸자 이용

	AA* instance = new BB();

	delete instance;
	instance = nullptr;
}