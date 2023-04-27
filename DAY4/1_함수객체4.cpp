#include <iostream>
#include <algorithm> 

// 비교 정책을 인자로 전달 받는 sort
// C언어의 qsort()가 아래와 유사하게 함수 포인터 전달 받습니다.
// => 데이타 량이 많으면 성능이 느려 집니다.
void Sort(int* x, int sz, bool(*cmp)(int, int) )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
//			if (x[i] > x[j])		// 1

			if ( cmp(x[i], x[j]) == true ) // 2
				std::swap(x[i], x[j]);
		}
	}
}
//------------------------
inline bool cmp1(int a, int b) { return a > b; }
inline bool cmp2(int a, int b) { return a < b; }

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
	Sort(x, 10, &cmp1); 
}

