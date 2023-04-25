
// 19_structure_binding - 52 page
#include <map>
#include <string>

struct Point3D
{
	int x = 0, y = 0, z = 0;
};
int main()
{
	Point3D p3d;

	// ��� ����� ������ �ʹ�.. util C++14
	int x = p3d.x;
	int y = p3d.y;
	int z = p3d.z;

	// C++17 ������ �Ʒ� ó�� �Ҽ� �ֽ��ϴ�.
	// => "structure binding" �̶�� ����
	auto [a1, a2, a3] = p3d;	// auto a1 = p3d.x
								// auto a2 = p3d.y
								// auto a3 = p3d.z

//	int[b1, b2, b3] = p3d; // error. auto �� ����

//	auto [c1, c2] = p3d;	// error. ������ �����ؾ� �մϴ�.

	// �迭�� �����մϴ�.
	int arr[3] = { 1,2,3 };
	auto [d1, d2, d3] = arr;


	//-------------------------
	std::map<std::string, std::string> m;

	m["mon"] = "������";

	// map�� pair�� �����մϴ�.
	std::pair<std::string, std::string> p;
	p.first = "tue";
	p.second = "ȭ����";

	m.insert(p); // m["tue"] = "ȭ����"

	//------------------------------
	// map �� ��� ��� �����ϱ�
	// 1. C++11 ��Ÿ��
	for (auto& p : m)
	{
		// p�� pair �Դϴ�.
		auto key = p.first;
		auto value = p.second;
	}
	// 2. C++17 ��Ÿ�� - �Ʒ� �ڵ�� ���� �����մϴ�.
	for (auto [key, value] : m)
	{

	}

}
