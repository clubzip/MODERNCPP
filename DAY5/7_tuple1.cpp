// 8_tuple1 - 245 page
#include <tuple>
#include <iostream>

int main()
{
	// pair : ���� �ٸ� Ÿ�� 2���� ���� - C++98
	std::pair<int, double> p(1, 2.3);
	
	std::cout << p.first  << std::endl; // 1
	std::cout << p.second << std::endl; // 2.3
	
	std::pair<int, std::pair<double, short>> p2(1, { 2.3, 5 });

	std::cout << p2.second.first << std::endl; // 2.3 ������ �غ�����

	// C++11 ���� ������ ���� ���� ���� �ٸ� Ÿ���� �����Ҽ� �ִ�
	// tuple �� ���� �Ǿ����ϴ�.
	std::tuple<int, char, double> t(1, 'A', 3.4);

	std::cout << std::get<2>(t) << std::endl; // 3.4
}