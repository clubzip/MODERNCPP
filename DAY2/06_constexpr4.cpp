// �Ʒ� �ڵ尡 �� �������� ������ ������ ?
/*
class A
{
	int data;
public:
	void foo()
	{
		*data = 10;  // error. data �� int Ÿ���̹Ƿ�
					 // *data �Ҽ� ����.
	}
};
int main()
{
	A a;
}
*/

template<typename T> 
class A
{
	T data;
public:
	void foo()
	{
		*data = 10;  
	}
};
int main()
{
	// ������ �ν��Ͻ�ȭ
	// => Ŭ���� ���ø��� ��� �Լ��߿���
	//    ���Ȱ͸� ���� �ν��Ͻ�ȭ("���ø�=>C++Ŭ����")
	//    �� ���Եȴ�..
	A<int> a;
	a.foo(); // ����� ��� �Լ���. 
			 // foo �Լ��� ���ø� => C++ Ŭ���� �����
			 // ���Ե˴ϴ�.
}