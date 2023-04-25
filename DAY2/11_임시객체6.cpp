// 11_�ӽð�ü6.cpp
#include <string>

template<typename T>
const T& mymax(const T& a, const T& b)
{
	return a < b ? b : a;
}
int main()
{
	// �ӽð�ü�� const& �� �������Ҽ� �ִ�!
	const std::string& s = std::string{ "hello" };

	const std::string& ret = mymax( std::string{"A"}, 
								    std::string{"B"});

	// ret �� ��� ����ص� �ɱ�� ?
	// => ����ϸ� �ȵ˴ϴ�. 
	// => dangling reference �ϼ� �ֽ��ϴ�.
	// => �ӽð�ü�� ���ʿ� ����Ų const& �� �� ���� ����˴ϴ�.
	
	// mymax()�� ���ڰ� �ӽð�ü�� �ƴϾ��ٸ� ret ��밡��
	// �ӽð�ü ���ٸ� ret �� dangling reference
}
// cppreference.com ���� std::max ã�� ������.