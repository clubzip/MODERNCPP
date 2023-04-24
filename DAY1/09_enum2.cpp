
// C++98 ������ enum
// enum DAYOFWEEK { sun = 0, mon = 1 };

// C++11 �� ���ο� enum
enum class DAYOFWEEK { sun = 0, mon = 1 };

void foo(DAYOFWEEK w)
{
//	int n = w; // error

	int n = static_cast<int>(w); // ok!
}
int main()
{
//	int n1 = sun;			 // error. DAYOFWEEK �̸� �ݵ�� �ʿ�
//	int n2 = DAYOFWEEK::sun; // error. int�� ��ȯ �ȵ�

	DAYOFWEEK n3 = DAYOFWEEK::sun; // ok..
							// �ٽ� : ���� �����ϰ� ����϶�°�
	foo(DAYOFWEEK::sun);
//	foo(100); // error. �������ڵ�.. 
}





