// 9_enum - 32 page


// ���ڷ� ������ �䱸
void foo(int dayofaweek) {}

enum DAYOFWEEK { sun = 0, mon = 1};

int main()
{
	foo(0);  // 0: �Ͽ���, 1 : ������...
	foo(sun); // �� �ڵ� ���� �������� ����.!! 
	
	// �� �ڵ��� ���� 1. �̸� �浹 ���ɼ�
	// => �������� enum �� enum�̸� ���� ��� �̸������ε� ��밡��
	int sun = 10;
	foo(sun); // enum ��� ? �������� ? => ��������
	foo(DAYOFWEEK::sun); // 

	// 2. ���� enum ����� int�� ��ȯ ����
	int week = DAYOFWEEK::sun; // ok

	foo(DAYOFWEEK::sun); // 
	foo(100);

}





