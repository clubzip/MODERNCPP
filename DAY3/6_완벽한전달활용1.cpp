// 8_완벽한전달활용
#include <iostream>
#include <vector>

class Point
{
	int x, y;
public:
	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl; }
	Point(const Point&) { std::cout << "copy ctor" << std::endl; }
};
int main()
{
	std::vector<Point> v;
	
	// vector에 요소 넣기. 
	// 1. 이름있는 객체를 만들어서 넣기
//	Point pt(1, 2);
//	v.push_back(pt);

	// 2. 임시객체를 만들어서 넣기
	// v.push_back( Point(1, 2) );


	// 3.핵심!!! 객체를 만들어서 전달하지 말고
	// 객체를 만들기 위한 인자를 전달하자!!

	v.emplace_back(1, 2);


	std::cout << "-----" << std::endl;
}


