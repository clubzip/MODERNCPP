// 3_�ӽð�ü1 - 77 page
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// �ӽð�ü�� Ư¡ - 79 page
int main()
{
	Point pt(1, 2);
	
	// Ư¡ 1.
	pt.x = 10;			// ok	
	Point(1, 2).x = 10;	// error. �ӽð�ü�� ��ȣ�� ���ʿ�
						// �ü� ����. lvalue�� �ɼ� ����.
						// �ӽð�ü�� rvalue �̴�.
						
	// 2. 
	Point* p1 = &pt;	// ok		
	Point* p2 = &Point(1, 2);	// error.
								// �ӽð�ü�� �ּҿ����ڷ�
								// �ּҸ� ���Ҽ� ����.
	// ��Ģ 3
	Point& r1 = pt;				// ok	
	Point& r2 = Point(1, 2);	// error. �ӽð�ü��
								// non-const reference��
								// ����ų�� ����.
	

	// ��Ģ 4
	const Point& r3 = Point(1, 2); // ok
						// �ӽð�ü �� ��� �����δ� ����ų��
						// �ִ�.
						// �� ��� �ӽð�ü�� ������ r3�� ��������
						// ����˴ϴ�.
						// "lifetime extension"
	r3.x = 10; // error. r3�� �������

	// ��Ģ 5. C++11�� ���鶧 �ӽð�ü�� ����� ����
	// ����ų �ʿ䰡 ������ϴ�.(move�� �Ϻ��� ������ ����)

	// rvalue reference �� ����� ���� �ӽð�ü�� ����ų�� �ִ�
	Point&& r4 = Point(1, 2);
	r4.x = 10; // ok
}





