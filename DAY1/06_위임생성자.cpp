#include <iostream>
// 6_위임생성자 - 24page
class Point // : public Base
{
public:
	int x, y;
public:
	// 사용자 코드	// 컴파일러가 추가한 기반 클래스 생성자 호출 코드
	//Point()			// : Base()

	Point() : Point(0, 0) // C++11 부터 제공되는 위임 생성자 문법
	{
		// 생성자안에서 다른 생성자 호출 ??
		// => 안됩니다.(C++98 까지)
		// Point(0, 0);	// ok
						// 하지만, 다른 생성자를 호출하는게 아니라
						// 임시객체를 만드는 표기법 입니다.
	}

	Point(int a, int b) : x(a), y(b)	// : Base()
	{
		// 복잡한 초기화 코드
	}
};
int main()
{
	Point p;
	std::cout << p.x << std::endl;

}

