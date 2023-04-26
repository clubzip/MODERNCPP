// 6_forwarding_reference1 - ���� ���� �߿�!!
int n = 0;

void f1(int&  r) {}
f1(n); // ok
f1(0); // error

void f2(int&& r) {}
f2(n); // error
f2(0); // ok

// �Լ����ڷ�
// int&  : int Ÿ���� lvalue �� �ްڴٴ� ��
// int&& : int Ÿ���� rvalue �� �ްڴٴ� ��

// T&    : 


template<typename T> void f3(T& a)
{
}
int main()
{
	int n = 0;
	
	// 1. ����ڰ� Ÿ���� ��������� �����ϴ� ���
	f3<int>(? );  // T=?		T&= ?   f3(? a)
	f3<int&>(? );  // T=?		T&= ?   f3(? a)
	f3<int&&>(? );  // T=?		T&= ?   f3(? a)
}







template<typename T> void f4(T&& a)
{
}
