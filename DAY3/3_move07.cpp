#include <string>

int main()
{
	// 1. primitive type(int, double�� ǥ��Ÿ��)�� ��ü��
	//    std::move()�� ����ص� ������, �ƹ��� ȿ���� �����ϴ�.
	int n1 = 10;
	int n2 = std::move(n1);
}