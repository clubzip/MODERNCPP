// 3_������������ĸ��3-1.cpp
#include <functional>

// reference capture �� �׻� dangling �� ���輺�� �ֽ��ϴ�.
int main()
{
	std::function<void(int)> f;
	{
		int n = 10;

		f = [&n](int a) { n = a; };

		f(10); // ok.. n = 10;
	}
	f(10);	// ����..
			// n = 10 �� �����ؾ� �ϴµ�.. n�� �ı� �Ǿ����ϴ�.
			// �׻� ���۷��� ĸ�Ĵ� ���� �ؾ� �մϴ�.
}
