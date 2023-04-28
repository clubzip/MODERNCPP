// 2_typename
struct Test
{
	enum { data = 0 };
	using DWORD = int;
};
int p1 = 0;

template<typename T> void foo(T a)
{
	// �Ʒ� �ڵ忡�� * �� �ǹ̸� ������ ������
	Test::data  * p1;	// �� ���ƿ��� * �� ���ϱ��� �ǹ�
	Test::DWORD * p1; 	// �� ���ƿ��� * �� ������ ������ �����ϱ�����
						// ������
	// "Ŭ�����̸�::�̸�" ���� "�̸�" ��
	// 1. ��		: enum ���, static member data
	// 2. Ÿ��	: using �Ǵ� typedef ��.. 

	// �����̸�(dependant name)
	// => ���ø� ���ڿ� �����ؼ� ������ �Ǵ� �̸�
	// => "T::�̸�"
	// => �����Ϸ��� �⺻������ ������ �ؼ��Ѵ�.

	T::data  * p2; // error. p2�� ã���� ����.
	T::data  * 10; // ok

//	T::DWORD * p2; // error. �����Ϸ��� DWORD�� ������ �ؼ��ؼ�
					//       * �� ���ϱ�� ����, 
	typename T::DWORD* p2; // ok
					// dependant name �� ���� �ƴ� 
					// Ÿ������ �ؼ��� �޶�� �ǹ�.
}


int main()
{
	Test t;
	foo(t);
}