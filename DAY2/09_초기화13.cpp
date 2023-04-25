// 1_초기화11 - 65 page..
// aggregate initialization

// aggregate 타입
// => 생성자가 없어도 중괄호로 초기화 가능한 타입
// => C 배열, 구조체 등..

struct Point
{
	int x, y;

	//	Point()             : x(0), y(0) {}	// 1
	//	Point(int a, int b) : x(a), y(b) {}	// 2

	void foo() {} // 멤버 함수가 있어도 - aggregate 타입 입니다.
	
//	virtual void goo() {} // 가상함수가 있으면 - aggregate 타입 아닙

//	Point() {}	// 사용자가 만든 생성자가 있을때
				// => aggregate 타입 아닙니다.

	Point() = default;
};

int main()
{
	Point p1;	
	Point p2 = { 1, 2 };
}
