
#include <iostream>
template<typename F, typename T>
void chronometry(F f, T&& arg) // int&& arg = 0
{							   // foo(arg); // error
							   // std::nullptr_t arg = nullptr;
							   // foo(arg); // ok	
	f(std::forward<T>(arg));
}
// ���ڷ� ������(�ּ�)�� �䱸!!
void foo(int* p) {}

int main()
{
	foo(0); // ok. 0���� ����!!

//	chronometry(foo, 0); // error
	chronometry(foo, nullptr); // ok.. 
}











// github.com/codenuri/moderncpp  

// ���� DAY4.zip �����ø� �˴ϴ�.