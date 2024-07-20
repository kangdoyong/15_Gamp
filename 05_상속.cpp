
// 장미(Rose) 와 튤립 (Tulip) 클래스가 있음
// Flower 클래스에서 파생 됨

// Flower에는 protected로 꽃의 이름과 가격에 대한
// 데이터를 갖는 필드가 존재

// 위의 클래스들 정의한 후, Rose/Tulip의 인스턴스를
// 동적할당하여 생성 후, 두 꽃의 이름과 가격을 출력

// output
// 이름 : 장미
// 장미의 가격 : 100원

// 이름 : 튤립
// 튤립의 가격 : 200원

#include "Tulip.h"
#include "Rose.h"

void main()
{
	Rose* rose = new Rose("장미", 100);
	Tulip* tulip = new Tulip("튤립", 200);

	rose->Print();
	tulip->Print();

	delete rose;
	delete tulip;
	rose = nullptr;
	tulip = nullptr;
}