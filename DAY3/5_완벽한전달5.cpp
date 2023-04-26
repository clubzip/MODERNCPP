#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }
void hoo(int&&) {}

// 핵심 : 완벽한 전달을 하려면 
// 1. 인자를 받을때 T&& 로 받으세요
// 2. 인자를 다른 곳에 전달할때 "std::forward<T>(arg)"로 묶어서
//    전달하세요

// T&& 기술이 대부분 "완벽한 전달" 할때 사용되기 때문에
// "forwarding reference" 라고 이름을 정했습니다.

template<typename F, typename T>
void chronometry(F f, T&& arg)
{
	f( std::forward<T>(arg) ); 
}

int main()
{
	int n = 10;

	chronometry(foo, 10); 

	chronometry(goo, n);  
}
