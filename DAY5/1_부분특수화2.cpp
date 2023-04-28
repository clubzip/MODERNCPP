#include <iostream>

// ������ specialization ������ ���� �ǵ���
// => �Ʒ� vector ó��..
// => Ư�� Ÿ�Կ� ���� ����ȭ�� Ʋ(���ø�)�� �������ڴ� �ǵ� �����ϴ�.

// => �׷���, modern c++ ���Ŀ� �̹������� �پ��� ����� ���� ����մϴ�.

// STL vector �� ���������� ������ ���ô�.
template<typename T>
class vector
{
	T* buff;
public:
	vector(std::size_t sz)
	{
		buff = new T[sz];
	}
};

// vector<bool> �� ���� ���� ����� �����մϴ�.
// => bool�� �µ��� ����ȭ�� ������ ������ڴ� �ǹ�!
template<>
class vector<bool>
{
	int* buff;
public:
	vector(std::size_t sz)
	{
		buff = new int[(sz/32) + 1];
					// 0  ~ 31 : int �Ѱ�(4byte)
					// 32 ~ 63 : int 2��
					// vector<bool> v(100) �� int 4���� ����.
					// 100 ����Ʈ�� �ƴ� 16����Ʈ�� ����
	}
};


int main()
{
	vector<int>  v1(100);
	vector<bool> v2(100); // �� ������ ������ ���ô�.
}
