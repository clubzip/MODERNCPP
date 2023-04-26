// 91 page
int main()
{
	int n = 10;

	// �������� ������(2�� ������)�� ����� �ֽ��ϴ�.
	int *p = &n;
	int* *pp = &p; // ok

	// ���۷����� ���۷����� ���� �ڵ����� ����� �����ϴ�.
	int& r = n;
	int& &rr = r; // error

	using LREF = int&; 
	using RREF = int&&;

	// ������ �������� ���۷����� ���۷����� ������ �ƴմϴ�
	// => reference collapsing ��Ģ���� ��� �˴ϴ�.

	// reference collapsing
	LREF& r3 = n ;	// int&  &		=> int&
	RREF& r4 = n ;	// int&& &		=> int&
	LREF&& r5 = n;  // int&  &&		=> int&
	RREF&& r6 = 3;  // int&& &&		=> int&&
}
// reference collapsing �� �Ʒ�ó�� ���ø� ���� ���� �߻�.
template<typename T> void foo(T a)
{
	T& r = a; // �Ʒ� ó�� ��������� r�� Ÿ���� ������ ������
			  // int& & r = a;
			  // int& r = a;
}
int n = 0;
foo<int&>(n);




