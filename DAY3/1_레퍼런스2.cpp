#include <iostream>

// 90 page
void foo(int& a)       { std::cout << "int&" << std::endl; } // 1
void foo(const int& a) { std::cout << "const int&" << std::endl; }//2
void foo(int&& a)      { std::cout << "int&&" << std::endl; }// 3

int main()
{
	int n = 10;
	foo(n);  // 1�� ȣ��, 1���� ������ 2�� ȣ��
	foo(10); // 3�� ȣ��, 3���� ������ 2�� ȣ��
}







