#include <iostream>

template<typename T> void printv(const T& a)
{
	std::cout << a << std::endl;
}
template<typename ... Types> void foo(Types ... args)
{
	// args �� ��� ��Ҹ� ȭ�� ��� �ϰ� �ʹ�.
//	printv(args...); // printv(E1, E2, E3); �̹Ƿ� error

//	printv(args)...; // printv(E1), printv(E2), printv(E3)  
					 // �� �ǵ� �ε� - error

	// pack expansion �� ��� ������ �������� �ʽ��ϴ�.
	// 1. �Լ� ȣ���� () ���̳�			: goo(args...)
	// 2. {} �ʱ�ȭ					: { args... }
	// 3. ���ø� ���� <> ����� �����մϴ�. <Types...>

	int x[] = { ( printv(args), 0)... };
		// { (printv(E1), 0), (printv(E2), 0), (printv(E3), 0) };
			
}


int main()
{
	foo(1, 2, 3);
}

