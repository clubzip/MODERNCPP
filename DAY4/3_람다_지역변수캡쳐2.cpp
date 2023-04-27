#include <iostream>

int main()
{
	int v1 = 10, v2 = 10;

	auto f1 = [v1, v2](int a) { v1 = 100; return a + v1 + v2; }; 
	
	// �� f1 ��  ��Ȯ�� ������ ������ ���ô�. => �� ������ �μ���
	class CompilerGeneratedName
	{
		int v1; // ���������� ĸ���ϸ� �����Ϸ��� ����� Ŭ������
		int v2; // <= �̷��� ��� ����Ÿ�� �߰��˴ϴ�.
	public:
		CompilerGeneratedName(int a, int b) : v1(a), v2(b) {}

		inline auto operator()(int a) const
		{
			v1 = 100; 
			return a + v1 + v2;
		}
	};
	auto f1 = CompilerGeneratedName(v1, v2);
}





