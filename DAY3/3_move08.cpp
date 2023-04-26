#include <iostream>
#include <string>

// 자동 생성 규칙.

// 규칙 1. 사용자가 복사 계열(생성자와 대입연산자)과 move 계열의 
//		  모든 함수를 제공하지 않을때
// => 컴파일러가 모두 자동생성해 준다
// 자동생성된 복사 계열 함수 : 모든 멤버를 복사 해준다.
// 자동생성된 이동 계열 함수 : 모든 멤버를 이동(std::move()) 해준다.

// 규칙 2. 사용자가 복사 계열만 제공할때
// => 컴파일러는 move 계열 함수를 자동생성하지않음.
// => std::move() 사용시 사용자가 만든 복사 계열 함수를 사용하게됨.

// => 컴파일러에게 move 계열 함수의 디폴트 버전을 요청하려면 
//    "=default"사용
struct Object
{
	std::string name;

	Object(const std::string& n) : name(n) {} // 생성자

	Object(const Object& obj) : name(obj.name)
	{
		std::cout << "사용자가 만든 복사 생성자" << std::endl;
	}
	// 위에 복사 생성자를 만들었지만, 나머지 함수는 
	// 컴파일러의 디폴트 버전을 사용하려면 아래 처럼 요청합니다.
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