class CompilerGeneratedName
{
	int v1;
public:
	CompilerGeneratedName(int n) : v1(n) {}

	inline int operator()(int a, int b) const { return a + b + v1; }

	using PF = int(*)(int, int);

	// ĸ���� ���� ǥ������ �Ʒ� static �Լ��� ����� �����ϴ�.
	// �׷��� �Լ� �����ͷ� ��ȯ�ɼ� �����ϴ�.
	static int helper(int a, int b) { return a + b + v1; }

	operator PF() { return &CompilerGeneratedName::helper; }
};

int main()
{
	int v1 = 0;

	int(*f)(int, int) = CompilerGeneratedName(v1);

	// ĸ���� ���� ǥ������ �Լ� �����ͷ� ��ȯ�ɼ� �����ϴ�.
	// => �Ʒ� �ڵ�� ���� �Դϴ�.
	// => ĸ������ ���� ����ǥ���ĸ� �Լ� �����ͷ� ��ȯ �˴ϴ�.
	int(*f)(int, int) = [v1](int a, int b) { return a + b + v1; };
						// class xxx{}; xxx();
}












