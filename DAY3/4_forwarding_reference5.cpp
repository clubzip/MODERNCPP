#include <iostream>

template<typename T> void foo(T&& arg)
{
	// 확인하는법
	// 1. godbolt.org 에서 확인
	// 2. __FUNCSIG__ , __PRETTY_FUNCTION__ 으로 출력
}
int main()
{
	int n = 10;

	foo(n);  // T=int&  T&&=int&
	foo(10); // T=int   T&&=int&&
}
// void foo(Point&& pt) : rvalue 만 가능
// void foo(T&& pt)     : rvalue, lvalue 모두 가능



