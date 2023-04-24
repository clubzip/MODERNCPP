#include <map>
#include <string>
using namespace std::literals;

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

void f1(int n) {}
void f2(Point pt) {}

int main()
{
	f1(3);	// �ᱹ "int n = 3" �� �ǹ�
	// ��, "�Լ��� ���� ������ ���� �ʱ�ȭ" �����Դϴ�.

	f1({ 3 }); // C++11 ���� ����. "int n = {3}"

	f2({ 1, 2 }); // Point pt = {1,2}
	//------------------------------
	std::map<std::string, std::string> m;

	// map �� std::pair �� �����մϴ�.

//	std::pair<std::string, std::string> p("mon", "������");
	std::pair<std::string, std::string> p{"mon", "������"};

	m.insert(p);

	m.insert( { "tue", "ȭ����" } ); // ok.. C++11 ����
	// ... insert(const std::pair& ) �̹Ƿ�
}

Point f3() 
{ 
//	return Point(1, 2);  // C++98 ��Ÿ��
//	return Point{ 1, 2 };
	return { 1,2 }; // ok.. ���� Ÿ���� Point ���� �����Ϸ��� �˰� �����Ƿ�!!
}
