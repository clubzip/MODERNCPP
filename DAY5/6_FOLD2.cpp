#include <iostream>
#include <vector>

std::vector<int> v;

template<typename ... Types>
void foo(Types ... args)
{
	// �ٽ� 1. �ʱⰪ�� 0 �� �ƴ϶� ��� ��ü�� ��밡���մϴ�.
	//        ���� �����ڴ� + �� �ƴ϶� ��κ� �����ڵ� �����ϰ�
	//        C++�� ������ ������ ����� �����Ƿ� � �ϵ� �Ҽ� �ֽ��ϴ�.
	// (std::cout << ... << args);
	// (0      +  ...  + args)
	// (((( std::cout << 1 ) << 2) << 3) << 4) << 5)

	// �ٽ� 2. pack �� �̸��� �ƴ϶� "pack�̸��� ����ϴ� ����" �� ����

//	((std::cout << args << " ") , ...);
	// (pack�� ����ϴ� ����     op  ...)   // ���׿����ڰ� , 

	// ( (std::cout << 1 << " "), ((std::cout << 2 << " ")

	// �Ʒ� �ڵ� �ؼ��� ������
	(v.push_back(args), ...);
}

// �������� ���ø�    : C++11
// fold expression : C++17

int main()
{
	foo(1, 2, 3, 4, 5);
}



