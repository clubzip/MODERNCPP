// 6_enable_if1.cpp

// �Ʒ� enable_if �� �̹� C++11 ǥ���Դϴ�.
// => ������ �Ʒ��� ���� �����մϴ�.
template<bool, typename T = void > struct enable_if
{
	using type = T;
};
template<typename T> struct enable_if<false, T> 
{
	// �ٽ� : �κ� Ư��ȭ ������ "type" �� ���ٴ� ���Դϴ�.
};

int main()
{
	// �Ʒ� �ڵ忡�� �� ������ Ÿ���� ?
	enable_if<true, int>::type  n1; // int n1
	enable_if<true>::type       n2; // void n2  void ���������ȵǹǷ�
									//			error
	enable_if<false, int>::type n3; // error. false ��������
									//        "::type" �� ����.

	// ����
	// enable_if<����, A>::type ���� "::type" ��!!

	// ������ true  �̸� : "A" �� ����
	// ������ false �̸� : "::type" ��ü�� ����
}
