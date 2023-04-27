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

	// f : operator() �Լ� ��� + main �������� k��

	auto p1 = std::find_if(v.begin(), v.end(), f) ;
									// "�����Լ� f + k��"
								    // �� ���� �����ϴ� �ǹ�
	auto p2 = std::find_if(v.begin(), v.end(), IsMod{k});
}
// Ŭ����(Closure)
// => �ڽ��� ���Ե� ������ ���������� ĸ���Ҽ� �ִ� �ϱް�ü(�Լ�)

// C++���� �Ϲ� �Լ��� Ŭ������ �ɼ� ������
//        �Լ���ü�� Ŭ������ �ɼ� �ִ�.

// C++98 : std::max() => �Լ� �Դϴ�.
// C++20 : std::ranges::max() => �Լ���ü �Դϴ�.

// �ϱ� ��ü�� ?(first class object)
// 1. �Լ� ���ڷ� ����Ҽ� �ְ�
// 2. �Լ� ��ȯ������ ��밡���ϰ�
// 3. ����, ���Ե��� ������ ��ü(
int n1; // n1 �� �ϱް�ü �Դϴ�.

void foo() {} // C/C++���� �Լ�(���� �ּ�)�� �Լ� ���ڷ� ��밡���մϴ�.
			  // �׷��� �Լ��� �ϱް�ü��� �մϴ�

// Ŭ���� : ĸ�� ����� �ִ� �ϱ� ��ü
