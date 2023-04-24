
#include <iostream>
#include <type_traits>

// �Ʒ�ó�� ����� �� ��Ҵ� int �� ���� �˴ϴ�.
// enum class DAYOFWEEK { SUN = 0, MON = 1, TUE = 2 };

// �� ��Ҹ� char Ÿ������ ����
enum class DAYOFWEEK : char { SUN = 0, MON = 1, TUE = 2 };

int main()
{
	using type = std::underlying_type<DAYOFWEEK>::type;

	std::cout << typeid(type).name() << std::endl; // char
}




