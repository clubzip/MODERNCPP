#include <iostream>

template<typename T> void foo(T&& arg)
{
	// Ȯ���ϴ¹�
	// 1. godbolt.org ���� Ȯ��
	// 2. __FUNCSIG__ , __PRETTY_FUNCTION__ ���� ���
}
int main()
{
	int n = 10;

	foo(n);  // T=int&  T&&=int&
	foo(10); // T=int   T&&=int&&
}
// void foo(Point&& pt) : rvalue �� ����
// void foo(T&& pt)     : rvalue, lvalue ��� ����



