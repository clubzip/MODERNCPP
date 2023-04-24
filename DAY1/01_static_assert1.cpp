#include <cassert> // assert() 때문에 필요

// C assert      : 실행시간에 값의 유효성 확인
// static_assert : 컴파일 시간에 표현식의 유효성 확인

// 1. 함수안 또는 밖에 있어도 됩니다.
// 2. 표현식은 반드시 컴파일 할때 조사 가능해야 합니다.
// 3. 컴파일시만 사용, 실행시 오버헤드 없습니다. 많이 사용하세요..
//    => C++ 키워드 입니다. 
// 4. 안전한 코드를 만들기 위한 도구일뿐, 실행시간에 동작하는 것은 아닙니다.
static_assert(sizeof(int*) == 8, "error not 64 bit");


void foo(int age)
{
	// 함수 인자는 사용하기 전에 유효성 여부 확인
	// 하는 것이 좋습니다.
	assert(age > 0);

	int* p = new int[age];

	delete[] p;
}
int main()
{
	foo(10);
//	foo(-10); // 실수로 음수 전달
}