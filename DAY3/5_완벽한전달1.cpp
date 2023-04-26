// 7_완벽한전달1 - 113 page
#include <iostream>

void foo(int a)  {}
void goo(int& a) { a = 100; }

// 완벽한 전달(perfect forwarding)
// => 전달 받은 인자를 다른 함수에 다시 전달(forwarding) 할때
// => 어떠한 변화도 없이 완벽하게 전달하는 기술

// 1. 복사본이 생성되면 안된다.
// 
// 함수의 수행시간을 측정하는 함수
template<typename F, typename T>
void chronometry(F f, const T& arg)
{
	// <<===== 시간 기록
	f(arg); // 함수 실행후
	// <<===== 수행 시간 출력
}

int main()
{
	int n = 10;

	chronometry(foo, 10); // foo(10);
	chronometry(goo, n);  // goo(n);

	std::cout << n << std::endl;
}
