// 5_����ǥ����5
#include <iostream>
#include <vector>
#include <algorithm>

// ����ǥ���İ� Ÿ��

int main()
{
	auto f1 = [](int a, int b) { return a + b; };
				// class xxx{};  xxx();

	auto f2 = [](int a, int b) { return a + b; };
				// class yyy{}; yyy();

	// ��� ���� ǥ������ �ٸ� Ÿ���Դϴ�.
	// => Ÿ���� �̸��� �����Ϸ����� �ٸ��ϴ�.
	std::cout << typeid(f1).name() << std::endl;
	std::cout << typeid(f2).name() << std::endl;


}





