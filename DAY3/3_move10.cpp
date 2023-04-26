#include <iostream>
#include <vector>

class Object
{
public:
	Object() {}

	Object(const Object&) {	std::cout << "copy" << std::endl;	}
	
	// move ������ ���� ����
	// => �ǵ��� ���ܰ� �߻����� �ʵ��� �����!!
	// => ���ܰ� ���ٰ� �����Ϸ����� �˷� �ּ���

	Object(Object&&) noexcept 
	{
		std::cout << "move" << std::endl;
	}
};

int main()
{
	Object o1;
	Object o2 = o1; // ���� ������
	Object o3 = std::move(o1); // move ������
	Object o4 = std::move_if_noexcept(o2); 
					// Object �� move �����ڰ� ���ܰ� ���ٸ� move
					// ���� ���ɼ��� �ִٸ�(noexcept�� ������ �ʾҴٸ�)copy




	std::vector<Object> v(5);
	std::cout << "----------------" << std::endl;

	v.resize(10); // �̼����� ������ �����غ��ô�.

	std::cout << "----------------" << std::endl;
}

