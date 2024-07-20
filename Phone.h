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
	// ICall을(를) 통해 상속됨
	void Call(string phoneNumber) override;

	// IMessage을(를) 통해 상속됨
	void ReceiveMessage(Phone* phone, string text) override;
	void SendMsg(IMessage* phone) override;
	
	string GetPhoneNumber() { return phoneNumber; }
};

