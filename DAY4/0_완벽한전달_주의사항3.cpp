// forwarding reference �̾߱�

template<typename T> class Test
{
public:
	// �Ʒ� �Լ��� ���ڰ� "forwarding reference" �ϱ�� ?
	// => �ƴմϴ�.!!
	// => �Ʒ� �ڵ忡�� T�� �Լ� ���ø��� �ƴ� Ŭ���� ���ø��� ����
	// => �Ʒ� �Լ��� �Լ� ���ø��� �ƴմϴ�. Ŭ���� ���ø��� �Ϲ� ����Լ�
	void foo(T&& arg)
	{
	}

	// forwarding reference �� �Ƿ��� �Լ� ��ü�� ���ø� �̾�� �մϴ�.
	template<typename U>
	void goo(U&& arg)
	{
	}
};
int main()
{
	int n = 0;
	Test<int> t; // �� ���� T�� int �� �����Ǿ����ϴ�.
				 // ����, foo �� ����� "foo(int&&)"�� Ȯ����.
	// �Ʒ� �ڵ带 �����غ�����. ������ ������� ?
	t.foo(n);   // error
	t.foo(10);  // ok

	t.goo(n); // ok
	t.goo(10);// ok

	// auto&& �� rvalue reference �ϱ�� ? 
	// forwarding reference �ϱ�� ?  => ����
	// T&& r1 = 10
	auto&& r1 = 10; // ok  int&& r1 = 10
					// auto : int,  auto&& : int&&
	auto&& r2 = n;  // ok  int&  r2 = n
					// auto : int&, auto&& : int& && => int&

//	decltype(n)&& 
}

