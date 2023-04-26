#include <iostream>

void hoo(int&&) {}

template<typename F> void chronometry(F f, int& arg)
{
	f(arg);
}

// main					chronometry					hoo(int&&)
// hoo(10) ===========================================> ok.
//  
// chronometry(10) ====> int&& arg = 10 ���� ����
//						 hoo(arg) ====================> error
//								  arg�� lvalue�̹Ƿ� hoo(int&)�˻�
//                        

template<typename F> void chronometry(F f, int&& arg)
{
	// �� �Լ��� 10�� ���޵Ǹ� "int&& arg = 10" �� �Ǵµ�..
	// ���� ���ڴ� 10 �̶�� rvalue �ε�, ������ ����� 
	// arg �� lvalue 
	
//	f(arg); // error. hoo(int&)ã��.

	f(static_cast<int&&>(arg)); // ok
}

int main()
{
	hoo(10); 
	chronometry(hoo, 10);
}
