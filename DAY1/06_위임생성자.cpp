#include <iostream>
// 6_���ӻ����� - 24page
class Point // : public Base
{
public:
	int x, y;
public:
	// ����� �ڵ�	// �����Ϸ��� �߰��� ��� Ŭ���� ������ ȣ�� �ڵ�
	//Point()			// : Base()

	Point() : Point(0, 0) // C++11 ���� �����Ǵ� ���� ������ ����
	{
		// �����ھȿ��� �ٸ� ������ ȣ�� ??
		// => �ȵ˴ϴ�.(C++98 ����)
		// Point(0, 0);	// ok
						// ������, �ٸ� �����ڸ� ȣ���ϴ°� �ƴ϶�
						// �ӽð�ü�� ����� ǥ��� �Դϴ�.
	}

	Point(int a, int b) : x(a), y(b)	// : Base()
	{
		// ������ �ʱ�ȭ �ڵ�
	}
};
int main()
{
	Point p;
	std::cout << p.x << std::endl;

}

