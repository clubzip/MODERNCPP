#include <iostream>

void foo(void*) { std::cout << "void*" << std::endl; }
void goo(char*) { std::cout << "goo" << std::endl; }

// nullptr ÀÇ ¿ø¸®!!

struct nullptr_t
{
};
nullptr_t mynullptr;

int main()
{
	foo(mynullptr);
	goo(mynullptr);
}







