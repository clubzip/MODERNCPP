#include <iostream>

// 템플릿에서의 타입추론..
// 아래 3가지를 알면 됩니다
// 1. 인자가 값 타입일때  : void foo(T)
// 2. 인자가 참조 타입일때 : void foo(T&)
// 3. 인자가 T&& 타입일때 : void foo(T&&) - 내일 오전

// 규칙 1. 인자가 값 타입(T) 일때
// => 함수 인자가 가지고 있는 "const, volatile, reference를
//    모두 제거후 T의 타입을 결정
template<typename T> void foo(T a)
{
	a = 100;
}
int main()
{
	// T의 타입을 예측해 보세요
	foo(10);	// T=int
	foo(3.4);	// T=double

	int n = 10;
	int& r = n;
	const int c = 10;
	const int& cr = c;
	
	foo(n); // T = int
	foo(c); // T = int
	foo(r); // T = int
	foo(cr);// T = int
}