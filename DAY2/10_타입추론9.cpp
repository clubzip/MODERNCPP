#include <iostream>

int x = 0;
int& foo(int n, double d) { return x; }

int main()
{
	auto ret = foo(1, 3.4);
	// int ret = foo(1, 3.4); // auto �� �캯�� ������ 
							  // �����ϰ� �����ϹǷ�
	ret = 200; // x�� �����Ǵ� ���� �ƴ�

	// decltype(�Լ�ȣ���) : �Լ� ȣ���� ����� ������ Ÿ��
	//						��, ��ȯ Ÿ�� ����
	decltype(foo(1, 3.4)) ret2 = foo(1, 3.4);
	// int& ret2 = foo(1, 3.4)

	// decltype(auto)
	// => auto �ڸ��� �캯�� �־�޶�
	// => �캯���� �߷��ϴµ�, ��Ģ�� decltype ��Ģ����!
	// => C++14
	decltype(auto) ret3 = foo(1, 3.4); // decltype ��Ģ
			// int& ret3 = foo(1,3.4);
			// ret3 = 200;  // �������� x = 200

	auto ret4 = foo(1, 3.4);	// auto ��Ģ(�캯��������)
			// int ret4 = foo(1,3.4);
			// ret4 = 200; // �������� ���� �ƴ�.
}