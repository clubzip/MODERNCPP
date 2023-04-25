// 1_Ÿ���߷�1-1.cpp   -2�� �����ؿ�����
#include <iostream>

template<typename T> void foo(T a)
{
	// T�� Ÿ���� Ȯ���ϴ� ���
	// 1. RTTI ��� ���
	// => ������� ������
	// => C++ RTTI �� const, volatile, reference �� ������
	//    Ÿ���� �̸��� ��µ˴ϴ�.
//	std::cout << typeid(T).name() << std::endl;

	// 2. godbolt.org ���� Ȯ�� => ���� ����..


	// 3. ������ �Լ��� �̸��� ���
//	std::cout << __func__ << std::endl;
					// __func__ : �Լ� �̸��� ���

	std::cout << __FUNCSIG__ << std::endl;
					// __FUNCSIG__ : �Լ� ���ڸ� ������ �̸� ���
					//				��, VC++ ���� ��ũ��
					// __PRETTY_FUNCTION__ : g++ ���� ��ũ��

}

int main()
{
	// Ÿ���� ��������� ����
	foo<int>(3);
	foo<double>(3);
	foo<const int>(3);
}