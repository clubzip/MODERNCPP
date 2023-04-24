// 58 page
class Vector
{
	int sz;
public:
	// explicit ������ : ���� �ʱ�ȭ�� �����ϰ�
	//					���� �ʱ�ȭ�� ����Ҽ� ����.
	//					C++98 ����
	explicit Vector(int s) : sz(s) {}
};
void foo(Vector v) {} 			  

int main()
{
	// ���ڰ� �Ѱ��� �����ڰ� ������ �Ʒ��� ǥ����� �����մϴ�.
	Vector v1(10);		// C++98 ��Ÿ���� direct �ʱ�ȭ
	Vector v2 = 10;		// C++98 ��Ÿ���� copy �ʱ�ȭ

	Vector v3{ 10 };	// C++11 ��Ÿ���� direct �ʱ�ȭ
	Vector v4 = { 10 }; // C++11 ��Ÿ���� copy �ʱ�ȭ
	//----------------
	foo(10); // "Vector v = 10" �� �ǹ� �Դϴ�.
			 // => �Լ��� ���� ������ ���� �ʱ�ȭ ����
}







