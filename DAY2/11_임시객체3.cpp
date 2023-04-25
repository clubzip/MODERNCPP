// 3_�ӽð�ü1 - 77 page
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// �ӽð�ü�� �Լ� ���� - 81 page
void draw_line(const Point& from, const Point& to) {}

// ���ڷ� ���� ��ü�� reset �ϴ� �Լ�
void init(Point& pt) { pt.x = 0; pt.y = 0; }

int main()
{
	Point p1(1, 1);
	Point p2(5, 5);
	
	draw_line(p1, p2);	// �̷��� �����ϸ�
						// p1, p2�� ���̻� �ʿ� ���
						// {} ����� �ı� �˴ϴ�.
	
	// �Լ��� ���ڷθ� ����Ϸ��� �ӽð�ü�� �����ϴ� ���� 
	// ȿ�����Դϴ�.
	draw_line(Point(1, 1), Point{ 5, 5 }); //() �Ǵ� {}

	//---------------------
	init(p1);			// ��ü�� ���� �����ϴ� ����
						// �������� �´�!!

	init(Point(0, 0));	// ��� �ı��� �ӽð�ü�� �����ϴ°���
						// �������� ���� �ʽ��ϴ�.
	// �׷���
	// const& �� �ӽð�ü�� ������ �ְ�
	// non-const& �� �ӽð�ü�� ������ �����ϴ�.


	std::cout << "-----" << std::endl;
}





