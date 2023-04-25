// 17_static_if - 51 page
#include <type_traits>
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
		*a = 10; // ���� �ƴ�.

	// ���������� �Ʒ� ó�� ����մϴ� - ����ϳ��ڼ���
	if constexpr (std::is_pointer<T>::value)
	{
		// �̺κ��� T�� �������� ��츸 �ν��Ͻ�ȭ�� ���Եǰ�
		// T�� �����Ͱ� �ƴϸ� ������ �ÿ� �Լ� ������ ���ŵ˴ϴ�.
	}
}
int main()
{
	foo(0); 
}

