// 7_���ٱ�Ÿ1 - 150
class Test
{
	int data = 0;
public:
	void foo()
	{
		// ��� ����Ÿ ĸ�� ?
		//auto f = [](int a) { return a + data; }; // error

		// auto f = [data](int a) { return a + data; }; // error
							// data �� �������� �ƴմϴ�.

		// �ٽ� : ����ǥ���Ŀ��� �������Ÿ�� ����Ϸ��� this��
		//		 ĸ���ϸ� �˴ϴ�.
		auto f = [ this ](int a) { return a + data; };



	}
};

int main()
{
	Test t;
	t.foo(); 
}

