// 1_�ʱ�ȭ6 - 60 page
#include <iostream>

struct Point
{
	int x;
	int y;
};
int main()
{
	int n1{ 0 };	// direct initialization
	int n2 = { 0 }; // copy initialization
	int n3;			// default initialization 
					// => ���������� �����Ⱚ

	int n4{};	// value initialization	
				// => empty brace
				// => int Ÿ���̸� ��ó�� {0}���� �ϼ���

	std::cout << n4 << std::endl; // 0

	Point pt{};		// ��� ����� ��� �⺻������ �ʱ�ȭ

	std::cout << pt.x << std::endl;
}

template<typename T>
void foo(T a)
{
	T s{}; // 
}

