#include "Warrior.h"
#include "Archer.h"

void main()
{
	// 접근제어자가 protected 이므로 job 타입의 인스턴스 생성 불가
	// Job job = Job("직업", "무기");

	// 베이스 클래스 타입의 변수로 파생 클래스 타입의 객체를 담을 수 있음
	Job* warrior = new Warrior("전사", "대검", 30);
	Job* archer = new Archer("궁수", "활", 20);

	// 파생 클래스에서 정의한 메서드가 호출되지 않음
	// 이유 : 메서드는 가리키는 실제 객체의 형태가 아닌
	//        참조하는 변수의 타입을 기준으로 호출되기 때문
	// 이러한 경우, 객체의 정의된 메서드를 호출하고 싶다면?
	// -> 캐스팅, 오버라이딩
	((Warrior*)warrior)->Print();
	static_cast<Archer*>(archer)->Print();

	// () 와 static_cast 차이
	// () : c언어에서부터 제공하는 기본적인 캐스팅 연산자
	//      자유자재로 캐스팅이 가능하며, 서로 다른 타입 간의 변환도 가능

	// static_cast<TargetType>() :
	// c++ 에서 제공하는 캐스팅 연산자
	// 논리적으로 변환 가능한 타입에 대한 캐스팅만 허용
	// -> 일치하지 않은 타입에 대한 캐스팅을 허용하지 않습니다.

	delete warrior;
	delete archer;
	warrior = nullptr;
	archer = nullptr;
}