// 4_type_traits3 - 210 page
#include <iostream>
#include <type_traits>

// traits �� ����
// 1. Ÿ������ : is_xxx<T>::value
// 2. ����Ÿ�Ծ�� : xxx<T>::type

// 1. primary template �� ����� "using type = T" ��������

template<typename T> struct remove_pointer
{
	using type = T;
};

// 2. �κ�Ư��ȭ�� ����ؼ� ���ϴ� Ÿ���� ������ �ֵ��� 
//    Ÿ���� �и� �մϴ�.
//    "int*" => "int" �� "*" �� �и�
template<typename T> struct remove_pointer<T*>
{
	using type = T;
};

int main()
{
	remove_pointer<int*>::type n2; 

	std::cout << typeid(n2).name() << std::endl; // int
}
template<typename T> void foo(T a)
{
	// ����!!
	// T�� ���ؼ� remove_pointer �� ����Ҷ��� �ݵ�� typename �ʿ��մϴ�.

//	remove_pointer<T>::type n2; // error. typename �ʿ�

	typename remove_pointer<T>::type n2; // 
}