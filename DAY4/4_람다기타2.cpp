#include <iostream>
// �Լ� ���ڷ� auto �� ����Ҽ��� �����ϴ�.
// void foo(auto n) {} 

int main()
{
//	foo(1);
//	foo(3.4);
	
	auto f = [](int a, int b) { return a + b; };

	int    n = f(1, 2);
	double d = f(3.2, 3.2);

	// generic lambda : ���ڷ� auto �� ����ϴ� ����. C++14��������
	auto add = [](auto a, auto b) { return a + b; };

	std::cout << add(1,   2) << std::endl;
	std::cout << add(1.1, 2.1) << std::endl;
	std::cout << add(1,   2.1) << std::endl;
	std::cout << add(1.1, 2) << std::endl;
	
}