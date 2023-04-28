#include <iostream>

int hoo(int a) { return -a; }

void goo(int a, int b, int c) {}

template<typename ... Types> void foo(Types ... args)
{
	// foo(1,2,3) �̹Ƿ�
	// args : 1, 2, 3

//	goo(args); // error. pack �̸��� ���ڷ� ����Ҽ� �����ϴ�.


	// �ٽ� 1. pack expansion : pack���� ��Ҹ� , �� �����ϴ°�

	// "pack �̸��� ����ϴ� ����"... => "E1����", "E2����", "E3����"

	goo(args...); // ok.  goo(E1, E2, E3) �� �ǹ�

	goo((++args)...);	// ok. goo( ++E1, ++E2, ++E3)
						// <= () ��� �˴ϴ�.

//	goo( hoo(args...)); // goo(hoo(E1,E2,E3)) �ε�.. hoo �� ���ڰ� �Ѱ�
						// ���� error

	goo( hoo(args)...); // goo(hoo(E1), hoo(E2), hoo(E3))
}


int main()
{
	foo(1, 2, 3);
}
