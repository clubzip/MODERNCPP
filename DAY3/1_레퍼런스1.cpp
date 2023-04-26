struct Point
{
	int x, y;
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point pt(0, 0);

	// 규칙 1. non-const lvalue reference 는 lvalue 만 가리킬수 있다
	Point& r1 = pt;			// ok 
	Point& r2 = Point(0, 0);// error

	// 규칙 2. const lvalue reference 는 lvalue, rvalue를 모두
	//        가리킬수 있다
	const Point& r3 = pt;			// ok
	const Point& r4 = Point(0, 0);	// ok

	// 규칙 3. rvalue reference 는 rvalue 만 가리킬수 있다.
	// => 상수성 없이 임시객체(rvalue)를 가리킬수 있다
	// => move, 완벽한 전달을 위해서 필요.. C++11
	Point&& r5 = pt;			// error
	Point&& r6 = Point(0, 0);	// ok

	// const Point&& 는 왜 안 배우나요 ?
	// => rvalue 만 가리키는데, 사용하는 경우가 없습니다...
	// => move 배운후 설명
}




void draw_line(const Point& from, const Point& to)
{
	// pt 가 가리키는 객체를 읽기만
}

void init_point(Point& pt)
{
	// pt 가 가리키는 객체를 변경
	pt.x = 10;
	pt.y = 10;
}


