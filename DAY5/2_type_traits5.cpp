// traits5.cpp - 1번 복사해오세요
#include <iostream>
#include <type_traits>

template<typename T> 
void printv(const T& v)
{
//	if ( std::is_pointer_v<T> )

	if constexpr (std::is_pointer_v<T>)
		std::cout << v << " : " << *v << std::endl;
	else
		std::cout << v << std::endl;
}

int main()
{
	int n = 10;

	printv(n); //<!!
	printv(&n);
}

