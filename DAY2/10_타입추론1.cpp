// 20_Ÿ���߷�1 - 69 page
// Ÿ�� �߷� ����

int main()
{
	int x[3] = { 1,2,3 };

	// auto : �캯�� ǥ�������� �º��� Ÿ���� ����
	//        ������ �ð��� ����, ����ð� ������� ����..
	auto n = x[0]; // int n = x[0]

	// decltype(exp) : () ���� ǥ������Ÿ�� ����
	decltype(n) d; // int d


	// �Ʒ� �ڵ���� Ÿ���� ������ ������
	const int c = 0;

	auto a1 = c; // 1. const int a1 = c;
				 // 2. int a1 = c;  ==> ����..

	decltype(c) d1; // �� ���� "const int d1"
					// �ʱⰪ�� ��� error.

	// Ÿ�� �߷��̶�(type deduction, type inference)
	// => �����Ϸ��� Ÿ���� �����ϴ� ������ ���°�

	// Ÿ�� �߷��� �߻��ϴ� 3���� ���
	// 1. template
	// 2. auto
	// 3. decltype
	// => 1, 2���� ������ ��Ģ ���
	//    3���� �ٸ� ��Ģ

}