#include "MyWindow.h"

void main()
{
	MyWindow* window = new MyWindow;

	window->SetPower(Machine::Power::On);

	window->Coding();
	window->Repair();

	window->SetPower(Machine::Power::Off);

	delete window;
	window = nullptr;
}