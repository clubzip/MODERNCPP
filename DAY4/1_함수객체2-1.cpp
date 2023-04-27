#include <iostream>
#include <vector>
#include <algorithm>

// 1. �Ϲ� �Լ� foo �� main �� �������� k�� ����Ҽ� ������
bool foo(int n) { return n % 3 == 0; }

// 2. �Լ���ü�� main �� �������� k�� ���(ĸ��)�Ҽ� �ֽ��ϴ�.
struct IsMod
{
	int value;
	IsMod(int n) : value(n) {}

	bool operator()(int n) const { 	return n % value == 0;	}
};
int main()
{
	std::vector<int> v = { 1,2,6,5,4,3,7,8 };

	int k = 3;
	IsMod f(k); // f�� �����Լ� ó�� ��밡���ѵ�. k���� �����ϰ� �ֽ��ϴ�.
	bool b = f(6);// 6 % k �� ����

	auto p1 = std::find_if(v.begin(), v.end(), f) ;

}



