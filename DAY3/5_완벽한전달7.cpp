#include <iostream>
#include "stopwatch.h" // ����� �߰��ϼ���
						// git �� �ҽ� �ֽ��ϴ�. ������ ��������

int& f3(int a, double d, int& r) 
{
	std::cout << a << ", " << d << std::endl;

	return r; 
}

template<typename F, typename ... T>
decltype(auto) chronometry(F f, T&& ... arg)
{
	StopWatch sw(true); // �����ڿ��� �ð����,
						// �Ҹ��ڿ��� �ɸ��ð� ���
	return f(std::forward<T>(arg)...);
}
int main()
{
	int n = 10;

	int& ret = chronometry(f3, 3, 2.1, n);
}
