// 6_����_��������ĸ��1 - 146
#include <iostream>

int g = 10;

int main()
{
	

	// 1. ����ǥ���Ŀ��� ��������
	// => ok.. ����ǥ���Ŀ��� �������� ��밡��.
	auto f1 = [](int a) { return a + g; };
			 // class xxx{ operator()(int) { a + g;}}; xxx()

	// 2. ����ǥ���Ŀ��� main �������� ��� 
	// => �⺻�����δ� ���� �Ҽ� ����.
	// => �����Ϸ��� ĸ���ؾ� �Ѵ�.
	int v1 = 10, v2 = 10;

//	auto f2 = [](int a) { return a + v1 + v2; }; // error
	auto f3 = [v1, v2](int a) { return a + v1 + v2; }; // ok

	auto f4 = [v1, v2](int a) { v1 = 100; return a; }; // error
									// ���� �ȵ�.

	auto f5 = [v1, v2](int a) mutable { v1 = 100; return a; };//ok
}





