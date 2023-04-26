#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }
void hoo(int&&) {}


/*
template<typename F> void chronometry(F f, int& arg)
{
//	f(arg);
	f(static_cast<int&>(arg)); // int& 타입을 int&로 캐스팅하므로
								// 필요 없는 캐스팅입니다.
								// 하지만, 있어도 상관없습니다.
								// 컴파일 시에 무시 됩니다.
}

template<typename F> void chronometry(F f, int&& arg)
{
	f(static_cast<int&&>(arg)); 
}
*/
// T&& 를 사용하면 모든 타입에 대해서 위 2개 함수를 자동생성할수 있다.

template<typename F, typename T> 
void chronometry(F f, T&& arg)
{
	f(static_cast<T&&>(arg));
}
int main()
{
	int n = 10;

	chronometry(foo, 10); // T=?   chronometry(  ? )
						  // static_cast<?>(arg)

	chronometry(goo, n);  // T=?   chronometry(  ? )
						  // static_cast<?>(arg)

}
