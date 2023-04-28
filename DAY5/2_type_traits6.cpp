#include <iostream>
#include <type_traits>

int main()
{
	int n = 10;
	
	// lvalue ? rvalue �����ϴ� ��
	// => "n+n" �� rvalue ���� lvalue ���� �˰� �ʹ�.

	bool b1 = std::is_lvalue_reference< decltype(( n + n )) >::value;
	bool b2 = std::is_lvalue_reference_v< decltype((n + n)) >; // C++17

	if (std::is_lvalue_reference_v <  decltype((n + n)) >)
	{
		std::cout << "lvalue" << std::endl;
	}
}