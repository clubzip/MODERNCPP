// 6_forwarding_reference1 - ���� ���� �߿�!!
int n = 0;

void f1(int&  r) {}
f1(n); // ok
f1(0); // error

void f2(int&& r) {}
f2(n); // error
f2(0); // ok

// �Լ����ڷ�
// 
// int&  : int Ÿ���� lvalue �� �ްڴٴ� ��
// 
// int&& : int Ÿ���� rvalue �� �ްڴٴ� ��

// T&    : ��� Ÿ���� lvalue �� ������ �ִ�.

// T&&   : ��� Ÿ���� lvalue �� rvalue �� ��� ������ �ִ�.
// 
// �ٽ� 1. "������ �ִ�" ��� ���� "������ �ִ� �Լ��� �����Ѵ�"�°�
// �ٽ� 2. ������ �Լ��� ��� call by value �� �ƴ� reference !!

// lvalue ���� f4(n)	: T=int&	T&&=int& &&	 ���� �Լ� : f4(int& )
// rvalue ���� f4(3)	: T=int		T&&=int&&	 ���� �Լ� : f4(int&& )

// "universal reference" ��� �θ��ڰ� "effective c++���ڰ� ����"

// ������, C++ ǥ������ȸ�� ���Ŀ�
// "forwarding reference" ��� �̸��� ����ϱ�� ����

// T&& : forwarding reference








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
	f4<int>(3);    // T=int		T&&=int&&		f4(int&& a)
	f4<int&>(n);   // T=int&	T&&=int& &&		f4(int& a)
	f4<int&&>(3);  // T=int&&	T&&=int&& &&	f4(int&& a)

	// 2. Ÿ�����ڸ� �������� ������ �Լ����ڸ� ���� Ÿ���� ����
	// => �����Ϸ��� T�� ��� ���������� ������ ������

	f4(n);	// 1. n�� int �̹Ƿ� T=int�� �����ϸ� f4(int&&)�Լ� ����
			//	  => f4(n) �� ����!!
			// 
			// 2. T=int& �� �����ϸ� f4(int&) �Լ� �����ǹǷ� 
			//    => f4(n) �� ���� �ƴ�.
			// T=int&		T&&=int& &&	   �������Լ� : f4(int& a)

	f4(3); // T=int		T&&=int&&		�������Լ� : f4(int&& a)
}