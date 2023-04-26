// ��������� ����� ������ ���ô�.
class Point
{
	int x, y;
public:
	Point() {}				// 1
	Point(int a, int b) {}	// 2

	// ���� �������� ��Ȯ�� ����� ������ ���ô�.
	// ��� 1. call by value
	// => ���ڸ� ������ ����� "Point pt = p2" �ε�..
	//    �̶� �ٽ� ���� �����ڰ� ȣ��˴ϴ�.
	// => �ᱹ, ���� �����ڰ� ������ ȣ��Ǵ� �ڵ�..
	//    ������ ����!!
	// => ���� �������� ���ڴ� call by value �� �ɼ� �����ϴ�.
	// Point(Point pt) {} // Point pt = p2

	// ��� 2. call by non-const lvalue reference
	// => ������ �ƴϰ�, ������ ����.
	// => ��, lvalue �� ������ �ְ� rvalue(�ӽð�ü)�� ������ ����.
	// => ��Ÿ������ ��ȯ�ϴ� �Լ��� ����� ������ ����.
	//    Point ret = foo(); // error
	//Point(Point& pt) {} // "Point& pt = p2" 

	// ��� 3. call by const lvalue reference
	Point(const Point& pt) : x(pt.x), y(pt.y) {}
};

Point foo()
{
	Point pt(0, 0);
	return pt;
}
int main()
{
	Point p1;		
	Point p2(1, 2); 
	Point p3(p2);	// ���� ������ ���. 
	Point p4 = foo(); // Point p4( foo() );
}




