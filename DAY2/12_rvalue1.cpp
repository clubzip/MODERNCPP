// 4_rvalue - 87 page
int x = 0;
int  foo() {	return x;}
int& goo() { return x; }

// lvalue : ��ȣ�� ���ʿ� �ü� �ִ� ��
//		    �̸��� �ְ�, ���Ͻ��� �Ѿ ��밡��
//		    & �����ڷ� �ּҸ� ���Ҽ� �ִ�
//			������ ��ȯ�ϴ� �Լ�
// 
// rvalue : ��ȣ�� ���ʿ� �ü� ���� ��
//		    �̸��� ����, ���ϽĿ����� ��밡��
//			&�����ڷ� �ּҸ� ���Ҽ� ����
//			���� ��ȯ�ϴ� �Լ�
//			���ͷ�(10, 3.4��), �ӽð�ü
int main()
{
	int v1 = 10, v2 = 10;

	v1 = 10;	// v1 : lvalue, 10 : rvalue
	10 = v1;
	v2 = v1;
	int* p1 = &v1; // ok
	int* p2 = &10; // error. 

	foo() = 10; // error
	goo() = 10; // ok

	//---------------------------------------
	const int c = 0;
	c = 20;		// c�� lvalue ? rvalue 
}








