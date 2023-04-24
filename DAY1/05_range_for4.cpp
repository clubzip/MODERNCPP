#include <iostream>
#include <vector>

template<typename T>
class reverse_view
{
	T& c;
public:
	reverse_view(T& c) : c(c) {}

	auto begin() { return ? ; }
	auto end()   { return ? ; }
};

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	for (auto e : v) // 앞쪽 부터 열거
	{
		std::cout << e << ", ";
	}
}
