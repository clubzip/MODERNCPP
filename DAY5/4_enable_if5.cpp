#include <iostream>
#include <type_traits>

// ���� Ÿ�� �ڸ��� "std::enable_if_t<����, ��ȯŸ��>" ǥ���غ�����

template<typename T>

void 

printv(const T& v)
{
	std::cout << v << " : " << *v << std::endl;
}

template<typename T>

void 

printv(const T& v)
{
	std::cout << v << std::endl;
}



int main()
{
	int n = 10;

	printv(n); //<!!
	printv(&n);
}

