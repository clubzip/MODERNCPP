// std::move()소개
#include <iostream>

class Cat
{
	char* name;
	int   age;
public:
	Cat(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	~Cat() { delete[] name; }

	// 복사 생성자
	Cat(const Cat& c) : age(c.age)
	{
		name = new char[strlen(c.name) + 1];
		strcpy_s(name, strlen(c.name) + 1, c.name);
		std::cout << "복사" << std::endl;
	}

	// rvalue 를 위한 복사 생성자를 흔히 "이동(move) 생성자" 라고 합니다.
	/*
	Cat(Cat&& c) : age(c.age), name(c.name)
	{
		c.name = nullptr;
		std::cout << "이동" << std::endl;
	}
	*/
};
Cat foo()
{
	Cat c("yaong", 3);
	return c;
}
int main()
{
	Cat c1("nabi", 2);
	Cat c2 = c1;	// 복사(copy) 생성자 호출
	Cat c3 = foo();	// 이동(move) 생성자 호출
	Cat c4 = static_cast<Cat&&>(c2);	// 
				// lvalue 를 rvalue 로 캐스팅해서 move 생성자 호출되도록
	Cat c5 = std::move(c3); // 이 함수가 하는 일이 위처럼 캐스팅을 하는것입니다
	
	// 참고 : std::move(c3) 하면
	// => c3의 자원(문자열)만 빼앗기게 되고
	//    c3 자체가 파괴되는 것은 아닙니다. c3의 파괴는 {} 벗어날때
	 
	// 결론..
	// 1. std::move() 자체가 자원을 옮기는 것은 아닙니다.
	// 2. std::move() 는 rvalue 캐스팅만 하는 것이고
	// 3. 캐스팅 결과 Cat 클래스 안에 있는 move 생성자가 호출된것!!!

}

Object obj1;
Object obj2 = std::move(obj1); // 이 코드에서!!

// 1. Object 클래스안에 move 생성자가 있으면 move 생성자 사용
// 2. Object 클래스안에 move 생성자가 없으면 copy 생성자 사용

// 즉, 어떠한 타입에 대해서도 std::move() 사용가능.!!
// => 단, 복사 생성자도 삭제(=delete로) 되었다면 에러!!
// => 컴파일러가 제공하는 복사 생성자가 있으면 사용..!

// Cat 안에 복사생성자도 만들지 않으면
//Cat c2 = std::move(c1); // move 가 없으면 copy 호출
						// 1. 깊은 복사로 만들었다면 ok
						// 2. 컴파일러가 제공한 copy 생성자 사용시
						//    얕은 복사 문제로 runtime error

