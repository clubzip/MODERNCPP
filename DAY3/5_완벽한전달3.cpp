#include <iostream>

void hoo(int&&) {}

template<typename F> void chronometry(F f, int& arg)
{
	f(arg);
}

// main					chronometry					hoo(int&&)
// hoo(10) ===========================================> ok.
//  
// chronometry(10) ====> int&& arg = 10 으로 받음
//						 hoo(arg) ====================> error
//								  arg가 lvalue이므로 hoo(int&)검색
//                        

template<typename F> void chronometry(F f, int&& arg)
{
	// 이 함수에 10이 전달되면 "int&& arg = 10" 이 되는데..
	// 원래 인자는 10 이라는 rvalue 인데, 받을때 사용한 
	// arg 는 lvalue 
	
//	f(arg); // error. hoo(int&)찾음.

	f(static_cast<int&&>(arg)); // ok
}

int main()
{
	hoo(10); 
	chronometry(hoo, 10);
}
