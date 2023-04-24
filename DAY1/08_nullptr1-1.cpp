#include <iostream>

void foo(int* p) {}

template<typename T>
void forward_foo(T arg) // int arg = 0 을 추론
{						// std::nullptr_t arg = nullptr;

	foo(arg);	// arg가 int 타입이면 error
				// arg가 std::nullptr_t 타입이면 ok.. 
}

int main()
{
	int n = 0;
	foo(0);	// ok
//	foo(n);	// error. 리터럴 0만 포인터로 변환되고
			//		  0으로 초기화된 정수는 포인터 변환 안됨
	foo(0);         // ok. 0을 함수 에 직접 전달
//	forward_foo(0); // ??  0을 전달해 달라고 요청..
					// error.
	forward_foo(nullptr); // ok
}