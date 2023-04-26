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
