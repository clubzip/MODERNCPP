// 143 
#include <functional>

int main()
{
	// ����ǥ������ ��� ���
	
	// 1. auto ���� - ���� ����
	auto f1 = [](int a, int b) { return a + b; };

	// 2. �Լ� ������
	int(*f2)(int, int) = [](int a, int b) { return a + b; };
					    // class xxx{}; xxx(); �̹Ƿ�
						// �ӽð�ü 

	// 3. std::function : �Լ������Ϳ� ������ ����� STL Ŭ����
	std::function<int(int, int)> f3 = [](int a, int b) { return a + b; };
		
	// �Ʒ� 3�ٿ� ���ؼ� �����غ�����
	f1(1, 2); // f1.operator()(1,2)..
			  // => ������ �ð��� f1�� Ÿ���� �����ؼ� ȣ��
			  // => �ζ��� ġȯ ����
	f2(1, 2); // f2�� ��� �ּҸ� ������ ȣ��
			  // f2�� ���� �̹Ƿ� ���Ҽ� �ִ�.
			  // => �ζ��� ġȯ �ȵ�
	f3(1, 2); // => �ζ��� ġȯ �ȵ�
}