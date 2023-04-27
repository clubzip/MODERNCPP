// 2_람다표현식4-1.cpp - 4번복사
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	// 아래 코드를 생각해 보세요.. 
	// sort() 함수는 몇개 생성될까요?
	// => 3개의 sort 함수 생성
	std::sort(v.begin(), v.end(),[](int a, int b){ return a<b;});
	std::sort(v.begin(), v.end(),[](int a, int b){ return a<b;});
	std::sort(v.begin(), v.end(),[](int a, int b){ return a<b;});

	// 동일한 람다 표현식을 여러번 사용하면 auto 변수에 담아서 사용하는
	// 것이 좋습니다.
	auto f = [](int a, int b) { return a < b; };
			// class xxx{}; xxx();
	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), f);

}





