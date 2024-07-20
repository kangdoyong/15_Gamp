#include "Phone.h"

Phone::Phone(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Phone::Call(string phoneNumber)
{
	cout << phoneNumber << "�� ��ȭ�� �̴ϴ�." << endl;
}

void Phone::ReceiveMessage(Phone* phone, string text)
{
	cout << "- �޼��� ���� �˸� -" << endl;
	cout << phone->GetPhoneNumber() << "�κ��� �޼����� �Խ��ϴ�." << endl;
	cout << "���� : " << text << endl;
}

void Phone::SendMsg(IMessage* phone)
{
	cout << "�޼��� ������ �ۼ����ּ���." << endl;
	char buffer[256];
	cin.getline(buffer, _countof(buffer), '\n');
	phone->ReceiveMessage(this, buffer);
}
