// 1_�ʱ�ȭ11 - 65 page..
// aggregate initialization

// aggregate Ÿ��
// => �����ڰ� ��� �߰�ȣ�� �ʱ�ȭ ������ Ÿ��
// => C �迭, ����ü ��..

struct Point
{
	int x, y;

	//	Point()             : x(0), y(0) {}	// 1
	//	Point(int a, int b) : x(a), y(b) {}	// 2

	void foo() {} // ��� �Լ��� �־ - aggregate Ÿ�� �Դϴ�.
	
//	virtual void goo() {} // �����Լ��� ������ - aggregate Ÿ�� �ƴ�

//	Point() {}	// ����ڰ� ���� �����ڰ� ������
				// => aggregate Ÿ�� �ƴմϴ�.

	Point() = default;
};

int main()
{
	Point p1;	
	Point p2 = { 1, 2 };
}
