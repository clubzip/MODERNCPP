#include <iostream>
#include <type_traits>

// ������ �ִ� ����� ���ϴ� �Լ�
template<typename T> T gcd(T a, T b)
{
	static_assert(std::is_integral_v<T>,
				"error T is not integer");

	return 0; // ��������..
}
double gcd(double a, double b)
{
	std::cout << "double" << std::endl;
	return 0;
}
int main()
{
	gcd(6, 9);
	gcd(3.1,  5.4);
	gcd(3.1f, 5.4f);
}