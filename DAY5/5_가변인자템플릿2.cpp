
// �Ʒ� ���ø��� "���ڰ� �Ѱ��� �Լ��� ����" �Ҽ� �ֽ��ϴ�.
template<typename T> void f1(T arg) {}

// ���� ���� �Լ� ���ø�
// => "������ ����, Ÿ�Կ� ���� ���� ��� ������ �Լ� ��������"
template<typename ... Types> void f2(Types ... args) {}

int main()
{
	f2();
	f2(1);
	f2(1, 3.4);
	f2(1, 3.4, 'A');	// Types : int, double, char
						// args  : 1, 3.4, 'A'


	f1(10);	 // f1(int) ����
	f1(3.4); // f1(double) ����
//	f1(10, 3.4); // error
}
