// 8_�Ϻ�������Ȱ��
#include <iostream>
#include <vector>

class Point
{
	int x, y;
public:
	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl; }
	Point(const Point&) { std::cout << "copy ctor" << std::endl; }
};
int main()
{
	std::vector<Point> v;
	
	// vector�� ��� �ֱ�. 
	// 1. �̸��ִ� ��ü�� ���� �ֱ�
//	Point pt(1, 2);
//	v.push_back(pt);

	// 2. �ӽð�ü�� ���� �ֱ�
	// v.push_back( Point(1, 2) );


	// 3.�ٽ�!!! ��ü�� ���� �������� ����
	// ��ü�� ����� ���� ������ ���ڸ� ��������!!

	v.emplace_back(1, 2);
			// �� �Լ� �ȿ��� ���ۿ� ���� "new Point(1,2)"�� ����
	
	// main				emplace_back()	     Point(int a, int b)
	// Point(1, 2) ===========================> ���� ����
	// emplace(1,2) ======> �������� �����ڷ����� ====> 

	std::cout << "-----" << std::endl;
}
// 1. vector<int> v;   // primitive type ���� �ϹǷ�
//						  push_xxx(), emplace_xxx() ����
// 2. vector<Point> v;  // ����� ���� Ÿ�� ����
//	 push_back() => emplace_back()
//   insert()    => emplace()



