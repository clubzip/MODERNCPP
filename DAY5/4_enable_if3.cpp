#include <iostream>
#include <type_traits>

// std::enable_if<����, T>::type �� �ǹ̸� ������ ������
// ���� true  : "::type" �� T
// ���� false : "::type" �� ����

// �Ʒ� �ڵ��
// T�� ������� "��ȯ Ÿ���� T"
// T�� ���� �ƴϸ� "��ȯ Ÿ�� ����� ����" 
//  => SFINAE �� ���� ������ �ƴ϶� �ĺ����� ����

// ��, T�� �����϶��� ���ø��� ����ϰڴٴ� �ǹ��� �ڵ�

template<typename T> 

typename std::enable_if< std::is_integral_v<T>, T>::type

gcd(T a, T b)
{
	std::cout << "T" << std::endl;
	return 0; .
}




double gcd(double a, double b)
{
	std::cout << "double" << std::endl;
	return 0;
}
int main()
{
	gcd(6, 9);
	gcd(3.1, 5.4);
	gcd(3.1f, 5.4f);
}