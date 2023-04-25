#include <iostream>

// C++11 ���� ��ȯ ǥ���
// => �Լ��� ��ȯ Ÿ���� �Լ�() ���ʿ� ǥ���ϴ� ����
template<typename T1, typename T2>
auto Mul(T1 a, T2 b) -> decltype(a * b)
{
	return a * b;
}
// �Ʒ� ó���ص� �Ǳ� �մϴ�.
// ��, 
// 1. return ������ �Ѱ� �϶��� �����մϴ�.
// 2. auto �߷��� ����ϰ� �˴ϴ�. 
//    a*b�� ����� int& �� ���� Ÿ���� int �Դϴ�.
template<typename T1, typename T2>
auto Mul2(T1 a, T2 b)
{
	return a * b;
}
// �Ʒ� ó���ϸ� auto �߷��� �ƴ� decltype ���� �߷�
// ��, return ���� 2���̻��̸� ����
template<typename T1, typename T2>
decltype(auto) Mul2(T1 a, T2 b)
{
	return a * b;
}



int main()
{
	std::cout << Mul(3, 4.1) << std::endl;

}

