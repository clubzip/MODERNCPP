#include <iostream>
#include <type_traits> 

#pragma pack(1)	// ����ü ��� ������ 1byte ������
struct PACKET
{
	char cmd;
	int  data;
};
static_assert(sizeof(PACKET) == sizeof(char) + sizeof(int),
			"error, unexpected padding");


/*
int main()
{
	std::cout << sizeof(PACKET) << std::endl; // ?
}
*/

template<typename T> void object_set_zero(T* p)
{
	// std::is_polymorphic<T>::value : T Ÿ���� �����Լ��� ������
	//									true 

	static_assert(!std::is_polymorphic<T>::value,
		
		"error, T has virtual function");

	memset(p, 0, sizeof(T)); // ������ �ڵ� �ϱ�� ?
}
class A
{
	int data;
public:
	virtual void f() {}
};
int main()
{
	A a;
	object_set_zero(&a);

}
