
class Meter
{
	int value;
public:
	Meter(int n) : value(n) {}
};

Meter operator""m(int n)
{
	Meter me(n);
	return me;
}
int main()
{
	// ��� ���ͷ��� Ÿ���� �ֽ��ϴ�.
	double d = 3.4;	// 3.4 �� double
	float f = 3.4f; // ���ͷ� ���̻� "f" �� ���ͷ��� float�� �ؼ��� �޶�°�

	// C++11 ���� ����ڰ� ���ͷ� ���̻縦 ����� �ְ� �Ǿ����ϴ�.
	
	Meter n1 = 3m; // �̼��� �����Ϸ��� ��ӵ� �Լ��� ã�Ե˴ϴ�.
				   // operator""m(3)

//	Gram  n2 = 3gram;
}




