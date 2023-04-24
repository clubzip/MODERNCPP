#include <vector>
#include <string>
#include <memory>

void goo(std::vector<int> v) {}
void hoo(std::string s) {}

int main()
{
	hoo("hello");	// ������ �̻����� �ʽ��ϴ�.
					// �Ǿ�� �մϴ�... �˴ϴ�.

	std::string s1("hello");	// ok
	std::string s2 = "hello";	// ok
						// string(const char*) �����ڴ�
						// explicit �� �ƴմϴ�

	goo(10);	// hoo(10) ������ �ڵ��Ϸ��ٰ� �Ǽ�!!!
				// �ȵǴ°��� �����ϴ�. �ȵ˴ϴ�.
	std::vector<int> v1(10);	// ok
	std::vector<int> v2 = 10;	// error
					// vector(int) �����ڴ� explicit ��� �ǹ�
}
// ��� : �����ڸ� ���鶧 "explicit"�� ǥ������ ������ ���Ǵ��ϼ���
//  ������ "���̴� ��찡 ������", 
//  string ���� ���� ���̸� �����մϴ�.
//  ������ �Ʒ� ���� �ǰߵ� �ֽ��ϴ�.
//  => hoo("hello"); ���� ������ �ϰ�
//  => hoo("hello"s); �� �ڵ常 �ǵ��� ����.

// �����ʱ�ȭ ���� ������� �ٸ� ����� ������� �ʳ���
// => ������ ����ϴ� ��� �ֽ��ϴ�. ������ �Ұ�.. 


