#include <iostream>

// auto �� ���� ǥ����
int main()
{
	// �ٽ� 1. ���� ǥ������ auto ������ ��Ƽ� �Ϲ��Լ� ó��
	//        ��밡��
	auto f = [](int a, int b) { return a + b; };
			// class xxx { operator();}; xxx();

	int n1 = f(1, 2); //  1 + 2
	int n2 = f.operator()(1, 2); // ok.  
								 // �ᱹ f�� �Լ� ��ü �̹Ƿ�
								 // �̷��� ��뵵 ����
	//--------------------------------
	// ������ ������ ��� ��� ������

	auto f1 = [](int a, int b) { return a + b; }; // ok
	
	auto& f2 = [](int a, int b) { return a + b; }; // error

	const auto& f3 = [](int a, int b) { return a + b; }; // ok
	
	auto&& f4 = [](int a, int b) { return a + b; }; // ok

	// �� 4�� ���� "���� ���� ���� f1" �Դϴ�.. f1 ���� ����ϼ���.
}

