#include <iostream>
#include <type_traits>

// lvalue 인지 rvalue 인지 조사하는 방법
// 원리 : decltype(exp) => exp가 lvalue 라면 참조 타입!
/*
int main()
{
	int n = 0;

	(n = 20) = 10;

//	using exp_type = decltype(n = 20);

	if (std::is_lvalue_reference<decltype(( n ))>::value)
		std::cout << "lvalue" << std::endl;
	else
		std::cout << "rvalue" << std::endl;
}
*/
#define CHECK_VALUE_CATEGORY( ... )								\
if (std::is_lvalue_reference<decltype(( __VA_ARGS__ ))>::value)	\
	std::cout << "lvalue" << std::endl;							\
else                                                            \
	std::cout << "rvalue" << std::endl;

int main()
{
	int n = 10;

	CHECK_VALUE_CATEGORY(n);
	CHECK_VALUE_CATEGORY(3);
	CHECK_VALUE_CATEGORY(++n);
	CHECK_VALUE_CATEGORY(n++);
	CHECK_VALUE_CATEGORY(n + n);
	CHECK_VALUE_CATEGORY(n=20);

	CHECK_VALUE_CATEGORY("hello"); // 핵심!!. 놀라운 결과
}