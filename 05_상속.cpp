
// ���(Rose) �� ƫ�� (Tulip) Ŭ������ ����
// Flower Ŭ�������� �Ļ� ��

// Flower���� protected�� ���� �̸��� ���ݿ� ����
// �����͸� ���� �ʵ尡 ����

// ���� Ŭ������ ������ ��, Rose/Tulip�� �ν��Ͻ���
// �����Ҵ��Ͽ� ���� ��, �� ���� �̸��� ������ ���

// output
// �̸� : ���
// ����� ���� : 100��

// �̸� : ƫ��
// ƫ���� ���� : 200��

#include "Tulip.h"
#include "Rose.h"

void main()
{
	Rose* rose = new Rose("���", 100);
	Tulip* tulip = new Tulip("ƫ��", 200);

	rose->Print();
	tulip->Print();

	delete rose;
	delete tulip;
	rose = nullptr;
	tulip = nullptr;
}