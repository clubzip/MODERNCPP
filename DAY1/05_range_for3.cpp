#include <iostream>
#include <vector>

struct Point3D
{
	int x, y, z;
};
// 사용자 정의 타입의 객체를 range-for 에 넣으려면 
// 아래 같이 begin, end가 있으면 됩니다.
// 단, 모든 멤버(요소)가 동일타입의 연속된 메모리인 경우만
int* begin(Point3D& p) { return &(p.x);}
int* end(Point3D& p)   { return &(p.z) + 1; }

int main()
{
	Point3D p;
	p.x = 10;
	p.y = 20;
	p.z = 30;

	for (int n : p)  // 될까요 ? 되게하려면 필요한 것은 ?
		std::cout << n << std::endl; 

	// auto first = std::begin(p);
}















