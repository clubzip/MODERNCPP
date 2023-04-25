// 1_Ÿ���߷�1-1.cpp   -2�� �����ؿ�����
#include <iostream>

template<typename T> void foo(T a)
{
	// T�� Ÿ���� Ȯ���ϴ� ���
	// 1. RTTI ��� ���
	// => ������� ������
	// => C++ RTTI �� const, volatile, reference �� ������
	//    Ÿ���� �̸��� ��µ˴ϴ�.
	std::cout << typeid(T).name() << std::endl;
}

int main()
{
	// Ÿ���� ��������� ����
	foo<int>(3);
	foo<double>(3);
	foo<const int>(3);
}