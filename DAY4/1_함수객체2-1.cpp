#include <iostream>
#include <vector>
#include <algorithm>

// 1. 일반 함수 foo 는 main 의 지역변수 k를 사용할수 없지만
bool foo(int n) { return n % 3 == 0; }

// 2. 함수객체는 main 의 지역변수 k를 사용(캡쳐)할수 있습니다.
struct IsMod
{
	int value;
	IsMod(int n) : value(n) {}

	bool operator()(int n) const { 	return n % value == 0;	}
};
int main()
{
	std::vector<int> v = { 1,2,6,5,4,3,7,8 };

	int k = 3;
	IsMod f(k); // f는 단항함수 처럼 사용가능한데. k값을 보관하고 있습니다.
	bool b = f(6);// 6 % k 를 조사

	auto p1 = std::find_if(v.begin(), v.end(), f) ;

}



