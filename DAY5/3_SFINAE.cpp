// 5_SFINAE - 
#include <iostream>

//template<typename T> 
//void foo(T a)   { std::cout << "T" << std::endl; }

// void foo(int a) { std::cout << "int" << std::endl; }

//void foo(...)   { std::cout << "..." << std::endl; }

int main()
{
	foo(3); // 1. foo(int) => exactly matching 이라고합니다.
			// 2. T.   템플릿으로 foo(int) 생성
			// 3. ...
			// 4. 함수가 없다고 에러
}