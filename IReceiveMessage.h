#pragma once
#include <iostream>
using namespace std;
#include <combaseapi.h>

// 전방 선언
class Phone;
// 포워드 선언이라고도 합니다.
// 선언한 클래스가 존재한다는 것을 알립니다.
// 사용하는 이유?
// - Phone.h에서 IReceiveMessage를 구현해야하므로 IReceiveMessage.h를 포함함.
// - IReceiveMessage.h 에서 Phone 클래스를 인식 시키기 위해 Phone.h를 포함함.
// 결과 : Phone.h 와 IReceiveMessage.h 사이에서 교차 참조가 일어남 -> 컴파일 실패
// 이런 문제를 해결하기 위해 전방 선언을 사용

// 메세지를 받는 기능을 갖는 인터페이스
interface IReceiveMessage
{
	virtual void ReceiveMessage(Phone* phone, string text) abstract;
};

