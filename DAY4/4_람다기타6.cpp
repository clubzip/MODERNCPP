#include <functional>

template<typename T> 
void f1(T f) {}

template<typename T>
void f2(T&& f) {}

int main()
{
	std::less<int> f;

	// 아래 4줄을 깊이 있게 생각해 보세요
	// f1, f2 는 각각 함수가 몇개 생성되었을까요 ?
	f1(f);
	f1(std::less<int>());
	f2(f);
	f2(std::less<int>());
}