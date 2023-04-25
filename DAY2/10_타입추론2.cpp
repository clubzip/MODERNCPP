#include <iostream>

// ���ø������� Ÿ���߷�..
// �Ʒ� 3������ �˸� �˴ϴ�
// 1. ���ڰ� �� Ÿ���϶�  : void foo(T)
// 2. ���ڰ� ���� Ÿ���϶� : void foo(T&)
// 3. ���ڰ� T&& Ÿ���϶� : void foo(T&&) - ���� ����

// ��Ģ 1. ���ڰ� �� Ÿ��(T) �϶�
// => �Լ� ���ڰ� ������ �ִ� "const, volatile, reference��
//    ��� ������ T�� Ÿ���� ����
template<typename T> void foo(T a)
{
	a = 100;
}
int main()
{
	// T�� Ÿ���� ������ ������
	foo(10);	// T=int
	foo(3.4);	// T=double

	int n = 10;
	int& r = n;
	const int c = 10;
	const int& cr = c;
	
	foo(n); // T = int
	foo(c); // T = int
	foo(r); // T = int
	foo(cr);// T = int
}