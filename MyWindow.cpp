#include "MyWindow.h"

void MyWindow::SetPower(Power power)
{
	switch (power)
	{
		case Machine::On:
			cout << "������ �մϴ�." << endl;
			break;
		case Machine::Off:
			cout << "������ ���ϴ�." << endl;
			break;
	} 
}

void MyWindow::Coding()
{
	cout << "�ڵ��� �մϴ�." << endl;
}
