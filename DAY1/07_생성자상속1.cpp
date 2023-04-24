// 7_�����ڻ��1 - 26page
class Base
{
	int value;
public:
	// �������� �ֵ� ���� : ��� ����Ÿ�� �ʱ�ȭ
	Base()      : value(0) {}
	Base(int n) : value(n) {}
};
Base b1;    // ok
Base b2(5); // ok

class Derived : public Base
{
public:
	// Derived�� ��� ����Ÿ�� �߰����� �ʰ�, ��� �Լ������� �߰��ϹǷ�
	// �����ڴ� �ʿ� �������ϴ�
	// ������ ��� Ŭ���� ����� �ʱ�ȭ�ؾ� �ϹǷ� C++98 ������ �Ʒ�
	// ó�� �ڵ��߽��ϴ�.
//	Derived()  {}
//	Derived(int n) : Base(n) {}

	// C++11 ���ʹ� "������ ���" ������ ����ϸ� �˴ϴ�.
	using Base::Base; // �� ������ ���� ������ ��Ȱ�� �մϴ�.
	

	void f1() {}
};

int main()
{
	// �Ʒ� 2���� ������ ������
	Derived d1;
	Derived d2(5);
}
