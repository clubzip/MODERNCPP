// 14_override  - 44 page

class Base
{
public:
	virtual void foo() {}
	virtual void goo(int a) {}
	virtual void hoo() {}
};

class Derived1 : public Base
{
public:
	// ���� �Լ� �����ǽ� �Ǽ�(��Ÿ)
	// => �Ǽ��� ������ ������ �ƴϴ�.
	// => ���ο� �����Լ��� ������ٰ� �����Ϸ��� ����
	// => ������ ����
	virtual void fooo() {}
	virtual void goo(double a) {}
	virtual void hoo() const  {}
};
class Derived2 : public Base
{
public:
	// C++11 ���ʹ� �����Լ��� ������ �Ҷ� "override" ���̴� ����
	// �����մϴ�.
	virtual void fooo()        override {}
	virtual void goo(double a) override {}
	virtual void hoo() const   override {}
};

int main()
{
}