// 11_�ӽð�ü6.cpp
#include <string>

template<typename T>
const T& mymax(const T& a, const T& b)
{
	return a < b ? b : a;
}
int main()
{
	const std::string& s = std::string{ "hello" };

	const std::string& ret = mymax( std::string{"A"}, 
								  std::string{"B"});

	// ret �� ��� ����ص� �ɱ�� ?
}
