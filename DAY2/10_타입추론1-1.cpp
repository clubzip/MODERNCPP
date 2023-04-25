// 1_타입추론1-1.cpp   -2번 복사해오세요
#include <iostream>

template<typename T> void foo(T a)
{
}
int main()
{
	// 타입을 명시적으로 전달
	foo<int>(3);
	foo<double>(3);
	foo<const int>(3);
}