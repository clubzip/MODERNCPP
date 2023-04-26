#include <iostream>

// shallow copy vs deep copy

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


	Cat(const Cat& c) : age(c.age)
	{
		name = new char[strlen(c.name) + 1];
		strcpy_s(name, strlen(c.name) + 1, c.name);
	}
	// 임시객체를 위한 복사 생성자를 
	// 추가로 만들자는 것!!
	// 임시객체는 rvalue 이므로 인자를 "Cat&&"
	Cat(Cat&& c) : age(c.age), name(c.name)
	{
		// 아래 코드를 수행하기 위해서
		// 임시객체도 상수성없이 가리킬수 있어야 합니다.
		c.name = nullptr; 
	}
};



Cat foo()
{
	Cat c("yaong", 3);
	return c;
}

int main()
{
	Cat c = foo(); // 이순간의 메모리 상황을
				   // 생각해 보세요.
}
