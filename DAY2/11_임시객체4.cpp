// 3_�ӽð�ü1 - 77 page
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};
// �ӽð�ü�� �Լ� ��ȯ�� -  82 page

/*
void f1(Point  pt) {} // call by value    : ���纻 ����
void f2(Point& pt) {} // call by refernce : ���纻 ���� �ȵ�

int main()
{
	Point p(0, 0);
	f1(p);
	f2(p);
}
*/

Point pt(1, 2);

Point foo()  // return by value  : �ӽð�ü�� ��ȯ
{
	return pt; // pt�� ��ȯ���� �ʰ�, pt�� ���纻�� ��ȯ
}
Point& goo() // return by reference : �ӽð�ü�� ������ ������ǹ�
{
	return pt; // pt�� ���� ��ȯ
}

int main()
{
	foo().x = 10; // error. �ӽð�ü.x = 10
	goo().x = 10; // ok.. pt.x = 10;
}

// ��, ���������� ���� ���� ��ȯ�ϸ� �ȵ˴ϴ�.
Point& hoo()
{
	Point pt(1, 2); // ��������!!!
	return pt;  // ����.. ���� ����ϸ� �ȵ˴ϴ�.
				// ���������̰ų�, ��� ������.. 
				// �Լ� ȣ��ڿ��� �ı����� �ʴ� ������ �־�� �մϴ�.
}