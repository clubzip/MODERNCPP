// 8_setter1.cpp
// git ���� ������ ������

#include <iostream>
#include <vector>

class Object
{
public:
	Object() {}
	Object(const Object&)     { std::cout << "copy" << std::endl; }
	Object(Object&&) noexcept { std::cout << "move" << std::endl; }
};
int main()
{
	Object o1;
	Object o2 = std::move(o1);	// ??

	// �ٽ�. �����ü�� move �ɼ� �����ϴ�.
	const Object o3;
	Object o4 = std::move(o3); // ??
			// static_cast<o3Ÿ��&&>(o3)
			// static_cast<o3Ÿ��&&>(o3)
}
