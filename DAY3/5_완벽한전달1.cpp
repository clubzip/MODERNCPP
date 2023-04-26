// 7_�Ϻ�������1 - 113 page
#include <iostream>

void foo(int a)  {}
void goo(int& a) { a = 100; }

// �Ϻ��� ����(perfect forwarding)
// => ���� ���� ���ڸ� �ٸ� �Լ��� �ٽ� ����(forwarding) �Ҷ�
// => ��� ��ȭ�� ���� �Ϻ��ϰ� �����ϴ� ���

// 1. ���纻�� �����Ǹ� �ȵȴ�.
// 
// �Լ��� ����ð��� �����ϴ� �Լ�
template<typename F, typename T>
void chronometry(F f, const T& arg)
{
	// <<===== �ð� ���
	f(arg); // �Լ� ������
	// <<===== ���� �ð� ���
}

int main()
{
	int n = 10;

	chronometry(foo, 10); // foo(10);
	chronometry(goo, n);  // goo(n);

	std::cout << n << std::endl;
}
