class CompilerGeneratedName
{
public:
	inline int operator()(int a, int b) const { return a + b; }

	// �Լ� �����ͷ��� ��ȯ�� ���ؼ� �����Ϸ��� �Ʒ� �ڵ带 �����մϴ�.
	using PF = int(*)(int, int);

	static int helper(int a, int b) { return a + b; }

	operator PF() { return &CompilerGeneratedName::helper; }
};

int main()
{
	int(*f)(int, int) = CompilerGeneratedName();
						// ��ü.operator �Լ�������() 


//	int(*f)(int, int) = [](int a, int b) {return a + b; };
						// class xxx{}; xxx();
}












