#include <list>

// STL ���� ��ӹ޴� ���� ������ ������
// => ��� �Լ� 1 ~ 2������ �߰��ϴ� �ڵ�� ���� ���� �ֽ��ϴ�.
class MyList : public std::list<int>
{
public:
	// ������ ����� ���ٸ� list �� ��� ������ ����� �����ϰ� �������Ո�.��
//	MyList(int sz, int value) : std::list<int>(sz, value) {}
//	MyList(int sz) : std::list<int>(sz) {}

	// ������ ����� ����ϸ� �����̸� �˴ϴ�.
	using std::list<int>::list;

	void dump() {}
};


int main()
{
	MyList st1(10, 3); // 10���� 3���� �ʱ�ȭ
	MyList st2(10);
}




