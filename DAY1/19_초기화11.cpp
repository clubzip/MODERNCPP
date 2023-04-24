// 1_�ʱ�ȭ10
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5 };
	std::vector<int> v2{ 1,2,3,4,5 };


	// �Ʒ� 2���� �������� ?
	std::vector<int> v3(10, 2); // vector(int, int) ������
								// 10���� ��Ҹ� 2�� �ʱ�ȭ

	std::vector<int> v4{10, 2}; // vector(std::initializer_list)
								// 2���� 10, 2�� �ʱ�ȭ

	std::cout << v3.size() << std::endl; // 10
	std::cout << v4.size() << std::endl; // 2

	// �Ʒ� �ڵ忡�� ������ ?
	std::vector<int> v5 = 10;	// error.
								// "explicit vector(int)"

	std::vector<int> v6 = {10}; // ok
								// "vector(std::initializer_list)"
								// �� explicit �����ڰ� �ƴ�.
}




