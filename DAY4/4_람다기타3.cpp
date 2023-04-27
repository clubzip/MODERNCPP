#include <iostream>

int main()
{
	auto swap = [](auto& a, auto& b) { auto tmp = std::move(a); 
										   a = std::move(b); 
										   b = std::move(tmp); };

	int n = 10;
	double d = 3.4;

	swap(n, d); //

	// C++14 generic ���� : ���ڰ� ���� �ٸ� ���ø�!!!
	// C++20 template ���ٰ� ���ԵǾ����ϴ�.

	auto swap2 = []<typename T>(T& a, T& b) { T tmp = std::move(a);
										a = std::move(b);
										b = std::move(tmp); };
	swap2(n, d); // error
}