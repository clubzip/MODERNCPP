// 1_타입추론1-1.cpp   -2번 복사해오세요
#include <iostream>

template<typename T> void foo(T a)
{
	// T의 타입을 확인하는 방법
	// 1. RTTI 기술 사용
	// => 사용하지 마세요
	// => C++ RTTI 는 const, volatile, reference 를 제거한
	//    타입의 이름이 출력됩니다.
	std::cout << typeid(T).name() << std::endl;
}

int main()
{
	// 타입을 명시적으로 전달
	foo<int>(3);
	foo<double>(3);
	foo<const int>(3);
}