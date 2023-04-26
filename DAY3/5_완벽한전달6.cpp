#include <iostream>

void f0() {}
void f1(int a) {}
int& f3(int a, double d, int& r) { return r; }

// �ڵ� ����
// 1. ���ڰ� �Ѱ��� �ƴ� �������� �Ϻ��� ���޵Ǿ�� �մϴ�.
// => �������� ���ø����� ����� ���� ����

// 2. ���ϰ��� �Ϻ��� �����ִ� ���� �����ϴ�.
// => decltype(auto) ����� ��ȯ

template<typename F, typename ... T>
decltype(auto) chronometry(F f, T&& ... arg)
{
	return f(std::forward<T>(arg)... );
}
int main()
{
	int n = 10;
	
	chronometry(f0);
	chronometry(f1, 3);
	int& ret = chronometry(f3, 3, 2.1, n);
	ret = 100;

	std::cout << n << std::endl; // 100
}
