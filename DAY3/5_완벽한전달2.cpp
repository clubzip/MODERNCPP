// 7_�Ϻ�������1 - 113 page
#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }

// �ٽ� 1. int&, int&& �������� 2���� �����ؾ� �Ѵ�.
//     2. �׷��� �Ʒ� �ڵ忡�� �Ѱ����� ������ �ִ�

void hoo(int&&) {}

template<typename F> void chronometry(F f, int& arg )
{
	f(arg); 
}
template<typename F> void chronometry(F f, int&& arg)
{
	f(arg);
}

int main()
{
	int n = 10;

	chronometry(foo, 10);
	chronometry(goo, n); 

	hoo(10); // ok.. �ߵȴ�..
	chronometry(hoo, 10); // �ߵǾ�� �ϴµ� !! �����̴�.!!��???
						  // �����ҽ����� �ذ�

	std::cout << n << std::endl;
}
