// 6_forwarding_reference1 - 아주 아주 중요!!
int n = 0;

void f1(int&  r) {}
f1(n); // ok
f1(0); // error

void f2(int&& r) {}
f2(n); // error
f2(0); // ok

// 함수인자로
// int&  : int 타입의 lvalue 만 받겠다는 것
// int&& : int 타입의 rvalue 만 받겠다는 것

// T&    : 임의 타입의 lvalue 만 받을수 있다.

// T&&   : 


template<typename T> void f3(T& a)
{
}
int main()
{
	int n = 0;
	
	// 1. 사용자가 타입을 명시적으로 전달하는 경우
	f3<int>(n);   // T=int		T&=int&     f3(int& a)
	f3<int&>(n);  // T=int&		T&=int& &   f3(int& a)
	f3<int&&>(n); // T=int&&	T&=int&& &  f3(int& a)

	// 2. 사용자가 타입을 전달하지 않는 경우
	// => 함수 인자를 보고 T 타입 결정후 함수 생성
	f3(3);  // 3을 보고 T 를 int 로 결정하려고 하는데..
			// T=int, int&, int&& 중 어떠한 것으로 결정해도
			// 3을 받을수 있는 방법은 없다.. error
	f3(n);	// T=int 로 결정
}







template<typename T> void f4(T&& a)
{
}
int main()
{
	int n = 0;
	
	// 1. 타입을 명시적으로 전달하는 경우. ? 채워 보세요
	f4<int>(? );   // T=?		T&&=?		f4(? a)
	f4<int&>(? );  // T=?		T&&=?		f4(? a)
	f4<int&&>(? ); // T=?		T&&=?		f4(? a)

	// 2. 타입인자를 전달하지 않으면 함수인자를 보고 타입을 결정
	// => 컴파일러가 T를 어떻게 결정했을지 예측해 보세요
	f4(n);
	f4(3);
}