#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }
void hoo(int&&) {}


/*
template<typename F> void chronometry(F f, int& arg)
{
//	f(arg);
	f(static_cast<int&>(arg)); // int& Ÿ���� int&�� ĳ�����ϹǷ�
								// �ʿ� ���� ĳ�����Դϴ�.
								// ������, �־ ��������ϴ�.
								// ������ �ÿ� ���� �˴ϴ�.
}

template<typename F> void chronometry(F f, int&& arg)
{
	f(static_cast<int&&>(arg)); 
}
*/
// T&& �� ����ϸ� ��� Ÿ�Կ� ���ؼ� �� 2�� �Լ��� �ڵ������Ҽ� �ִ�.

template<typename F, typename T> 
void chronometry(F f, T&& arg)
{
	f(static_cast<T&&>(arg));
}
int main()
{
	int n = 10;

	chronometry(foo, 10); // T=?   chronometry(  ? )
						  // static_cast<?>(arg)

	chronometry(goo, n);  // T=?   chronometry(  ? )
						  // static_cast<?>(arg)

}
