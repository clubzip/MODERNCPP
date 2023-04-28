#include <iostream>

class Object
{
public:
	Object() {}
	Object(const Object&)     { std::cout << "copy" << std::endl; }
	Object(Object&&) noexcept { std::cout << "move" << std::endl; }
};

// std::move 원리(구현)
// T&  : lvalue 받겠다는 것
// T&& : lvalue, rvalue 를 모두 받겠다는것
template<typename T>
T&& mymove(T&& obj)
{
	return static_cast<T&&>(obj);
}

int main()
{
	Object o1;
	Object o2 = o1;				// copy
	Object o3 = std::move(o2);	// move
	Object o5 = mymove(o3);		// move
	Object o6 = mymove(Object()); // 안되야 할까요? 되야할까요?
}



