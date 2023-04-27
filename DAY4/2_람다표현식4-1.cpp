// 2_����ǥ����4-1.cpp - 4������
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	// �Ʒ� �ڵ带 ������ ������.. 
	// sort() �Լ��� � �����ɱ��?
	// => 3���� sort �Լ� ����
	std::sort(v.begin(), v.end(),[](int a, int b){ return a<b;});
	std::sort(v.begin(), v.end(),[](int a, int b){ return a<b;});
	std::sort(v.begin(), v.end(),[](int a, int b){ return a<b;});

	// ������ ���� ǥ������ ������ ����ϸ� auto ������ ��Ƽ� ����ϴ�
	// ���� �����ϴ�.
	auto f = [](int a, int b) { return a < b; };
			// class xxx{}; xxx();
	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), f);

}





