#include <iostream>
#include <vector>

template<typename T> class reverse_view
{
	T& c;
public:
	reverse_view(T& c) : c(c) {}
	auto begin() { return c.rbegin() ; }
	auto end()   { return c.rend() ; }
};
int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

//	reverse_view<std::vector<int>> rv(v);
	reverse_view rv(v); // C++17 ���ʹ� ���ø����� ��������

//	for (auto e : v) // ���� ���� ����
//	for (auto e : rv) 
	for (auto e : reverse_view(v) ) // �ӽð�ü�� ����
	{
		std::cout << e << ", ";
	}
}
