#include <iostream>

template<typename ... Types> void foo(Types ... args)
{
	// foo(1,2,3) ���� ����ߴٸ�
	// 
	// 1. ��� �˾� �μ���
	// Types : int, int, int  => template parameter pack
	// args  : 1, 2, 3        => function parameter pack

	// 2. pack �� �ִ� ���� ����
	std::cout << sizeof...(Types) << std::endl;
	std::cout << sizeof...(args) << std::endl;
}

int main()
{
	foo(1, 2, 3);
}