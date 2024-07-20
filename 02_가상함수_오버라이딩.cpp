
// Shape(���) �̶�� �������� �⺻ Ŭ������ ����
// Shape���� �Ļ��Ǵ� Triangle, Rectangle Ŭ������ ����

// Shape���� void Draw() ��� �޼��尡 ����
// Shape -> ������ �׸��ϴ�. ��� ����ϴ� ���
// Triangle -> �ﰢ���� �׸��ϴ�. ��� ����ϴ� ���
// Rectangle -> �簢���� �׸��ϴ�. ��� ����ϴ� ���

// Ŭ���� ���ǰ� ���� ��, �ﰢ��/�簢���� �ν��Ͻ��� �����ϰ�
// ���̽� Ŭ���� Ÿ���� ������ ���� ��, Draw�� ȣ���Ͽ�
// �������� �ٸ� ����� ��µǰ� ��

#include <iostream>
using namespace std;

class Shape
{
public:
	virtual void Draw()
	{
		cout << "������ �׸��ϴ�." << endl;
	}
};

class Triangle : public Shape
{
public:
	virtual void Draw() override
	{
		cout << "�ﰢ���� �׸��ϴ�." << endl;
	}
};

class Rectangle : public Shape
{
public:
	virtual void Draw() override
	{
		cout << "�簢���� �׸��ϴ�." << endl;
	}
};

void main()
{
	// �������� ����ϴ� ����
	// ������ Ÿ������ ���� �������� ������ ���� ��
	// ��� ���ϰ� �ϱ� ����

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

