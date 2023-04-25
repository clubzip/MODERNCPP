#include <iostream>

// ��Ģ 2. �Լ� ���ڰ� ����(T&) Ÿ�� �϶�
// => �Լ� ���ڰ� ���� reference �Ӽ��� �����ϴ� Ÿ�� ����
//    const, volatile�� ����!
template<typename T> void foo(T& a)
{
	std::cout << __FUNCSIG__ << std::endl; 
				// g++ : __PRETTY_FUNCTION__
}

int main()
{
	int n = 10;
	int& r = n;
	const int c = 10;
	const int& cr = c;

	foo(n);		// T = int,		  a = int&
	foo(c);		// T = const int, a = const int&
	foo(r);		// T = int,		  a = int& 
	foo(cr);	// T = const int, a = const int& 
}