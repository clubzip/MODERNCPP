// 3_noexcept - 14 page
#include <iostream>
#include <exception>

// noexcept 의 2가지 용도
// 1. 함수가 예외가 없는지 조사 
// 2. 함수가 예외가 없음을 알림

//void foo()		// 이렇게 만들면 예외 가능성이 있는 함수
void foo() noexcept	// 예외 가능성이 없다면, 함수 제작자가 알려야 한다.
{
}
void goo()
{
	if (1) // 실패
		throw std::bad_alloc();
}
int main()
{
	// noexcept(함수 호출식) : 함수가 예외가 없으면 true
	// => 컴파일 시간에 컴파일러가 조사
	// => 함수가 실제로 호출되는 것은 아님. 선언을 보고 조사
	// => 함수 선언부에 "noexcept" 가 있는가를 조사하는 것
	bool b1 = noexcept(goo()); // false
	bool b2 = noexcept(foo()); 

	std::cout << b1 << std::endl; // false
}
// 1. 왜 함수가 예외가 없음을 알리나요 ?
// => 예외가 없다면 컴파일러가 보다 좋은 최적화를 할수 있습니다.
// => 사용자가 조사해서 예외 여부에 따른 다른 코드를 작성가능합니다


// 2. 왜 예외가 없는지 조사하나요 ?
// => 예외 여부에 따라 최적화된 코드 작성 - 내일 move 배울때.. 




