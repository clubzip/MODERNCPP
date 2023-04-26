#include <iostream>

// 90 page
void foo(int& a)       { std::cout << "int&" << std::endl; } // 1
void foo(const int& a) { std::cout << "const int&" << std::endl; }//2
void foo(int&& a)      { std::cout << "int&&" << std::endl; }// 3

int main()
{
	int n = 10;
	foo(n);  // 1번 호출, 1번이 없으면 2번 호출
	foo(10); // 3번 호출, 3번이 없으면 2번 호출
}







