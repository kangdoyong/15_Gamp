#pragma once
#include "ICall.h"
#include "IMessage.h"

class Phone : public ICall, public IMessage
{
private:
	string phoneNumber;

public:
	Phone(string phoneNumber);

public:
	// ICall��(��) ���� ��ӵ�
	void Call(string phoneNumber) override;

	// IMessage��(��) ���� ��ӵ�
	void ReceiveMessage(Phone* phone, string text) override;
	void SendMsg(IMessage* phone) override;
	
	string GetPhoneNumber() { return phoneNumber; }
};

