struct Point
{
	int x, y;
	Point(int a, int b) : x(a), y(b) {}
};

// ��� 1. call by value
// => Ư¡ : ���纻 ����
// void foo(Point pt) {}

// ��� 2. call by const-reference
// => Ư¡ : ���纻�� ������ "�����"�� �߰��ȴ�.
// => foo �ȿ��� �б⸸ �Ұ��̶�� ���� �ڵ�..
void foo(const Point& pt) {}

// ���纻�� ����, ����� �߰��� ���� �������� ������ ?
// => C++98 ������ ����� ����!
// => C++11 ���ʹ� ����

// ��� 3. 2���� �Լ� ����
void foo(Point&  pt) {}
void foo(Point&& pt) {}

// ��� 4. forwarding reference(T&&) �� ����ϸ�
//		  ���3�� 2�� �Լ��� �ڵ������Ҽ� �ִ�
template<typename T>
void foo(T&& pt)
{
}

int main()
{
	Point pt(0, 0);

	// foo �Լ��� lvalue �� rvalue(�ӽð�ü)�� ��� ������ �ʹ�.
	foo(pt);
	foo(Point(0,0));
}
