// 5_람다표현식5
#include <iostream>
#include <vector>
#include <algorithm>

// 람다표현식과 타입

int main()
{
	auto f1 = [](int a, int b) { return a + b; };
				// class xxx{};  xxx();

	auto f2 = [](int a, int b) { return a + b; };
				// class yyy{}; yyy();

	// 모든 람다 표현식은 다른 타입입니다.
	// => 타입의 이름은 컴파일러마다 다릅니다.
	std::cout << typeid(f1).name() << std::endl;
	std::cout << typeid(f2).name() << std::endl;


}





