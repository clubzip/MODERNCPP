// 5_range_for1.cpp   21 page
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	// 전통적인 for 문
	for (int i = 0; i < v.size(); i++)
	{
	}

	// C++11 에서 도입된 새로운 for 문 - range for 라고 합니다.
//	for (int  e : v) // 컨테이너 또는 배열
	for (auto e : v)
	{
		
	}

}















