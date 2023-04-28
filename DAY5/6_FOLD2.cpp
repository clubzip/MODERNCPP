#include <iostream>
#include <vector>

std::vector<int> v;

template<typename ... Types>
void foo(Types ... args)
{
	// �ٽ� 1. �ʱⰪ�� 0 �� �ƴ϶� ��� ��ü�� ��밡���մϴ�.
	//        ���� �����ڴ� + �� �ƴ϶� ��κ� �����ڵ� �����ϰ�
	//        C++�� ������ ������ ����� �����Ƿ� � �ϵ� �Ҽ� �ֽ��ϴ�.
	(std::cout << ... << args);

}

int main()
{
	foo(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
}



