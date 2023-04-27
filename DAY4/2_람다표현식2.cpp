// 5_람다표현식1
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	std::sort(v.begin(), v.end(), 
		[](int a, int b) { return a < b; });
	
	// 위 한줄의 코드를 컴파일러는 아래 코드로 변경합니다.
	class CompilerGeneratedName
	{
	public:
		inline auto operator()(int a, int b) const
		{
			return a < b;
		}
	};
	std::sort(v.begin(), v.end(), CompilerGeneratedName() );
}





