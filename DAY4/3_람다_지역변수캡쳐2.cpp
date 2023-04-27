#include <iostream>

int main()
{
	int v1 = 10, v2 = 10;

//	auto f1 = [v1, v2](int a) { v1 = 100; return a + v1 + v2; }; 
	
	// mutable ���� ǥ���� : operator() �����ڸ� const �Լ��� ��������°�
	auto f1 = [v1, v2](int a) mutable { v1 = 100; return a + v1 + v2; };

	f1(0); // �̼��� v1 = 100 �� ����������, ���纻 v1�� ����Ǵ� ���Դϴ�.

	std::cout << v1 << std::endl; // 10   

	// ���� ǥ������ ����� ��ü�� ũ�� ??
	// => ĸ���� ������ ��� ����Ÿ�� �����ϴ� ��, 
	// => int 2�� ��� ����Ÿ�� �����Ƿ� 8
	std::cout << sizeof(f1) << std::endl; // ??


	// �� f1 ��  ��Ȯ�� ������ ������ ���ô�. => �� ������ �μ���
	class CompilerGeneratedName
	{
		int v1; // ���������� ĸ���ϸ� �����Ϸ��� ����� Ŭ������
		int v2; // <= �̷��� ��� ����Ÿ�� �߰��˴ϴ�.
	public:
		CompilerGeneratedName(int a, int b) : v1(a), v2(b) {}

		inline auto operator()(int a) // const
		{
			v1 = 100;				// () ������ �Լ��� ����Լ����
									// error �Դϴ�.
			return a + v1 + v2;
		}
	};
	auto f1 = CompilerGeneratedName(v1, v2);
}





