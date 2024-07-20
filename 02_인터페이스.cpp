#include "Phone.h"

void main()
{
	Phone* myPhone = new Phone("010-1234-5678");
	Phone* yourPhone = new Phone("010-9876-5432");

	myPhone->Call(yourPhone->GetPhoneNumber());
	myPhone->SendMsg(yourPhone);

	delete myPhone;
	myPhone = nullptr;
	delete yourPhone;
	yourPhone = nullptr;
}