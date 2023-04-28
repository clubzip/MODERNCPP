#include <iostream>
#include <type_traits>


// T�� ������ ���� �����ϴ� ���

// type traits : ���ø� ���� T�� Ÿ�Կ� ���� ������ �����ϴ� ���
// => ������ �ð��� ����
// => "��Ÿ �Լ�" ��� �� ���˴ϴ�.
// => �ַ� �κ� Ư��ȭ ����� ����� �˴ϴ�.

// �ٽ� 1. primary template �� ����� false ��ȯ(value=false����ǹ�)
template<typename T> struct is_pointer
{
	enum { value = false };
};

// �ٽ� 2. ������ �����ϴ� �κ� Ư��ȭ ������ ����� true ��ȯ(value=true)
template<typename T> struct is_pointer<T*>
{
	enum { value = true };
};

template<typename T> void foo(const T& a)
{
	// ���� T �� int, int*
	if ( is_pointer<T>::value )

		std::cout << "������" << std::endl;
	else
		std::cout << "������ �ƴ�" << std::endl;
}




int main()
{
	int n = 0;
	foo(n);
	foo(&n);
}