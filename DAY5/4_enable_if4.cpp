#include <iostream>
#include <type_traits>

// ���� C++�� "Ư�� Ÿ��" �� ���� �Լ� �����ε���
// ���� �մϴ�.
void foo(int)    {}
void foo(double) {}

// "Ÿ��"�� �ƴ� "Ư�� ������ �����ϴ� Ÿ�Ե�"�� ���� �����ε��� ������
// ���� ������� ?
//void goo(�����Լ����ִ�Ŭ������) {}
//void goo(�����Լ�������Ŭ������) {}


// enable_if ����� �ٽ� : ���� Ÿ�� �ڸ��� �Ʒ� �ڵ� ��������

// std::enable_if_t< ����, ����Ÿ�� >

// => �� ���� Ÿ���� void ��� ������ ����

template<typename T> 
std::enable_if_t< !std::is_polymorphic_v<T>, void >
goo(T a)
{
	std::cout << "�����Լ��� ���� Ÿ��" << std::endl;
}
template<typename T>
std::enable_if_t< std::is_polymorphic_v<T>, void >
goo(T a)
{
	std::cout << "�����Լ��� �ִ� Ÿ��" << std::endl;
}
class A 
{
	virtual void f() {}
};

int main()
{
	A a;
	goo(a);
}