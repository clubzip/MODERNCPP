// 17_static_if - 51 page

template<typename T>
void foo(T a)
{
	// if  : 실행시간 제어문
	//		 컴파일 할때 false 로 결정되어도 
	//	     인스턴스화(템플릿 => C++함수)에 포함됩니다.
//	if (false)
//		*a = 10; // 이 코드는 에러일까요 ??

	// if constexpr : 컴파일 시간 제어문
	//				  조건이 false 라면 인스턴스화에 포함안됨
	//				  C++17 에서 도입된 문법
	if constexpr (false)
		*a = 10; // 이 코드는 에러일까요 ??

}

int main()
{
	foo(0); 
}

