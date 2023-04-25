// decltype Ÿ�� �߷� - 71page
int main()
{
	int n = 10;
	int& r = n;
	const int c = 10;
	int* p = &n;

	// decltype �߷� ��Ģ 1. () �ȿ� �ɺ��� �̸��� ������
	// => �ش� �ɺ��� ������ ���� ������ Ÿ������ ����

	decltype(n) d1; // int d1;
	decltype(r) d2; // int& d2;   �ʱⰪ�� ���� ������ ����
	decltype(c) d3; // const int d3;   �ʱⰪ ������ ����
	decltype(p) d4; // int* d4;

	// auto ���� ������
	auto a = r;		// int a = r;
	decltype(r) d;  // int& d;
}