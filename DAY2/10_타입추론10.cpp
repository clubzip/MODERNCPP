// ������ȯ - 73 page �Ʒ� �κ�
#include <iostream>
// 1. decltype �� ���� ����ϴ��� �˾� �μ���
// => �Ʒ� ���� ���ø����� ���� ���!

// 2. ������ �Ʒ� �ڵ�� ����..
template<typename T1, typename T2>
decltype(a * b) Mul(T1 a, T2 b) // error. a, b�� �������� ���
{
	return a * b;
}

int main()
{
	std::cout << Mul(3, 4.1)   << std::endl;

//	a = 20;	// error. ������ �������� ���
//	int a = 0;
//	a = 10; // ok. ������ �����Ŀ� ���
}

