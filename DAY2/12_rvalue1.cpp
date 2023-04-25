// 4_rvalue - 87 page
int x = 0;
int  foo() {	return x;}
int& goo() { return x; }

// lvalue : 등호에 왼쪽에 올수 있는 것
//		    이름이 있고, 단일식을 넘어서 사용가능
//		    & 연산자로 주소를 구할수 있다
//			참조를 반환하는 함수
// 
// rvalue : 등호에 왼쪽에 올수 없는 것
//		    이름이 없고, 단일식에서만 사용가능
//			&연산자로 주소를 구할수 없다
//			값을 반환하는 함수
//			리터럴(10, 3.4등), 임시객체
int main()
{
	int v1 = 10, v2 = 10;

	v1 = 10;	// v1 : lvalue, 10 : rvalue
	10 = v1;
	v2 = v1;
	int* p1 = &v1; // ok
	int* p2 = &10; // error. 

	foo() = 10; // error
	goo() = 10; // ok

	//---------------------------------------
	const int c = 0;
	c = 20;		// c는 lvalue ? rvalue ?
				// immutable 한 lvalue 라고 합니다.

	// 모든 rvalue 는 상수이다 ?? => 아닙니다.
//	Point(1, 1).x = 10; // error !!
						// 임시객체는 상수 아닙니다.
						// 문법상 왼쪽에 못오는것
//	Point(1, 1).set(10, 20); // ok
}









