#include <iostream>
#include <type_traits>

// lvalue ���� rvalue ���� �����ϴ� ���
// ���� : decltype(exp) => exp�� lvalue ��� ���� Ÿ��!

int main()
{
	int n = 0;

	(n = 20) = 10;

	decltype()
}