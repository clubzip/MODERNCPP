
// github.com/codenuri/moderncpp ���� 
// DAY2.zip �����ø� �˴ϴ�
// 1. ���� Ǯ�� VC ���� ���� �ּ���
// �÷��� �������� ����
// Windows SDK ���� ������ �ּ���







// 11_rawstring
#include <iostream>
#include <string>

int main()
{
	// "\" : Ư�� ���ڷ� ���
	std::string s1 = "\\\\.\\pipe\\server";

	// raw string : "\" �� Ư�� ���ڷ� ������� ����
	// ������ū : "(
	// ������ū : )"
	std::string s2 = R"(\\.\pipe\server)";

	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;

	// 1. " �Ǵ� ' ���� ǥ���Ϸ��� => �׳� ǥ���ϸ� �˴ϴ�.
	std::string s3 = R"(\\.\pi"pe\server)";

	// 2. )" �� ǥ���Ϸ��� ��� �ϳ��� ?
	// => ���۰� ���� ����ڰ� �����Ҽ� �ֽ��ϴ�.
	// => �Ʒ� �ڵ�� "***( �� ����   )***" �� ����
	std::string s4 = R"***(\\.\pi)"pe\server)***";
}