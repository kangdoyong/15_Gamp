#pragma once
#include "IReceiveMessage.h"

// 메세지와 관련된 기능을 갖는 인터페이스
interface IMessage : public IReceiveMessage
{
	// IReceiveMessage를 상속받았으므로, 메세지를 받는 기능을 갖고 있음

	// 메세지 전송 기능 (phone 파라미터 <- 수신자)
	virtual void SendMsg(IMessage* phone) abstract;
	virtual ~IMessage() {}
};