//8_nullptr3
#include <iostream>

int main()
{
	// ��� ���ͷ����� Ÿ���� �ֽ��ϴ�.
	3;		// int
	3.4;	// double
	false;	// bool Ÿ���� literal, Ű����
	nullptr;// std::nullptr_t	   Ű����
			// std::nullptr_t Ÿ���� ��� �����ͷ�
			// �Ͻ��� ��ȯ�ȴٴ� ������ �ֽ��ϴ�.

	std::nullptr_t a = nullptr;

	int* p1 = a; // a�� �ᱹ nullptr
}
// std::nullptr_t Ÿ�Կ��� �׷� nullptr�� �ü��ֳ���?
// => ��..!!!
// => ���� obj.operator nullptr_t() �� �ִ� Ÿ���� ����.


