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

//	decltype(n); // 규칙1. 이므로 int 타입 입니다.rvalue 로 판단하게 됩니다.
//	decltype((n)); // () 때문에 규칙 2. 사용. 즉 =의 왼쪽에 올수 있는가로 판단

	CHECK_VALUE_CATEGORY(n);	// lvalue
	CHECK_VALUE_CATEGORY(3);	// rvaue
	CHECK_VALUE_CATEGORY(++n);	// lvalue
	CHECK_VALUE_CATEGORY(n++);	// rvalue
	CHECK_VALUE_CATEGORY(n+n);	// rvalue
	CHECK_VALUE_CATEGORY(n=20);	// lvalue

	CHECK_VALUE_CATEGORY("hello"); // 핵심!!. 놀라운 결과
					// 문자열 리터럴은 lvalue 로 구분 됩니다.
					// "hello" 가 데이타 메모리를 할당(상수메모리)
					// 해서 놓이기 때문에 그렇게 구분했습니다.
}