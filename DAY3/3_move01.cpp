#include <iostream>
#include <string>
#include <vector>

// move ����
// string �޸� ����
// => ���ڿ��� ���̰� ������(���� 16��)�� ��ü ��ü�� �����ϰ�
// => ���ڿ��� ���̰� �� ��츸 ���� �Ҵ��ؼ� ���ڿ� ����
// SSO(small string optimization) �̶�� �մϴ�.

int main()
{
	std::string s1 = "to be or not to be";
	std::string s2 = "to be or not to be";

	std::string s3 = s1;	// ���� ����(���ڿ� ��ü�� �޸� ����)
	std::string s4 = std::move(s2);
						// s2�� ����ϴ� ���ڿ� �ڿ��� s4�� ���
						// s2�� ���̻� �ڿ� ����.

	std::cout << s1 << std::endl; // "to be or not to be"
	std::cout << s2 << std::endl; // ""


}

