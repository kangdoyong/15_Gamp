#include <iostream>
using namespace std;

// 상속에서 크게 2가지 관계
// A is a B 관계
// a는 b입니다. 가 성립되는 관계
// ex) Slime is Monster

// A has a B 관계
// a는 b를 가지고 있습니다. 가 성립되는 관계
// ex) Player has a Weapon
// -> has a 관계의 경우, 주로 인터페이스를 이용

// 인터페이스
// 클래스와 비슷하지만, "가상 소멸자"와 "순수 가상 함수"만 갖는 클래스
// 클래스에 어떤 카테고리를 지정하여, 나중에 재사용의 문제나
// 관리적 측면에서 편리하도록 하기 위해 이러한 개념을 사용

#include <iostream>
using namespace std;
#include <combaseapi.h>

// 인터페이스 ISample 선언
// -> 관습적으로 인터페이스 이름 앞에 대문자 I를 붙임
interface ISample
{
	// 인터페이스를 상속받는 클래스는 Hello 메서드를 구현해야 함
	virtual void Hello() abstract;

	// ISample을 상속받는 클래스의 파생 클래스가 생성될 경우를 대비하여
	// 가상 소멸자가 필요
	virtual ~ISample() { cout << "ISample 소멸자" << endl; }
};

class Sample : public ISample
{
public:
	void Test() { }
	// ISample을(를) 통해 상속됨
	void Hello() override
	{
		cout << "Hello" << endl;
	}

	~Sample() { cout << "Sample 소멸자" << endl; }
};

// 인터페이스는 클래스 상속과 다르게
// 복수의 인터페이스를 상속시킬 수 있다.

// 공격 인터페이스
// 순수 가상함수 공격();

// 슬라임 클래스 : 몬스터 클래스, 공격 인터페이스, 피격 인터페이스 상속
// 공격() { 슬라임만의 공격 구현 }

// 고블린 클래스 : 몬스터 클래스, 공격 인터페이스, 피격 인터페이스 상속
// 공격() { 고블린만의 공격 구현 }

// 전투 로직에서 상황에 따라 실제 공격함수를 호출해야하는 상황
// 인터페이스 다형성을 이용해서
// 슬라임, 고블린의 인스턴스를 공격 인터페이스 배열 형태로 받아와서
// 배열을 순회하면서, 공격 기능을 호출
// -> 전투 로직에서 전투에 필요한 공격 기능만 외부에 노출

void main()
{
	// 인터페이스를 이용한 다형성을 나타낼 수 있음
	// -> 인터페이스에 선언된 기능만을 외부에 노출한다.
	ISample* s = new Sample();
	s->Hello();
	delete s;
	s = nullptr;
}