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

	// move �����ڿ� ���ܰ� ���ٴ� ������ �������� noexcept �ؾ� �մϴ�.
	// cppreference.com ���� "std::string" ã�� ������.

	// f() noexcept;	   // ���ܾ���
	// f() noexcept(true); // ���ܾ���
	// f() noexcept(false); // ��������.

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

