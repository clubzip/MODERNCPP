#include <iostream>

int main()
{
	int v1 = 10, v2 = 10;

//	auto f1 = [v1, v2](int a) { v1 = 100; return a + v1 + v2; }; 
	
	// mutable 람다 표현식 : operator() 연산자를 const 함수로 하지말라는것
	auto f1 = [v1, v2](int a) mutable { v1 = 100; return a + v1 + v2; };


	// 위 f1 의  정확한 원리를 생각해 봅시다. => 꼭 이해해 두세요
	class CompilerGeneratedName
	{
		int v1; // 지역변수를 캡쳐하면 컴파일러가 만드는 클래스에
		int v2; // <= 이렇게 멤버 데이타가 추가됩니다.
	public:
		CompilerGeneratedName(int a, int b) : v1(a), v2(b) {}

		inline auto operator()(int a) // const
		{
			v1 = 100;				// () 연산자 함수가 상수함수라면
									// error 입니다.
			return a + v1 + v2;
		}
	};
	auto f1 = CompilerGeneratedName(v1, v2);
}





