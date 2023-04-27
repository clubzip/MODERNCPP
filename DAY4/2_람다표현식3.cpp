#include <iostream>

// auto 와 람다 표현식
int main()
{
	// 핵심 1. 람다 표현식을 auto 변수에 담아서 일반함수 처럼
	//        사용가능
	auto f = [](int a, int b) { return a + b; };
			// class xxx { operator();}; xxx();

	int n1 = f(1, 2); //  1 + 2
	int n2 = f.operator()(1, 2); // ok.  
								 // 결국 f는 함수 객체 이므로
								 // 이렇게 사용도 가능
	//--------------------------------
	// 다음중 에러를 모두 골라 보세요

	auto f1 = [](int a, int b) { return a + b; }; // ok
	
	auto& f2 = [](int a, int b) { return a + b; }; // error

	const auto& f3 = [](int a, int b) { return a + b; }; // ok
	
	auto&& f4 = [](int a, int b) { return a + b; }; // ok

	// 위 4줄 에서 "제일 좋은 것은 f1" 입니다.. f1 으로 사용하세요.
}

