#include <iostream>
#include <string>
#include <vector>

// �� move�� �߿��Ѱ� ? - 101 page �Ʒ� �ֽ��ϴ�.

template<typename T>
void Swap(T& a, T& b)
{
	// ���翡 ���� swap �� ������ ���� �ʽ��ϴ�.
//	T tmp = a;
//	a = b;
//	b = tmp;

	// move �� ���� swap �� �� �ڵ庸�� �����ϴ�.
	T tmp = std::move(a);
	a = std::move(b);
	b = std::move(tmp);
}

int main()
{
	std::string s1 = "hello";
	std::string s2 = "world";
	Swap(s1, s2);
}
// move ���� ����� �ϴ� ��
// 1. swap ���� �˰��� ���� ���� ��� move �� ����ϸ� 
//    �ξ� ���� ���ϴ�.

// 2. std::string �� �ƴ� ����ڰ� ���� Ÿ�Ե� move�� �����Ϸ���
//   ��� �ؾ� �ϴ°� ?
People p1("kim");
People p2 = std::move(p1); // �����Ϸ��� ?? �ʿ��� ����

// 3. move ���� ���� ����


