#include "Student.h"

void main()
{
	Student student("철수", 20);
	// 베이스에 있는 메서드와 동일한 형태의 메서드를
	// 파생 클래스에서 작성할 경우,
	// 베이스에 작성된 메서드는 가려지게 된다.
	student.PrintInfo();
}