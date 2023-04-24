// 04_beginend2.cpp
#include <vector>


int main()
{
	std::vector<int> v = { 1,2,3 };
	int x[3] = { 1,2,3 };

	auto p1 = mybegin(v);
	auto p2 = mybegin(x);
}