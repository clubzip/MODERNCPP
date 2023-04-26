#include <string>

int main()
{
	// 1. primitive type(int, double등 표준타입)의 객체는
	//    std::move()를 사용해도 되지만, 아무런 효과는 없습니다.
	int n1 = 10;
	int n2 = std::move(n1);
}