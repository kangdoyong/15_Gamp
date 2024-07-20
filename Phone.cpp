#include "Phone.h"

Phone::Phone(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Phone::Call(string phoneNumber)
{
	cout << phoneNumber << "로 전화를 겁니다." << endl;
}

void Phone::ReceiveMessage(Phone* phone, string text)
{
	cout << "- 메세지 도착 알림 -" << endl;
	cout << phone->GetPhoneNumber() << "로부터 메세지가 왔습니다." << endl;
	cout << "내용 : " << text << endl;
}

void Phone::SendMsg(IMessage* phone)
{
	cout << "메세지 내용을 작성해주세요." << endl;
	char buffer[256];
	cin.getline(buffer, _countof(buffer), '\n');
	phone->ReceiveMessage(this, buffer);
}
