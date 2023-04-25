class Point
{
	int x, y;
public:
	Point() {}
	Point(int a, int b) {}
	
	void foo()
	{
		Point p1;
		Point p2(p1); // ���� �����ڰ� private �� �־ ok
				// ��, ��������ڰ� ���� ������ ��ũ ����
	}

	// �����Ϸ��� ��������ڸ� ����� ���� �ϴ� ���
	// 1. C++11 ������ ����ϴ� ���
	// => private ������ ����θ� �����մϴ�.
	//    ����Ҽ� ���� �ϱ� ���� �ǵ������� ���� ����
//private:
//	Point(const Point& p); 

	// 2. C++11 ���� "�Լ� ����" ���� ���
	Point(const Point&) = delete;
};

int main()
{
	Point p1;
	Point p2(1, 2);
	Point p3(p2); // �� �ڵ尡 �� ������ ������ ?
				  // => �����Ϸ��� ������ִ� ��������� ���
}