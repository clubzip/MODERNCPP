// 3_임시객체1 - 77 page
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};
// 임시객체와 함수 반환값 -  82 page

/*
void f1(Point  pt) {} // call by value    : 복사본 생성
void f2(Point& pt) {} // call by refernce : 복사본 생성 안됨

int main()
{
	Point p(0, 0);
	f1(p);
	f2(p);
}
*/

Point pt(1, 2);

Point foo()  // return by value  : 임시객체를 반환
{
	return pt; // pt가 반환되지 않고, pt의 복사본이 반환
}
Point& goo() // return by reference : 임시객체를 만들지 말라는의미
{
	return pt; // pt의 별명 반환
}

int main()
{
	foo().x = 10; // error. 임시객체.x = 10
	goo().x = 10; // ok.. pt.x = 10;
}

// 단, 지역변수는 절대 참조 반환하면 안됩니다.
Point& hoo()
{
	Point pt(1, 2); // 지역변수!!!
	return pt;  // 버그.. 절대 사용하면 안됩니다.
				// 전역변수이거나, 멤버 변수등.. 
				// 함수 호출뒤에도 파괴되지 않는 보장이 있어야 합니다.
}