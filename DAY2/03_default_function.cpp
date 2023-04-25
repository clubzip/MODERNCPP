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

	// ������, �Ҹ���, ���� �����ڵ��� Ư�� �Լ���
	// "�����Ϸ��� ���� �����ǰ�, �θ� �˷��� ��� ����"
	// �ϴ� ���� �ڸ��ϴٰ� �մϴ�.
	// trivial ������ : �����Ϸ��� �����, �ϴ� ���� ���� ������
	//      
	std::cout << std::is_trivially_constructible<Point>::value
		      << std::endl;
}




