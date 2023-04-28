#include <iostream>
#include <vector>

std::vector<int> v;

template<typename ... Types>
void foo(Types ... args)
{
	// 핵심 1. 초기값은 0 뿐 아니라 어떠한 객체라도 사용가능합니다.
	//        이항 연산자는 + 뿐 아니라 대부분 연산자도 가능하고
	//        C++은 연산자 재정의 기술이 있으므로 어떤 일도 할수 있습니다.
	(std::cout << ... << args);

}

int main()
{
	foo(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
}



