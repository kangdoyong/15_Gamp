#pragma once
#include "IReceiveMessage.h"

// �޼����� ���õ� ����� ���� �������̽�
interface IMessage : public IReceiveMessage
{
	// IReceiveMessage�� ��ӹ޾����Ƿ�, �޼����� �޴� ����� ���� ����

	// �޼��� ���� ��� (phone �Ķ���� <- ������)
	virtual void SendMsg(IMessage* phone) abstract;
	virtual ~IMessage() {}
};