#include <iostream>
#include <type_traits>

// C++���� enable_if �� ���̺귯�� ������ �ٽ� ����� �Ǿ����ϴ�.

// �׷��� C++20 ���� 
// enable_if �� ���� ������Ų "Concept" �� ���Ե˴ϴ�.

/*
template<typename T> requires (!std::is_pointer_v<T>)
void printv(const T& v)
{
	std::cout << v << " : " << *v << std::endl;
}

template<typename T> requires (std::is_pointer_v<T>)
void printv(const T& v)
{
	std::cout << v << std::endl;
}
*/

// C++20 ���ʹ� �����δ� �Ʒ� ó�� �մϴ�
template<typename T>
concept pointer = std::is_pointer_v<T>;

void printv( pointer auto v)
{
	std::cout << v << " : " << *v << std::endl;
}

void printv(auto v)
{
	std::cout << v << std::endl;
}


int main()
{
	int n = 10;

	printv(n); //<!!
	printv(&n);
}

