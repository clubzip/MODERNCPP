#include <iostream>

int x = 0;
int& foo(int n, double d) { return x; }

int main()
{
	auto ret = foo(1, 3.4);
	// int ret = foo(1, 3.4); // auto 는 우변의 참조를 
							  // 제거하고 결정하므로
	ret = 200; // x가 수정되는 것은 아님

	// decltype(함수호출식) : 함수 호출의 결과로 나오는 타입
	//						즉, 반환 타입 조사
	decltype(foo(1, 3.4)) ret2 = foo(1, 3.4);
	// int& ret2 = foo(1, 3.4)

	// decltype(auto)
	// => auto 자리에 우변을 넣어달라
	// => 우변으로 추론하는데, 규칙은 decltype 규칙으로!
	// => C++14
	decltype(auto) ret3 = foo(1, 3.4); // decltype 규칙
			// int& ret3 = foo(1,3.4);
			// ret3 = 200;  // 전역변수 x = 200

	auto ret4 = foo(1, 3.4);	// auto 규칙(우변참조제거)
			// int ret4 = foo(1,3.4);
			// ret4 = 200; // 전역변수 변경 아님.

	// 참고, rust 는 최초 사용시 까지 추론을 미룰수도 있습니다.
//	let n1 = 10; // let이 auto 
//	let n2;
//	n2 = 10; // 이때 추론.

	auto a; // error. 초기값이 없어서 추론 안됨
}

