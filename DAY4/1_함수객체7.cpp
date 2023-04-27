// 1_�Լ���ü7.cpp
// cmp1, cmp2, Less, Greater �����ؿ�����
inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }
struct Less { inline bool operator()(int a, int b) { return a < b; } };
struct Greater { inline bool operator()(int a, int b) { return a > b; } };

template<typename T>
void foo(T f)
{
	bool b = f(1, 2); // A
}
int main()
{
	Less    f1;
	Greater f2;
	foo(cmp1); // foo(bool(*)(int, int)) => ġȯ �ȵ�
	foo(cmp2); // foo(bool(*)(int, int)) =>
	foo(f1);   // foo(Less)    => ġȯ ����
	foo(f2);   // foo(Greater) => ġȯ ����
}
// 1. foo �Լ��� � �����ɱ�� ? => 3��
// 2. �� foo �Լ����� "A" �κ��� �ζ��� ġȯ�� ���ؼ� ������ ������
// 3. foo�� main �� �����ϰ� ���� �ڵ�� ������ �Լ��� ������ �������?

// godbolt.org ��.. �Լ���ü 3�� ������ ��������

// MS�����Ϸ��� �ζ��� ġȯ ��� ������ "/Ob1" �ɼ� ����ϸ� �˴ϴ�
// => godbolt.org ���� "MSVC" �˻��� ����ϸ� �˴ϴ�