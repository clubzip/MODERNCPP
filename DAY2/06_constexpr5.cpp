// 17_static_if - 51 page

template<typename T>
void foo(T a)
{
	// if  : ����ð� ���
	//		 ������ �Ҷ� false �� �����Ǿ 
	//	     �ν��Ͻ�ȭ(���ø� => C++�Լ�)�� ���Ե˴ϴ�.
//	if (false)
//		*a = 10; // �� �ڵ�� �����ϱ�� ??

	// if constexpr : ������ �ð� ���
	//				  ������ false ��� �ν��Ͻ�ȭ�� ���Ծȵ�
	//				  C++17 ���� ���Ե� ����
	if constexpr (false)
		*a = 10; // �� �ڵ�� �����ϱ�� ??

}

int main()
{
	foo(0); 
}

