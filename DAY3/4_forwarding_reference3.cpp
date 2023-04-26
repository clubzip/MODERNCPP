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

// T&    : ���� Ÿ���� lvalue �� ������ �ִ�.

// T&&   : 


template<typename T> void f3(T& a)
{
}
int main()
{
	int n = 0;
	
	// 1. ����ڰ� Ÿ���� ��������� �����ϴ� ���
	f3<int>(n);   // T=int		T&=int&     f3(int& a)
	f3<int&>(n);  // T=int&		T&=int& &   f3(int& a)
	f3<int&&>(n); // T=int&&	T&=int&& &  f3(int& a)

	// 2. ����ڰ� Ÿ���� �������� �ʴ� ���
	// => �Լ� ���ڸ� ���� T Ÿ�� ������ �Լ� ����
	f3(3);  // 3�� ���� T �� int �� �����Ϸ��� �ϴµ�..
			// T=int, int&, int&& �� ��� ������ �����ص�
			// 3�� ������ �ִ� ����� ����.. error
	f3(n);	// T=int �� ����
}







template<typename T> void f4(T&& a)
{
}
int main()
{
	int n = 0;
	
	// 1. Ÿ���� ��������� �����ϴ� ���. ? ä�� ������
	f4<int>(? );   // T=?		T&&=?		f4(? a)
	f4<int&>(? );  // T=?		T&&=?		f4(? a)
	f4<int&&>(? ); // T=?		T&&=?		f4(? a)

	// 2. Ÿ�����ڸ� �������� ������ �Լ����ڸ� ���� Ÿ���� ����
	// => �����Ϸ��� T�� ��� ���������� ������ ������
	f4(n);
	f4(3);
}