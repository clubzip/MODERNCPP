// 20_Ÿ���߷�5

template<typename T> void foo(T a) {}

int main()
{
	// ���ø��� ȣ��� ������ ���ڷ� Ÿ�� �߷�
	foo(10);
	// T a = 10; ���� �����ϸ� �˴ϴ�.
	auto a = 10; // �ᱹ auto �� ���ø� �߷��� �����մϴ�.

	// �� �ڵ忡�� "auto"�� ���� Ÿ������ �߷еǾ����� 
	// Ȯ���� ��ƽ��ϴ�. �׷���, ���ø����� �ϸ�
	// �پ��� ������� Ȯ�� �����մϴ�.!!

	int  n = 10;
	int& r = n;
	const int c = 10;
	const int& cr = c;

	// auto �߷��� ���ø� �߷а� �����մϴ�.
	// �Ʒ� �� ������ Ÿ���� ������ ������
	// T a1 = n; �̹Ƿ� ��Ģ 1. ����
	//			=> �캯�� const, volatile, reference ������
	//				auto Ÿ�� ����
	auto a1 = n;  // a1 : int
	auto a2 = r;  // a2 : int
	auto a3 = c;  // a3 : int
	auto a4 = cr; // a4 : int

	// T& a5 = n; �̹Ƿ� ��Ģ 2. ����
	//					=> �캯�� reference �Ӽ��� ����
	auto& a5 = n; // auto : int			a5 : int&
	auto& a6 = r; // auto : int			a6 : int&
	auto& a7 = c; // auto : const int,	a7 : const int&
	auto& a8 = cr;// auto : const int,  a8 : const int&

	// ��Ģ 3. auto&& : ����!!! �߿��� �̾߱Ⱑ �����ϴ�.
}

// auto �� pretty ���� ��� ���� �˷��ִ� ��ũ�δ� ���°���?
// => C++ ǥ�ؿ��� �����ϴ�.
// => boost ���̺귯���� type_name �̶�� Ŭ������ ��°����մϴ�.

// auto�� type inference�� modern C++���� ����Ǳ� �����߳��� ?
// template ��Ģ : C++98 ����
// auto : auto ��ü�� Ű���尡 C++11(modernC++)���� ����