#include <iostream>
#include <type_traits>


// T가 포인터 인지 조사하는 기술

// type traits : 템플릿 인자 T의 타입에 대한 정보를 조사하는 기술
// => 컴파일 시간에 동작
// => "메타 함수" 라는 용어도 사용됩니다.
// => 주로 부분 특수화 기술로 만들게 됩니다.

// 핵심 1. primary template 을 만들고 false 반환(value=false라는의미)
template<typename T> struct is_pointer
{
	enum { value = false };
};

// 핵심 2. 조건을 만족하는 부분 특수화 버전을 만들고 true 반환(value=true)
template<typename T> struct is_pointer<T*>
{
	enum { value = true };
};

template<typename T> void foo(const T& a)
{
	// 현재 T 는 int, int*
	if ( is_pointer<T>::value )

		std::cout << "포인터" << std::endl;
	else
		std::cout << "포인터 아님" << std::endl;
}




int main()
{
	int n = 0;
	foo(n);
	foo(&n);
}