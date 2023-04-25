// 3_임시객체1 - 77 page
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// 임시객체의 특징 - 79 page
int main()
{
	Point pt(1, 2);
	
	// 특징 1.
	pt.x = 10;			// ok	
	Point(1, 2).x = 10;	// error. 임시객체는 등호의 왼쪽에
						// 올수 없다. lvalue가 될수 없다.
						// 임시객체는 rvalue 이다.
						
	// 2. 
	Point* p1 = &pt;	// ok		
	Point* p2 = &Point(1, 2);	// error.
								// 임시객체는 주소연산자로
								// 주소를 구할수 없다.
	// 규칙 3
	Point& r1 = pt;				// ok	
	Point& r2 = Point(1, 2);	// error. 임시객체를
								// non-const reference로
								// 가리킬수 없다.
	

	// 규칙 4
	const Point& r3 = Point(1, 2); // ok
						// 임시객체 라도 상수 참조로는 가리킬수
						// 있다.
						// 이 경우 임시객체의 수명이 r3의 수명으로
						// 연장됩니다.
						// "lifetime extension"
	r3.x = 10; // error. r3는 상수참조
}





