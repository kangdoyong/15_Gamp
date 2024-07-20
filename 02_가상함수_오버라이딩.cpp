
// Shape(모양) 이라는 도형들의 기본 클래스가 있음
// Shape에서 파생되는 Triangle, Rectangle 클래스가 존재

// Shape에는 void Draw() 라는 메서드가 존재
// Shape -> 도형을 그립니다. 라고 출력하는 기능
// Triangle -> 삼각형을 그립니다. 라고 출력하는 기능
// Rectangle -> 사각형을 그립니다. 라고 출력하는 기능

// 클래스 정의가 끝난 후, 삼각형/사각형의 인스턴스를 생성하고
// 베이스 클래스 타입의 변수에 담은 후, Draw를 호출하여
// 도형마다 다른 결과가 출력되게 끔

#include <iostream>
using namespace std;

class Shape
{
public:
	virtual void Draw()
	{
		cout << "도형을 그립니다." << endl;
	}
};

class Triangle : public Shape
{
public:
	virtual void Draw() override
	{
		cout << "삼각형을 그립니다." << endl;
	}
};

class Rectangle : public Shape
{
public:
	virtual void Draw() override
	{
		cout << "사각형을 그립니다." << endl;
	}
};

void main()
{
	// 다형성을 사용하는 이유
	// 동일한 타입으로 만들어서 연속적인 공간에 담은 후
	// 제어를 편하게 하기 위함

	Shape** shapes = new Shape * [2];
	shapes[0] = new Triangle();
	shapes[1] = new Rectangle();

	for (int i = 0; i < 2; ++i)
		shapes[i]->Draw();

	for (int i = 0; i < 2; ++i)
	{
		if (shapes[i])
		{
			delete shapes[i];
			shapes[i] = nullptr;
		}
	}

	if (shapes)
	{
		delete[] shapes;
		shapes = nullptr;
	}
}

