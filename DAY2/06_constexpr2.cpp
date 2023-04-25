
// C++11 ���� �߰��� constexpr ���

// constexpr : ������ �ð��� ���� �˾ƾ� �Ѵ�.
// const     : readonly ������ ����� ��
int main()
{
	int n = 0;

//	std::cin >> n; // n�� ����ð��� �Է� ������ �ֽ��ϴ�.

	const int c1 = 3; // ok
	const int c2 = n; // ok. n�� �����̹Ƿ�
					  // ������ �Ҷ� �ʱⰪ�� �˼� ����.

	constexpr int c3 = 3; // ok
	constexpr int c4 = n; // error. 
						// ������ �Ҷ� �ʱⰪ�� �˾ƾ� �Ѵ�.!

	int arr[c1]; // C++�� ��������
				 // �ٸ� ���� readonly �� �����մϴ�.
				 // (ex, RUST, C#)

}