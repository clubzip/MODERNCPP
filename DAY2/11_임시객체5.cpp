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

	static_cast<Base&>(d).value = 10; // ok
	static_cast<Base>(d).value = 10; // error. 
								// �� ĳ������ �ӽð�ü�� �����Ѱ�
}

