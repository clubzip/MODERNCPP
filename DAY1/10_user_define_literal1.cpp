
class Meter
{
	int value;
public:
	Meter(int n) : value(n) {}
};
// ������ ���ͷ� ���̻�� �ݵ�� ���ڷ� "unsigned long long" ����
// �ؾ� �մϴ�.
// ����ڰ� ���鶧�� �ݵ�� "_" �� �����ؾ� �Ѵ�.
// "_"�� �������� ���� ���� C++ǥ�ؿ��� ����
//Meter operator""m(unsigned long long n)
Meter operator""_m(unsigned long long n)
{
	Meter me( static_cast<int>(n) );
	return me;
}
int main()
{
	// ��� ���ͷ��� Ÿ���� �ֽ��ϴ�.
	double d = 3.4;	// 3.4 �� double
	float f = 3.4f; // ���ͷ� ���̻� "f" �� ���ͷ��� float�� �ؼ��� �޶�°�

	// C++11 ���� ����ڰ� ���ͷ� ���̻縦 ����� �ְ� �Ǿ����ϴ�.
	
//	Meter n1 = 3m; // �̼��� �����Ϸ��� ��ӵ� �Լ��� ã�Ե˴ϴ�.
				   // operator""m(3)

	Meter n1 = 3_m;
			// -3_m : operator""m(3).operator-()

//	Gram  n2 = 3gram;
}




