#include <iostream>

class Object
{
public:
	Object() {}
	Object(const Object&)     { std::cout << "copy" << std::endl; }
	Object(Object&&) noexcept { std::cout << "move" << std::endl; }
};

// std::move ����(����)
// T&  : lvalue �ްڴٴ� ��
// T&& : lvalue, rvalue �� ��� �ްڴٴ°�
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
	Object o6 = mymove(Object()); // �ȵǾ� �ұ��? �Ǿ��ұ��?
}



