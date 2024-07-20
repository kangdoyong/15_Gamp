#include "MyWindow.h"

void MyWindow::SetPower(Power power)
{
	switch (power)
	{
		case Machine::On:
			cout << "전원을 켭니다." << endl;
			break;
		case Machine::Off:
			cout << "전원을 끕니다." << endl;
			break;
	} 
}

void MyWindow::Coding()
{
	cout << "코딩을 합니다." << endl;
}
