
// 상속 관계에서 생성자, 소멸자 호출 순서
// 생성자 : 최상위 베이스 클래스에서 최하위 파생 클래스 순서로 호출
// 소멸자 : 최하위 파생 클래스에서 최상위 베이스 클래스 순서로 호출

#include <iostream>
using namespace std;

class A
{
public:
	A() { cout << "a 생성자 호출" << endl; }
	~A() { cout << "a 소멸자 호출" << endl; }
};

class B : public A
{
public:
	B() { cout << "b 생성자 호출" << endl; }
	~B() { cout << "b 소멸자 호출" << endl; }
};

class C : public B
{
public:
	C() { cout << "c 생성자 호출" << endl; }
	~C() { cout << "c 소멸자 호출" << endl; }
};

void main()
{
	C c;
}