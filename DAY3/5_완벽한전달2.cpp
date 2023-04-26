// 7_완벽한전달1 - 113 page
#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }

// 핵심 1. int&, int&& 버전으로 2개를 제공해야 한다.
//     2. 그런데 아래 코드에는 한가지의 문제가 있다

void hoo(int&&) {}

template<typename F> void chronometry(F f, int& arg )
{
	f(arg); 
}
template<typename F> void chronometry(F f, int&& arg)
{
	f(arg);
}

int main()
{
	int n = 10;

	chronometry(foo, 10);
	chronometry(goo, n); 

	hoo(10); // ok.. 잘된다..
	chronometry(hoo, 10); // 잘되어야 하는데 !! 에러이다.!!왜???
						  // 다음소스에서 해결

	std::cout << n << std::endl;
}
