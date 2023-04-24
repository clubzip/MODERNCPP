
class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
// �ٽ� : Point �� ����Ʈ �����ڰ� �����ϴ�.
// Point pt; // error

class Rect
{
	Point pt; // ?
public:
	// ����� �ڵ�	// �����Ϸ��� ������ �ڵ�
	// Rect() {}	// Rect() : pt() {}

	// C++98 ������ �ذ�å
	// => ����ڰ� ��������� ����� �����ڸ� ȣ��
	Rect() : pt(0, 0) {}
};

class Rect2
{
	// C++11 ���ʹ� �Ʒ� ó�� �ʵ� �ʱ�ȭ �ϸ� �˴ϴ�
	Point pt1{ 0, 0 }; // ok
	Point pt2( 0, 0 ); // error. �� ���� {}�� �˴ϴ�.
						// �����Ϸ��� pt2�� ��� �Լ��� �ؼ�
};

int main()
{
	Rect r1;
}

