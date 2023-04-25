#include <iostream>
#include <type_traits>

// lvalue 인지 rvalue 인지 조사하는 방법
// 원리 : decltype(exp) => exp가 lvalue 라면 참조 타입!

int main()
{
	int n = 0;

	(n = 20) = 10;

	decltype()
}