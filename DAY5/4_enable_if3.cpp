#include <iostream>
#include <type_traits>

// std::enable_if<조건, T>::type 의 의미를 생각해 보세요
// 조건 true  : "::type" 은 T
// 조건 false : "::type" 이 없다

template<typename T> 

typename std::enable_if< std::is_integral_v<T>, T>::type

gcd(T a, T b)
{
	return 0; .
}




double gcd(double a, double b)
{
	std::cout << "double" << std::endl;
	return 0;
}
int main()
{
	gcd(6, 9);
	gcd(3.1, 5.4);
	gcd(3.1f, 5.4f);
}