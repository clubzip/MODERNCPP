#include <iostream>
#include <string>

// �ڵ� ���� ��Ģ.

// ��Ģ 1. ����ڰ� ���� �迭(�����ڿ� ���Կ�����)�� move �迭�� 
//		  ��� �Լ��� �������� ������
// => �����Ϸ��� ��� �ڵ������� �ش�
// �ڵ������� ���� �迭 �Լ� : ��� ����� ���� ���ش�.
// �ڵ������� �̵� �迭 �Լ� : ��� ����� �̵�(std::move()) ���ش�.

// ��Ģ 2. ����ڰ� ���� �迭�� �����Ҷ�
// => �����Ϸ��� move �迭 �Լ��� �ڵ�������������.
// => std::move() ���� ����ڰ� ���� ���� �迭 �Լ��� ����ϰԵ�.

// => �����Ϸ����� move �迭 �Լ��� ����Ʈ ������ ��û�Ϸ��� 
//    "=default"���
struct Object
{
	std::string name;

	Object(const std::string& n) : name(n) {} // ������

	Object(const Object& obj) : name(obj.name)
	{
		std::cout << "����ڰ� ���� ���� ������" << std::endl;
	}
	// ���� ���� �����ڸ� ���������, ������ �Լ��� 
	// �����Ϸ��� ����Ʈ ������ ����Ϸ��� �Ʒ� ó�� ��û�մϴ�.
	Object(Object&&) = default;
	Object& operator=(const Object&) = default;
	Object& operator=(Object&&) = default;
};

int main()
{
	Object o1("obj1 to be or not to be");
	Object o2("obj2 to be or not to be");

	Object o3 = o1;
	Object o4 = std::move(o2);

	std::cout << o1.name << std::endl;
	std::cout << o2.name << std::endl; // ""
}