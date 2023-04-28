#include <iostream>

// ��� 2. recursive �����ڵ�!

// 1��° ���ڴ� ������ ���� ������ ��������

void foo() {}   // ����� ���Ḧ ����(�Ʒ� C++17 �ڵ�� �ʿ����)

template<typename T, typename ... Types>
void foo(T value, Types ... args)
{
	std::cout << value << std::endl;

//	foo(args...);	// foo(3.4, 'A')
					// foo('A')
					// foo()

	// C++17 ���ʹ� �Ʒ� ó�� �ϼ���
	if constexpr (sizeof...(args) > 0)
		foo(args...);
}

int main()
{
	foo(1, 3.4, 'A');  // value : 1, args : 3.4, 'A'
}





