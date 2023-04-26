#include <string>

int main()
{
	// 1. primitive type(int, double등 표준타입)의 객체는
	//    std::move()를 사용해도 되지만, 아무런 효과는 없습니다.
	// std::move() : rvalue 로 캐스팅하는것
	//               캐스팅 결과로 해당 타입의 move 생성자 호출
	// int 타입은 복사생성자, move 생성자의 개념이 없습니다.
	int n1 = 10;
	int n2 = std::move(n1); // int n2 = n1 와 결국 동일

	// 2. 포인터도 동일합니다.
	int* p1 = new int;
	int* p2 = std::move(p1); // int* p2 = p1 과 동일
	
	// 또한, 사용자가 직접 메모리를 할당한 경우 반드시 해지도 사용자가
	// 해야 합니다.
	delete p1;

	// 3. std::move() 는 결국 사용자 정의 타입에 대해서만 
	//    효과를 볼수 있습니다.(move 생성자를 제공한 타입)
	std::string s1 = "to be or not to be";
	std::string s2 = std::move(s1); // string 클래스의 move생성자호출
}