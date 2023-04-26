#include <iostream>
#include <string>

// 자동 생성 규칙.

// 규칙 1. 사용자가 복사 계열(생성자와 대입연산자)과 move 계열의 
//		  모든 함수를 제공하지 않을때
// => 컴파일러가 모두 자동생성해 준다
// 자동생성된 복사 계열 함수 : 모든 멤버를 복사 해준다.
// 자동생성된 이동 계열 함수 : 모든 멤버를 이동(std::move()) 해준다.

struct Object
{
	std::string name;

	Object(const std::string& n) : name(n) {} // 생성자
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