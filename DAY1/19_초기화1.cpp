// �ʱ�ȭ - 55 page
#include <iostream>

int x = 10;

// �ٽ� : Ŭ����(����ü)�� ��� ����Ÿ�� ���� �ʱ�ȭ �����մϴ�.
// => "field initialization" ����
class Test
{
	// �ʵ� �ʱ�ȭ�� ����
	// => "0" ���� ���ͷ��� �ʱ�ȭ�ϴ� ���� ������.
	// => "++x" ���� ǥ����� ���� ������� ������.. 
	int value1 = 0;		// ���� �ִ� �ʱⰪ�� ����
	int value2 = ++x;	// �Ʒ� �����ڰ� ����˴ϴ�.
public:	
	//							// �����Ϸ��� ������ �ڵ�
	Test() {}					// Test(): value1(0), value2(++x){}

	Test(int n) : value2(n) {}  // Test(int n) : value1(0), value2(n) {}
};

int main()
{
	Test t1;
	Test t2(5);

	std::cout << x << std::endl; // �����غ�����. ?
}