#include <iostream>

template<typename T, std::size_t SZ>
struct array
{
};

int main()
{
	int n = 10;
	const int c1 = 10; 
	const int c2 = n;  

	// ������ ������ ��� ������
	int arr1[10]; // ok
	int arr2[n ]; // �迭�� ũ��� ���� ���
				  // C89 ���� : error. 
				  //		  �迭ũ��� ������ �ð��� �˾ƾ��Ѵ�
				  // C99 ���� : ok
				  // ������ ���� �����Ϸ��� ���� ����
				  // g++ ����, vc : error
	int arr3[c1]; // ok.  ������ �Ҷ� c1�� 10�̶�� �˰� ����
	int arr4[c2]; // error

	// ����� ����
	// 1. ������ �ð� ��� : ������ �Ҷ� ���� �˼� �ִ� �� 
	// 
	// 2. ����ð� ��� : ������ �Ҷ� ���� �˼��� �ְ� �𸦼��� ������
	//                 "���� �����Ҽ��� ���°�" 
	//				   �ٸ� ���� ������ �θ��� �ʰ�
	//					readonly, immutable

	// C++���� "������ �ð��� ���� �˾ƾ� �ϴ� ��"�� �ֽ��ϴ�.
	// => �迭�� ũ��, ���ø� ���� ��.. 

	array<int, 10> a1; // ok
	array<int, n> a2;  // error
	array<int, c1> a3; // ok
	array<int, c2> a4; // error
}
