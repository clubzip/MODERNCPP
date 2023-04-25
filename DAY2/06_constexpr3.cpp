// C++ ���� constexpr �� 3���� �뵵 �Դϴ�.
// 1. constexpr ���  - C++11
// 2. constexpr �Լ�  - C++11
// 3. constexpr ��� - C++17

// constexpr �Լ� : ������ ���� �������Ҷ� �˼� �ְ�
//			       �Լ� ȣ����� ������ �ð��� ���� �˾ƾ� �ϴ°�
//				   �̶��, �Լ� ������ ������ �Ҷ� ����
//					��, ���� �۾�, �޸� �Ҵ���� �ȵ�.
constexpr int Factorial(int n)
{
	return n == 1 ? 1 : n * Factorial(n - 1);
}
int main()
{
	int n = 5;

	int arr1[ Factorial(5) ]; 

	int arr2[ Factorial(n) ];	// error. ���ڰ��� ������ �Ҷ�
								// �˼� ����. 	
								// ��, g++�� �迭�� ũ��� �����ǹǷ�
								// �Լ� ȣ���� ����ð��� �ؼ�
								// �迭 ũ��� ���
	int s1 = Factorial(n); // ok. ����ð��� ȣ��! 


	int s2 = Factorial(5); // ���ڴ� ������ �ð��� ������
				// ���� ������ �ݵ�� �������Ҷ� �˾ƾ��ϴ� ���� �ƴ�.
				// => �����Ϸ��� ���� ����ð��� ���� ������ �ð��� ����
				//    �ٸ�.

	const int s3 = Factorial(5); 
				// ����ð� �Ǵ� ������ �ð�, �����Ϸ����� �ٸ�

	constexpr int s4 = Factorial(5);
				// �ݵ�� ������ �Ҷ� �����ؾ� �Ѵ�.
}
// godbolt.org �� Factorial �־� ������

// constexpr �Լ� : ������ �ð� �Ǵ� ����ð��� ����
// consteval �Լ� : �ݵ�� ������ �ð� �� �ؾ� �Ѵ�. C++20

constexpr int Add(int a, int b)
{
	return a + b;
}
// C++20 ���� 
consteval int Add(int a, int b)
{
	return a + b;
}