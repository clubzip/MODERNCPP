// 145 page
#include <iostream>

int main()
{
	// ����ǥ������ ��Ȯ�� ���
	auto f1 = [](int a, int b) ->int { return a + b; };

	// 1. return ������ �Ѱ���� ���� Ÿ�� ��������
	auto f2 = [](int a, int b) { return a + b; };


	// 2. return ������ �������� ���� Ÿ���̸� ���� ����
	auto f3 = [](int a, int b) { if (a == 1) return a; 
								return b; };

	// 3. �ٸ� Ÿ���� ��ȯ�ϴ� return ���� ������ ǥ���ؾ� �Ѵ�.
	// =>�Ʒ� �ڵ�� ���� Ÿ�� ǥ������ ������ error
	auto f3 = [](int a, double b) { if (a == 1) return a;
							return b; };
}

