#include <string>

int main()
{
	// 1. primitive type(int, double�� ǥ��Ÿ��)�� ��ü��
	//    std::move()�� ����ص� ������, �ƹ��� ȿ���� �����ϴ�.
	// std::move() : rvalue �� ĳ�����ϴ°�
	//               ĳ���� ����� �ش� Ÿ���� move ������ ȣ��
	// int Ÿ���� ���������, move �������� ������ �����ϴ�.
	int n1 = 10;
	int n2 = std::move(n1); // int n2 = n1 �� �ᱹ ����

	// 2. �����͵� �����մϴ�.
	int* p1 = new int;
	int* p2 = std::move(p1); // int* p2 = p1 �� ����
	
	// ����, ����ڰ� ���� �޸𸮸� �Ҵ��� ��� �ݵ�� ������ ����ڰ�
	// �ؾ� �մϴ�.
	delete p1;

	// 3. std::move() �� �ᱹ ����� ���� Ÿ�Կ� ���ؼ��� 
	//    ȿ���� ���� �ֽ��ϴ�.(move �����ڸ� ������ Ÿ��)
	std::string s1 = "to be or not to be";
	std::string s2 = std::move(s1); // string Ŭ������ move������ȣ��
}