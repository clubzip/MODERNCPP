// 13_default_function - 41 page
#include <type_traits>
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) {}

	// �ƹ��ϵ� ���� ���� ���� ���� �����ڰ� �ʿ��ϸ�

	// 1. ����ڰ� ���� ������ ����
//	Point() {}	// bad

	// 2. �����Ϸ����� ��û
	// => �����Ϸ��� �����ڸ� ���� �����ϹǷ� ��� ���� �˰��ִ�
	// => ����ȭ�� ���� �ߵȴ�.
	Point() = default;	// good
};

int main()
{
	Point p1;
	Point p2(1, 2);
}




