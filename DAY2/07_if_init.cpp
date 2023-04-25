// 7_if_init    50 page

int foo() { return 100; }

int main()
{
	int ret = foo();

	if (ret == 0)
	{
	}
	// C++17 ���� �� �ڵ带 �Ʒ� ó�� ǥ�� �����մϴ�.
	// "if with init" �̶�� ���� �Դϴ�.
	
	// if ( �ʱ�ȭ���� ; ���ǹ� )

	if (int ret2 = foo() ; ret2 == 0) 
	{
		 // ret2�� ���⼭�� ��밡��
	} // <== �ı�.
	
	// �Ʒ� ó�� �ϸ� �ȵǳ��� ?
	if (foo() == 0)
	{
		// foo ��ȯ��(ret2) �� �����մϴ�.
	}
	//-----------------------------
	// switch �� ����
	switch (int n = foo(); n)
	{
	case 1:break;
	case 2:break;
	}
	//---------------------
	// while �� �ɱ�� ?
	// => �ȵ˴ϴ�. if �� switch �� ����..
	// => ������ ���� ������ "for"���� �ֱ� ����
	while (int cnt = 0; cnt < 9)
	{
		++cnt;
	}
}

