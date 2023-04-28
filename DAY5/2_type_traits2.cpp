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
	// �� enum �� ����ϳ��� ?
	// bool value = false;  // �̷��� �ϸ�
						 // 1. ������ �ð� ����� �ƴ� "����"!
						 // 2. C++11 �������� ���⼭ �ʱ�ȭ�ȵ�

	// ��ũ�δ� �ȵǳ��� ?
	// ��ũ�� : ������ ���� ��ó���Ⱑ �̹� ó��
	//         ��ó�����Ŀ��� ������ ���� ���� ���ϴ� ��ȣ�� �˴ϴ�.

//	enum { value = false }; // enum hack �̶�� �մϴ�.

	// �׷���, �� C++11 ���ʹ� enum ��� �Ʒ�ó�� �ϸ� �˴ϴ�.
	static constexpr bool value = false;
};

// �ٽ� 2. ������ �����ϴ� �κ� Ư��ȭ ������ ����� true ��ȯ(value=true)
template<typename T> struct is_pointer<T*>
{
//	enum { value = true };

	static constexpr bool value = true;
};

template<typename T> void foo(const T& a)
{
	// ���� T �� int, int*
	if ( is_pointer<T>::value )

		std::cout << "������" << std::endl;
	else
		std::cout << "������ �ƴ�" << std::endl;
}



/*
int main()
{
	int n = 0;
	foo(n);
	foo(&n);
}

enum {mon = 1, tue = 2};
*/
int main()
{
	int n = mon; // => ������ �� "int n =1"
}