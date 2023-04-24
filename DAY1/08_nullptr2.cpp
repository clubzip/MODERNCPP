#include <iostream>

void foo(void*) { std::cout << "foo" << std::endl; }
void goo(char*) { std::cout << "goo" << std::endl; }

// nullptr �� ����!!
// => boost ���̺귯������ �Ʒ�ó�� ���� ����߾����ϴ�.
// => C++11 ����鼭�� �Ʒ� ó�� ������� �ƴ϶�
//   "Ű����� ����" �Ǿ����ϴ�. ������ �Ʒ� �ڵ�� �����ϴ�.
struct nullptr_t
{
	// "��ȯ ������" ��� �����Դϴ�.
//	operator void* () { return 0; }

	template<typename T>
	operator T* () { return 0; }
};
nullptr_t mynullptr;

int main()
{
	foo(mynullptr); // mynullptr => void* ���� �Ͻ��� ��ȯ �ʿ�
					// "mynullptr.operator void*()"
	goo(mynullptr);
}







