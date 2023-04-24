// 1_�ʱ�ȭ9. - 63 page
#include <iostream>
#include <vector>

class Point
{
	int x, y;
public:
	Point(int)      { std::cout << "int" << std::endl;	}
	Point(int, int) { std::cout << "int, int" << std::endl; }
	Point(std::initializer_list<int> e) { std::cout << "initializer_list<int>" << std::endl; }
};
int main()
{
	Point p1(1);		// Point(int) ������ ȣ��
	Point p2(1, 2);		// Point(int, int) ������ ȣ��
	Point p3({ 1,2 });	// Point(std::initializer_list<int>)


	Point p4{ 1,2 };	// �ٽ�..!!!
						// 1. Point(std::initializer_list)
						// 2. 1�� ���ٸ� Point(int, int)

//	Point p5(1, 2, 3);	// error.
						// Point(int, int, int) �� �����ϴ�.

	Point p6{ 1, 2, 3 }; // ok.  Point(std::initializer_list)
	Point p7 = { 1,2,3 };// ok..

	// ��� : ������ ���ڷ� "std::initializer_list" �� ����ϸ�
	//			���� Ÿ���� ���� ���� ���̷� ���� �����մϴ�.

	// C++11�� ���鶧.. �Ʒ� �ڵ带 �ǵ����ϰ� �;����ϴ�.
	// => �׷��� �Ʒ� �ڵ忡 ���� ������ �ʿ� �߽��ϴ�.
	std::vector<int> v1 = { 1,2,3,4,5 };
	std::vector<int> v2{ 1,2,3,4,5 };

	// C++11 ���� ��� STL �����̳ʴ� �迭 ó�� �ʱ�ȭ �����մϴ�.
	// => ��� �����̳ʿ��� "std::initializer_list" �� ���ڷ� ������
	//    �����ڰ� �ֽ��ϴ�.
}


