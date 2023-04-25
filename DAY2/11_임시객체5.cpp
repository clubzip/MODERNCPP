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

	// 아래 2줄의 차이점은 ?
	std::cout << static_cast<Base&>(d).value << std::endl; // 10
	std::cout << static_cast<Base>(d).value << std::endl; // 10

	static_cast<Base&>(d).value = 10; // ok
	static_cast<Base>(d).value = 10; // error. 
								// 값 캐스팅은 임시객체를 생성한것
}

