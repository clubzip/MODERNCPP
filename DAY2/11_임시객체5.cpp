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

	static_cast<Base&>(d).value = 30; // ok
//	static_cast<Base>(d).value = 30; // error. 
								// 값 캐스팅은 임시객체를 생성한것

	std::cout << d.value << std::endl; // 20
	std::cout << static_cast<Base&>(d).value << std::endl; // 30
}
// Base 안에 "복사 생성자" "소멸자" 만들어서 로깅해 보시면
// 임시객체 생성되는 결과 확인 가능합니다.
