#include <iostream>
// 85 page
struct Base
{
	int value = 10; 
};
struct Derived : public Base
{
	int value = 20;
};
int main()
{
	Derived d;
	std::cout << d.value << std::endl; // 20

	// �Ʒ� 2���� �������� ?
	std::cout << static_cast<Base&>(d).value << std::endl; // 10
	std::cout << static_cast<Base>(d).value << std::endl; // 10

	static_cast<Base&>(d).value = 30; // ok
//	static_cast<Base>(d).value = 30; // error. 
								// �� ĳ������ �ӽð�ü�� �����Ѱ�

	std::cout << d.value << std::endl; // 20
	std::cout << static_cast<Base&>(d).value << std::endl; // 30
}
// Base �ȿ� "���� ������" "�Ҹ���" ���� �α��� ���ø�
// �ӽð�ü �����Ǵ� ��� Ȯ�� �����մϴ�.
