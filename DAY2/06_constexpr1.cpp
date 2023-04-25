#include <iostream>

template<typename T, std::size_t SZ>
struct array
{
};

int main()
{
	int n = 10;
	const int c1 = 10; 
	const int c2 = n;  

	// 다음중 에러를 모두 고르세요
	int arr1[10]; // ok
	int arr2[n ]; // 배열의 크기로 변수 사용
				  // C89 문법 : error. 
				  //		  배열크기는 컴파일 시간에 알아야한다
				  // C99 문법 : ok
				  // 하지만 많은 컴파일러가 지원 안함
				  // g++ 가능, vc : error
	int arr3[c1]; // ok.  컴파일 할때 c1이 10이라고 알고 있음
	int arr4[c2]; // error

	// 상수의 종류
	// 1. 컴파일 할때 값을 알수 있는 것 : 컴파일 시간 상수
	// 
	// 2. 컴파일 할때 값을 알수도 있고 모를수도 있지만
	//     "값을 변경할수는 없는것" : 실행시간 상수



	array<int, 10> a1;
	array<int, n> a2;
	array<int, c1> a3;
	array<int, c2> a4;
}
