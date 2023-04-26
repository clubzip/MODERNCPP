#include <iostream>
#include <string>
#include <vector>

// 왜 move가 중요한가 ? - 101 page 아래 있습니다.

template<typename T>
void Swap(T& a, T& b)
{
	// 복사에 의한 swap 은 성능이 좋지 않습니다.
//	T tmp = a;
//	a = b;
//	b = tmp;

	// move 에 의한 swap 이 위 코드보다 빠릅니다.
	T tmp = std::move(a);
	a = std::move(b);
	b = std::move(tmp);
}

int main()
{
	std::string s1 = "hello";
	std::string s2 = "world";
	Swap(s1, s2);
}
// move 에서 배워야 하는 것
// 1. swap 같은 알고리즘 사용시 복사 대신 move 를 사용하면 
//    훨씬 빨라 집니다.

// 2. std::string 이 아닌 사용자가 만든 타입도 move를 지원하려면
//   어떻게 해야 하는가 ?
People p1("kim");
People p2 = std::move(p1); // 지원하려면 ?? 필요한 것은

// 3. move 관련 주의 사항


