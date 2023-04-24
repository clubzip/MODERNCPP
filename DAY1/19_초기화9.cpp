// 1_�ʱ�ȭ8 - 62page
#include <iostream>
#include <initializer_list> // �ٽ�

void foo(std::initializer_list<int> e)
{
}
int main()
{
	// std::initializer_list<int> 
	// => ��� �ʱⰪ�� �޸𸮿� �����(��ġ�� ǥ�ؿ��� ���� �ȵ�)
	// => ��κ� �����Ϸ��� ���ÿ� �Ҵ�(�б⸸ ����)
	// => s ��ü�� "������ 2��" �Ǵ� "������+����"

	std::initializer_list<int> s = { 1,2,3,4,5 };

	auto p1 = s.begin();
	auto p2 = s.end();

	// *p1 = 10; // error. �б� ����

	// �� ��������� ??
	// => �Լ� ���ڷ� ����ϱ� ����!!
	// => foo ���� int Ÿ���� ���� "���� ���̷� ���ް���"
	foo(s);
	foo({ 1,2,3 });
	foo({ 1,2,3, 4, 5 });

	// std::initializer_list<int> : �������̰� ������
	//							�迭�� ���� �ϼ���.
}


