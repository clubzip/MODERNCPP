// �ٽ� : rvalue, lvalue �� ������ 
//       ����(��ü)�� �ο��Ǵ� ������ �ƴ�
//       ǥ����(expression) �� �ο� �Ǵ� ����
// 
// expression : �Ѱ��� ������ ���Ǵ� �ڵ� ����
//				expression ���κ��� ������ �Ѱ��� ����
//				��ȣ�� = �� �ü� �ִ°�
//				( �޸��Ҵ� �Ǿ��°� ? �ӽ÷� ���� ���ΰ�?)

int main()
{
	int n = 0;
	
	(n + 2) * 3 + 1;

	n = 3;
	(n + 1) = 10;	// n+1 �� "4" �ε�, 4 �� �ӽ÷� ������� ��
					// ��ȣ�� ���ʿ� �ü� ����.
					// "(n+1)" �̶�� ǥ������ rvalue

	(n = 20) = 10;	// "(n=20) = 10" �� �����ϴ�.
					// "n=20" �� ���� ����� "n" 
					// (n = 20) �� lvalue
	++n = 10;	// ok.. ++n�� lvalue
	n++ = 10;	// error. n++�� rvalue
}