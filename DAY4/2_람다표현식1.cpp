// 5_����ǥ����1
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

bool cmp(int a, int b) { return a < b; }

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };
	
	// sort �ϰ� �ʹٸ�
	// 1. ����å�� �������� �ʴ� ��� - ���� ����
	std::sort( v.begin(), v.end() ); 

	// 2. �� ��å�� ����
	// A. �Ϲ� �Լ�
	std::sort(v.begin(), v.end(), cmp);

	// B. �Լ� ��ü�� ����
	std::less<int> f; // C++98 ���� �̹� ǥ�ؿ� �� Ŭ���� ����.

	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), std::less<int>{} ); // �ӽð�ü
	std::sort(v.begin(), v.end(), std::less{}); // C++17 ����

	// C. ���� ǥ���� ���
	std::sort(v.begin(), v.end(), 
			[](int a, int b) { return a < b; } );
}





