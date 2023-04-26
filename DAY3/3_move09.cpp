#include <iostream>
#include <string>

// 클래스 안에 사용자가 직접 자원을 관리하는 코드가 있다면
// => char*, int* 등을 멤버가 있고 동적할당하면
// => 복사계열, 이동 계열을 모두 제공해야 합니다.

// 하지만, 자원을 직접 관리하는 코드가 없다면
// => 복사와 이동 모두 만들지 마세요
// => 컴파일러가 제공해 줍니다

// 자원을 직접 관리하지 말고, 자원 관리 클래스를 사용하세요.
// 문자열 필요 : char* 사용하지 말고 string
// int* => 스마트 포인터 또는 std::vector  사용하세요
// 
class Cat
{
//	char* name;
	std::string name;
	int   age;
public:
	Cat(const std::string& n, int a) : name(n), age(a)
	{
	}
};


int main()
{
	Cat c1("nabi", 2);
	Cat c2 = c1;			// 복사 생성자
	Cat c3 = std::move(c1);	// 이동 생성자

	c3 = c2;				// 대입 연산자 호출
	c3 = std::move(c2);		// 이동 대입연산자 호출
}




