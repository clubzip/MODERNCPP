#include <iostream>
#include <tuple>

template<typename ... Types> void foo(Types ... args)
{
	// args �� �ִ� ��� ��Ҹ� ������ �ʹٸ�
	// args ���� 2��° ���� ������ �ʹ�?? => �ѹ��� �Ҽ� �����ϴ�.

	// ��� 1. pack expansion
	//     2. recursive �� ���� �ڵ�
	//     3. fold expression - C++17

	// ��� 1.
	// => ��� ��Ұ� �����ϴٴ� Ȯ���� ������ �迭�� ������ �ֽ��ϴ�.
	int x[] = { args... }; // {1,2,3}

	// => ����� Ÿ���� �ٸ��� tuple �� ��������
	std::tuple<Types...> t(args...);

	auto e1 = std::get<0>(t);
	auto e2 = std::get<1>(t);
}


int main()
{
	foo(1, 2, 3);
}

