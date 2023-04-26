#include <iostream>
#include <string>

// �ڵ� ���� ��Ģ.

// ��Ģ 1. ����ڰ� ���� �迭(�����ڿ� ���Կ�����)�� move �迭�� 
//		  ��� �Լ��� �������� ������
// => �����Ϸ��� ��� �ڵ������� �ش�
// �ڵ������� ���� �迭 �Լ� : ��� ����� ���� ���ش�.
// �ڵ������� �̵� �迭 �Լ� : ��� ����� �̵�(std::move()) ���ش�.

struct Object
{
	std::string name;

	Object(const std::string& n) : name(n) {} // ������
};


int main()
{
	Object o1("obj1 to be or not to be");
	Object o2("obj2 to be or not to be");

	Object o3 = o1;
	Object o4 = std::move(o1);

	std::cout << o1.name << std::endl;
	std::cout << o2.name << std::endl;
}