#include <iostream>
#include <vector>
#include <string>

template<typename T>
class Object
{
	T data;
	std::string name;
public:
	Object() {}
	Object(const Object& obj) 
		: name(obj.name), data(obj.data)
	{
		std::cout << "copy" << std::endl; 
	}

	// move 생성자에 예외가 없다는 보장이 있을때만 noexcept 해야 합니다.
	// cppreference.com 에서 "std::string" 찾아 보세요.

	// f() noexcept;	   // 예외없음
	// f() noexcept(true); // 예외없음
	// f() noexcept(false); // 예외있음.

	Object(Object&& obj) 
		noexcept ( noexcept(data(std::move(obj.data)))   )
		: name( std::move(obj.name) ), data(std::move(obj.data))
	{
		std::cout << "move" << std::endl;
	}
};



int main()
{
	Object o1;
	Object o2 = o1; 
	Object o3 = std::move(o1); 
	Object o4 = std::move_if_noexcept(o2);

}

