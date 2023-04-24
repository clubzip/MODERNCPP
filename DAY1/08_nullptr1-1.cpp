#include <iostream>

template<typename T>
void forward_foo(T arg)
{
	foo(arg);
}

void foo(int* p) {}

int main()
{
	int n = 0;
	foo(0);
	foo(n);
}