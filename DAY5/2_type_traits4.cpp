// 4_type_traits3 - 210 page
#include <iostream>


// �ٽ� 1. C++ ǥ��  traits �� ����Ϸ���
#include <type_traits>

// C++14 ���� �Ʒ� �ڵ尡 ǥ�ؿ� �߰��˴ϴ�.
/*
template<typename T>
using remove_pointer_t = typename std::remove_pointer<T>::type;
*/

template<typename T> void foo(T a)
{
	// �ٽ� 2. �����Ϸ��� : std::is_xxx<T>::value
	bool b1 = std::is_pointer<T>::value; // C++11
	bool b2 = std::is_pointer_v<T>;      // C++17
										// �Ϻ� �����Ϸ��� 
										// C++17 �ɼ��� ��� ����
	// �ٽ� 3. ���� Ÿ���� ��������
	typename std::remove_pointer<T>::type n1; // C++11
	std::remove_pointer_t<T> n2; // ���� ����      C++14

}


int main()
{
	int n = 0;
	foo(&n);
}
