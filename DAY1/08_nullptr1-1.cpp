#include <iostream>

void foo(int* p) {}

template<typename T>
void forward_foo(T arg) // int arg = 0 �� �߷�
{						// std::nullptr_t arg = nullptr;

	foo(arg);	// arg�� int Ÿ���̸� error
				// arg�� std::nullptr_t Ÿ���̸� ok.. 
}

int main()
{
	int n = 0;
	foo(0);	// ok
//	foo(n);	// error. ���ͷ� 0�� �����ͷ� ��ȯ�ǰ�
			//		  0���� �ʱ�ȭ�� ������ ������ ��ȯ �ȵ�
	foo(0);         // ok. 0�� �Լ� �� ���� ����
//	forward_foo(0); // ??  0�� ������ �޶�� ��û..
					// error.
	forward_foo(nullptr); // ok
}