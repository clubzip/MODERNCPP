// 5_SFINAE - 
#include <iostream>

//template<typename T> 
// void foo(T a)   { std::cout << "T" << std::endl; }

// void foo(int a) { std::cout << "int" << std::endl; }

// void foo(...)   { std::cout << "..." << std::endl; }

int main()
{
	foo(3); // 1. foo(int) => exactly matching �̶���մϴ�.
			// 2. T.   ���ø����� foo(int) ����
			// 3. ...
			// 4. �Լ��� ���ٰ� ����

	// ���� �̸��� �Լ��� ������ ������ ã�� ����
	// => overloading resolution
	// => ��Ģ�� ����� ���� �մϴ�.
}