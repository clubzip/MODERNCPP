// C++ 에서 constexpr 은 3가지 용도 입니다.
// 1. constexpr 상수  - C++11
// 2. constexpr 함수  - C++11
// 3. constexpr 제어문 - C++17

// constexpr 함수 : 인자의 값을 컴파일할때 알수 있고
//			       함수 호출식이 컴파일 시간에 값을 알아야 하는곳
//				   이라면, 함수 실행을 컴파일 할때 수행
//					단, 파일 작업, 메모리 할당등은 안됨.
constexpr int Factorial(int n)
{
	return n == 1 ? 1 : n * Factorial(n - 1);
}
int main()
{
	int n = 5;

	int arr1[ Factorial(5) ]; 

	int arr2[ Factorial(n) ];	// error. 인자값을 컴파일 할때
								// 알수 없음. 	
								// 단, g++은 배열의 크기로 변수되므로
								// 함수 호출을 실행시간에 해서
								// 배열 크기로 사용
	int s1 = Factorial(n); // ok. 실행시간에 호출! 


	int s2 = Factorial(5); // 인자는 컴파일 시간에 알지만
				// 현재 문맥은 반드시 컴파일할때 알아야하는 것은 아님.
				// => 컴파일러에 따라 실행시간에 할지 컴파일 시간에 할지
				//    다름.

	const int s3 = Factorial(5); 
				// 실행시간 또는 컴파일 시간, 컴파일러마다 다름

	constexpr int s4 = Factorial(5);
				// 반드시 컴파일 할때 실행해야 한다.
}