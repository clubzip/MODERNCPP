// 04_beginend2.cpp
#include <vector>

// 컨테이너 버전 : 컨테이너의 begin 을 다시 호출
template<typename T>
auto mybegin(T& c) { return c.begin(); }

// 배열 버전 : 핵심은 템플릿모양입니다.
// => 아래 인자가 어려워 보이시면 "C언어에서 배열을 가리키는 포인터"
//    를 찾아 보세요
// => 배열을 가리키는 포인터와 배열을 가리키는 참조는 동일한 모양
template<typename T, unsigned int SZ>
T* mybegin( T(&arr)[SZ] ) { return arr; }

int main()
{
	std::vector<int> v = { 1,2,3 };
	int x[3] = { 1,2,3 };

	auto p1 = mybegin(v);
	auto p2 = mybegin(x);
	auto p3 = myend(x); // <== 숙제.. 만들어 보세요.
}