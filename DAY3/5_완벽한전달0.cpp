#include <iostream>

void foo(int& a)		{ std::cout << "int&" << std::endl; }		// 1
void foo(const int& a)	{ std::cout << "const int&" << std::endl; }	// 2
void foo(int&& a)		{ std::cout << "int&&" << std::endl; }		// 3

int main()
{
	foo(10);	// 3
	int&& r = 10;
	
	foo(r);		// 1
				// int&& r = 10 ���� 
				// "10 �� rvalue ���� r �� lvalue" �Դϴ�.
				// "�̸��� �ְ� ���Ͻ��� ����� ��밡��
				// 
	// Ÿ�԰� value �Ӽ��� ȥ������ ������
	int n = 0;

	//			Ÿ��			value �Ӽ�
	//  n		int			lvalue
	//  n+1		int			rvalue
	//  10		int			rvalue
	//	r		int&&		lvalue

	// foo(int&) : ���ڷ� int& Ÿ���� �ްڴٴ� ���� �ƴ϶�
	//			   ���ڷ� lvalue �� �ްڴٴ� ��
	// foo(int&&): ���ڷ� rvalue �� �ްڴٴ� ��
	int&& r2 = 10;

	foo(r2); // foo(int&) ȣ��
	
	foo(static_cast<int&&>(r2)); // foo(int&&) ȣ��
			// r2�� Ÿ���� int&& �ε� ���� Ÿ���� int&&�� 
			// ĳ�����ϴ°� �ƴѰ��� ????

		// static_cast<Ÿ��&&> : Ÿ�� ĳ������ �ƴ�
		//						value �Ӽ��� �����ϴ� ĳ����
		//						lvalue => rvalue�� ĳ����
}







