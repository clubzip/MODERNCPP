// 4_beginend - 16 page
#include <vector>
#include <list>
#include <iostream>

int main()
{
	//std::vector<int> v = { 1,2,3,4,5 };
	//std::list<int>   v = { 1,2,3,4,5 };
	int v[5] = { 1,2,3,4,5 };

	// 1. �ݺ����� ��Ȯ�� Ÿ���� �˾� �μ���
	// => �׷���, ��Ȯ�� Ÿ���� ����ϸ�
	//    �����̳� ��ü�� �Ʒ� �ڵ嵵 �����Ǿ�� �մϴ�.
//	std::vector<int>::iterator p1 = v.begin();
//	std::vector<int>::iterator p2 = v.end();

	// 2. �ǵ��� �̸� auto ����ϼ���
//	auto p1 = v.begin(); // v �� raw array ��� error

	// 3. �Ϲ� �Լ� begin �� ����ϸ� �������� �����ϴ�.
	auto p1 = std::begin(v); // v �� raw array �� ����

//	auto sz = v.size();     // raw array ��� error
	auto sz = std::size(v); // raw array �� ok
}