// 3_람다지역변수캡쳐3-1.cpp
#include <functional>

// reference capture 는 항상 dangling 의 위험성이 있습니다.
int main()
{
	std::function<void(int)> f;
	{
		int n = 10;

		f = [&n](int a) { n = a; };

		f(10); // ok.. n = 10;
	}
	f(10);	// 버그..
			// n = 10 을 실행해야 하는데.. n은 파괴 되었습니다.
			// 항상 레퍼런스 캡쳐는 주의 해야 합니다.
}
