// 복사생성자 모양을 생각해 봅시다.
class Point
{
	int x, y;
public:
	Point() {}				// 1
	Point(int a, int b) {}	// 2

	// 복사 생성자의 정확한 모양을 이해해 봅시다.
	// 방법 1. call by value
	// => 인자를 받을때 모양이 "Point pt = p2" 인데..
	//    이때 다시 복사 생성자가 호출됩니다.
	// => 결국, 복사 생성자가 무한히 호출되는 코드..
	//    컴파일 에러!!
	// => 복사 생성자의 인자는 call by value 가 될수 없습니다.
	// Point(Point pt) {} // Point pt = p2

	// 방법 2. call by non-const lvalue reference
	// => 에러는 아니고, 컴파일 가능.
	// => 단, lvalue 만 받을수 있고 rvalue(임시객체)를 받을수 없다.
	// => 값타입으로 반환하는 함수의 결과를 받을수 없다.
	//    Point ret = foo(); // error
	//Point(Point& pt) {} // "Point& pt = p2" 

	// 방법 3. call by const lvalue reference
	Point(const Point& pt) : x(pt.x), y(pt.y) {}
};

Point foo()
{
	Point pt(0, 0);
	return pt;
}
int main()
{
	Point p1;		
	Point p2(1, 2); 
	Point p3(p2);	// 복사 생성자 사용. 
	Point p4 = foo(); // Point p4( foo() );
}




