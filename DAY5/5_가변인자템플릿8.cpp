// 7_�����������ø�7
#include <iostream>

void foo(int a, int b, int& c) { c = 100; }

// �Ʒ� chronometry �� ���ڶ� �Ѱ��� �Լ��� forwarding �մϴ�.
/*
template<typename F, typename T>
decltype(auto) chronometry(F f, T&& args)
{
	return f( std::forward<T>(arg)); 
}
*/

template<typename F, typename ... Types>
decltype(auto) chronometry(F f, Types&& ... args)
{
//	return f( std::forward<T>(args...) ); // forward �� ���ڰ� 3��

	return f(std::forward<Types>(args)...);
		// f(std::forward<T1>(E1), 
		//   std::forward<T2>(E2),
		//   std::forward<T2>(E3));
}
// �������� ���ø��� ����ϴ� �뵵�� ���� ������ �ֽ��ϴ�.
// 1. ���� ���� �Ϻ��� ���ޱ��
// 2. tuple ���� Ŭ���� ���鶧..
// => �׷���, ���� ���� ������ �Լ��� ���鶧�� ����ϸ� �˴ϴ�.


int main()
{
	int n = 10;
	chronometry(foo, 1, 2, n);

	std::cout << n << std::endl;
}

