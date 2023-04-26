#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }
void hoo(int&&) {}

// �ٽ� : �Ϻ��� ������ �Ϸ��� 
// 1. ���ڸ� ������ T&& �� ��������
// 2. ���ڸ� �ٸ� ���� �����Ҷ� "std::forward<T>(arg)"�� ���
//    �����ϼ���

template<typename F, typename T>
void chronometry(F f, T&& arg)
{
	f( std::forward<T>(arg) ); 
}

int main()
{
	int n = 10;

	chronometry(foo, 10); 

	chronometry(goo, n);  
}
