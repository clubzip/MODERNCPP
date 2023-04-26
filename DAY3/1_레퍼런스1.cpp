struct Point
{
	int x, y;
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point pt(0, 0);

	// ��Ģ 1. non-const lvalue reference �� lvalue �� ����ų�� �ִ�
	Point& r1 = pt;			// ok 
	Point& r2 = Point(0, 0);// error

	// ��Ģ 2. const lvalue reference �� lvalue, rvalue�� ���
	//        ����ų�� �ִ�
	const Point& r3 = pt;			// ok
	const Point& r4 = Point(0, 0);	// ok

	// ��Ģ 3. rvalue reference �� rvalue �� ����ų�� �ִ�.
	// => ����� ���� �ӽð�ü(rvalue)�� ����ų�� �ִ�
	// => move, �Ϻ��� ������ ���ؼ� �ʿ�.. C++11
	Point&& r5 = pt;			// error
	Point&& r6 = Point(0, 0);	// ok

	// const Point&& �� �� �� ��쳪�� ?
	// => rvalue �� ����Ű�µ�, ����ϴ� ��찡 �����ϴ�...
	// => move ����� ����
}




void draw_line(const Point& from, const Point& to)
{
	// pt �� ����Ű�� ��ü�� �б⸸
}

void init_point(Point& pt)
{
	// pt �� ����Ű�� ��ü�� ����
	pt.x = 10;
	pt.y = 10;
}


