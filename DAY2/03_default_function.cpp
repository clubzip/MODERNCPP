// 13_default_function - 41 page
#include <type_traits>
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) {}

	// 아무일도 하지 않은 인자 없는 생성자가 필요하면

	// 1. 사용자가 직접 구현부 제공
//	Point() {}	// bad

	// 2. 컴파일러에게 요청
	// => 컴파일러가 생성자를 직접 구현하므로 모든 것을 알고있다
	// => 최적화가 더욱 잘된다.
	Point() = default;	// good
};

int main()
{
	Point p1;
	Point p2(1, 2);
}




