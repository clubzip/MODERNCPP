#include <iostream>

void hoo(int&&) {}

template<typename F> void chronometry(F f, int& arg)
{
	f(arg);
}

// main					chronometry					hoo(int&&)
// hoo(10)
// chronometry(10)

template<typename F> void chronometry(F f, int&& arg)
{
	f(arg);
}

int main()
{
	hoo(10); 
	chronometry(hoo, 10);
}
