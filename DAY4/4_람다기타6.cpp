#include <functional>

template<typename T> 
void f1(T f) {}

template<typename T>
void f2(T&& f) {}

int main()
{
	std::less<int> f;

	// �Ʒ� 4���� ���� �ְ� ������ ������
	// f1, f2 �� ���� �Լ��� � �����Ǿ������ ?
	f1(f);
	f1(std::less<int>());
	f2(f);
	f2(std::less<int>());
}