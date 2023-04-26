// std::move()�Ұ�
#include <iostream>

class Cat
{
	char* name;
	int   age;
public:
	Cat(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	~Cat() { delete[] name; }

	// ���� ������
	Cat(const Cat& c) : age(c.age)
	{
		name = new char[strlen(c.name) + 1];
		strcpy_s(name, strlen(c.name) + 1, c.name);
		std::cout << "����" << std::endl;
	}

	// rvalue �� ���� ���� �����ڸ� ���� "�̵�(move) ������" ��� �մϴ�.
	/*
	Cat(Cat&& c) : age(c.age), name(c.name)
	{
		c.name = nullptr;
		std::cout << "�̵�" << std::endl;
	}
	*/
};
Cat foo()
{
	Cat c("yaong", 3);
	return c;
}
int main()
{
	Cat c1("nabi", 2);
	Cat c2 = c1;	// ����(copy) ������ ȣ��
	Cat c3 = foo();	// �̵�(move) ������ ȣ��
	Cat c4 = static_cast<Cat&&>(c2);	// 
				// lvalue �� rvalue �� ĳ�����ؼ� move ������ ȣ��ǵ���
	Cat c5 = std::move(c3); // �� �Լ��� �ϴ� ���� ��ó�� ĳ������ �ϴ°��Դϴ�
	
	// ���� : std::move(c3) �ϸ�
	// => c3�� �ڿ�(���ڿ�)�� ���ѱ�� �ǰ�
	//    c3 ��ü�� �ı��Ǵ� ���� �ƴմϴ�. c3�� �ı��� {} �����
	 
	// ���..
	// 1. std::move() ��ü�� �ڿ��� �ű�� ���� �ƴմϴ�.
	// 2. std::move() �� rvalue ĳ���ø� �ϴ� ���̰�
	// 3. ĳ���� ��� Cat Ŭ���� �ȿ� �ִ� move �����ڰ� ȣ��Ȱ�!!!

}

Object obj1;
Object obj2 = std::move(obj1); // �� �ڵ忡��!!

// 1. Object Ŭ�����ȿ� move �����ڰ� ������ move ������ ���
// 2. Object Ŭ�����ȿ� move �����ڰ� ������ copy ������ ���

// ��, ��� Ÿ�Կ� ���ؼ��� std::move() ��밡��.!!
// => ��, ���� �����ڵ� ����(=delete��) �Ǿ��ٸ� ����!!
// => �����Ϸ��� �����ϴ� ���� �����ڰ� ������ ���..!

// Cat �ȿ� ��������ڵ� ������ ������
//Cat c2 = std::move(c1); // move �� ������ copy ȣ��
						// 1. ���� ����� ������ٸ� ok
						// 2. �����Ϸ��� ������ copy ������ ����
						//    ���� ���� ������ runtime error

