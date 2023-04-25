#include <iostream>
#include <type_traits>

// lvalue ���� rvalue ���� �����ϴ� ���
// ���� : decltype(exp) => exp�� lvalue ��� ���� Ÿ��!
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

//	decltype(n); // ��Ģ1. �̹Ƿ� int Ÿ�� �Դϴ�.rvalue �� �Ǵ��ϰ� �˴ϴ�.
//	decltype((n)); // () ������ ��Ģ 2. ���. �� =�� ���ʿ� �ü� �ִ°��� �Ǵ�

	CHECK_VALUE_CATEGORY(n);	// lvalue
	CHECK_VALUE_CATEGORY(3);	// rvaue
	CHECK_VALUE_CATEGORY(++n);	// lvalue
	CHECK_VALUE_CATEGORY(n++);	// rvalue
	CHECK_VALUE_CATEGORY(n+n);	// rvalue
	CHECK_VALUE_CATEGORY(n=20);	// lvalue

	CHECK_VALUE_CATEGORY("hello"); // �ٽ�!!. ���� ���
					// ���ڿ� ���ͷ��� lvalue �� ���� �˴ϴ�.
					// "hello" �� ����Ÿ �޸𸮸� �Ҵ�(����޸�)
					// �ؼ� ���̱� ������ �׷��� �����߽��ϴ�.
}