// 1_Ÿ���߷�1-1.cpp   -2�� �����ؿ�����
#include <iostream>

template<typename T> void foo(T a)
{
}
int main()
{
	// Ÿ���� ��������� ����
	foo<int>(3);
	foo<double>(3);
	foo<const int>(3);
}