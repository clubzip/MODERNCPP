#include <iostream>


template<typename T>
//int foo(T a)            { std::cout << "T" << std::endl; return 0; }
typename T::type foo(T a) { std::cout << "T" << std::endl; return 0; }
// typename int::type foo(int a) {} 


int foo(...) { std::cout << "..." << std::endl; return 0; }

int main()
{
	foo(3); // 1. ���ڸ� ���� �Լ��� �����ϹǷ� �̼���
			//    foo(T) ������ �����ϰ� �˴ϴ�.
			// 2. T=int �� �߷еǰ� ���� �Լ��� �����ϰ� �˴ϴ�.
			// 3. �׷���, "int::type" �̶�� ǥ����� �����Ƿ�
			//		�Լ� ��������!!
			// 4. �� ��� ������ �ƴϰ�, �ĺ����� ���� �˴ϴ�.
			// 5. �׷��� foo(...) ȣ�� �˴ϴ�.

	// �� ������ "SFINAE" ��� �մϴ�.
	// 
	// => Substitution Failure Is Not An Error.

}