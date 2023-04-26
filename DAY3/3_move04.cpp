#include <iostream>

// shallow copy vs deep copy

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


	Cat(const Cat& c) : age(c.age)
	{
		name = new char[strlen(c.name) + 1];
		strcpy_s(name, strlen(c.name) + 1, c.name);
	}
	// �ӽð�ü�� ���� ���� �����ڸ� 
	// �߰��� �����ڴ� ��!!
	// �ӽð�ü�� rvalue �̹Ƿ� ���ڸ� "Cat&&"
	Cat(Cat&& c) : age(c.age), name(c.name)
	{
		// �Ʒ� �ڵ带 �����ϱ� ���ؼ�
		// �ӽð�ü�� ��������� ����ų�� �־�� �մϴ�.
		c.name = nullptr; 
	}
};



Cat foo()
{
	Cat c("yaong", 3);
	return c;
}

int main()
{
	Cat c = foo(); // �̼����� �޸� ��Ȳ��
				   // ������ ������.
}
