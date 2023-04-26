// 6_forwarding_reference1 - 아주 아주 중요!!
int n = 0;

void f1(int&  r) {}
f1(n); // ok
f1(0); // error

void f2(int&& r) {}
f2(n); // error
f2(0); // ok

// 함수인자로
// 
// int&  : int 타입의 lvalue 만 받겠다는 것
// 
// int&& : int 타입의 rvalue 만 받겠다는 것

// T&    : 모든 타입의 lvalue 만 받을수 있다.

// T&&   : 모든 타입의 lvalue 와 rvalue 를 모두 받을수 있다.
// 
// 핵심 1. "받을수 있다" 라는 말은 "받을수 있는 함수를 생성한다"는것
// 핵심 2. 생성된 함수는 모두 call by value 가 아닌 reference !!

// lvalue 전달 f4(n)	: T=int&	T&&=int& &&	 최종 함수 : f4(int& )
// rvalue 전달 f4(3)	: T=int		T&&=int&&	 최종 함수 : f4(int&& )

// "universal reference" 라고 부르자고 "effective c++저자가 제안"

// 하지만, C++ 표준위원회는 이후에
// "forwarding reference" 라는 이름을 사용하기로 결정

// T&& : forwarding reference








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
	f4<int>(3);    // T=int		T&&=int&&		f4(int&& a)
	f4<int&>(n);   // T=int&	T&&=int& &&		f4(int& a)
	f4<int&&>(3);  // T=int&&	T&&=int&& &&	f4(int&& a)

	// 2. 타입인자를 전달하지 않으면 함수인자를 보고 타입을 결정
	// => 컴파일러가 T를 어떻게 결정했을지 예측해 보세요

	f4(n);	// 1. n은 int 이므로 T=int로 결정하면 f4(int&&)함수 생성
			//	  => f4(n) 은 에러!!
			// 
			// 2. T=int& 로 결정하면 f4(int&) 함수 생성되므로 
			//    => f4(n) 은 에러 아님.
			// T=int&		T&&=int& &&	   생성된함수 : f4(int& a)

	f4(3); // T=int		T&&=int&&		생성된함수 : f4(int&& a)
}