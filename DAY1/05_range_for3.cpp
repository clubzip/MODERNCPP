#include <iostream>
#include <vector>

struct Point3D
{
	int x, y, z;
};
// ����� ���� Ÿ���� ��ü�� range-for �� �������� 
// �Ʒ� ���� begin, end�� ������ �˴ϴ�.
// ��, ��� ���(���)�� ����Ÿ���� ���ӵ� �޸��� ��츸
int* begin(Point3D& p) { return &(p.x);}
int* end(Point3D& p)   { return &(p.z) + 1; }

int main()
{
	Point3D p;
	p.x = 10;
	p.y = 20;
	p.z = 30;

	for (int n : p)  // �ɱ�� ? �ǰ��Ϸ��� �ʿ��� ���� ?
		std::cout << n << std::endl; 

	// auto first = std::begin(p);
}















