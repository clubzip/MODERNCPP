#include <functional>

int add(int a, int b) { return a + b; }

// ����ǥ������ ���ڸ� �޴� ��� 

// �Լ��� ���鶧 ���ڷ� "ȣ�� ������ ��ü�� �޴� �ּ��� ���"
// ȣ�� ������ ��ü : �Լ�, �Լ���ü, ���� ǥ���ĵ�


// ��� 1. �Լ� ������
// => ĸ���� ���� ǥ������ ������ ����.
// => �Լ� �����ͷ� ��ȯ�� �������� �ʴ� �Լ� ��ü�� ������ ����.
// => f ���� �ζ��� ġȯ �ȵ�.

// ���� : ���ø��� �ƴϹǷ� �ڵ� ���� ����
// void find_if(int(*f)(int, int)) { f(1, 2); }

// ��� 2. std::funtion ���
// Ư¡ 1. f(1,2) �� �ζ��� ġȯ�� �ȵ�
//     2. ȣ�Ⱑ���� ��� ���� ������ �ִ�.
//     3. ���ø��� �ƴϹǷ� �ڵ� ������ �ȵ�.
//void find_if( std::function<int(int, int)> f) { f(1, 2); }


// ��� 3. ���ø� - call by value
// ���� : template �̹Ƿ� find_if �� ������ ������
// ���� : f(1,2) �� �ζ��� ġȯ��

// ���纻�� ���� �������� ������ ?
// => ��κ��� �Լ���ü�� ũ�Ⱑ �۽��ϴ�. 
// => ����, �̹���� ������ �ʽ��ϴ�.. ���� ����
//template<typename T>
//void find_if(T f) { f(1, 2); }

// ��� 4. ���ø� - lvalue reference
// => ����ǥ������ �ӽð�ü�ε�..
// => lvalue reference�δ� ������ ����.
// template<typename T>
// void find_if(T& f) { f(1, 2); }


// ��� 5. ���ø� - const lvalue reference
// => operator() �� ��� ��� �Լ� �ΰ͸� ȣ���Ҽ� �ְ� �ȴ�
// => mutable ���� ǥ������ ����Ҽ� ����.
/*
template<typename T>
void find_if(const T& f) 
{
	f(1, 2);    // f.operator()(1,2) ���� f�� ��� ��ü�̹Ƿ�
				// () �������Լ��� �ݵ�� ��� �Լ� �̾�� �Ѵ�.
}
*/
// ��� 6. T&& forwarding reference
// => ������ ���� ���. ���� ���!
// => ���ڷ� �ް� �Ǵ� �Լ���ü�� ũ�Ⱑ ū��� �� ����� ����.
template<typename T>
void find_if(T&& f)
{
	f(1, 2);    
}

int main()
{
	int v = 0;
	find_if( [](int a, int b) { return a + b; } );
	find_if( [v](int a, int b) mutable { return a - b + v; } );

	find_if( add );
	find_if( std::plus<int>() ); // C++ ǥ�� �Լ� ��ü
}

// ��� : ����ǥ������ �Լ� ���ڷ� ��������
// => �Ʒ� �߿��� �Ѱ� �����ϼ���.
// 1. foo(T f) 
// 2. foo(T&& f)
// 3. foo( std::function<int(int, int)> f)

// ���� ������ ?? ��Ȳ�� ���� �ٸ��ϴ�.
// find_if ��� ���޵Ǵ� �Լ���ü�� ũ�Ⱑ ũ�� �ʰ�
// �ζ��� ġȯ���� �߿� �ϹǷ� - T f !!!

// cppreference.com  std::find_if ã�ƺ�����  3��° ���� Ȯ���غ�����
