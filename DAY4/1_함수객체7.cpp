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
	foo(cmp1);
	foo(cmp2);
	foo(f1);
	foo(f2);
}
// 1. foo �Լ��� � �����ɱ�� ?
// 2. �� foo �Լ����� "A" �κ��� �ζ��� ġȯ�� ���ؼ� ������ ������
// 3. foo�� main �� �����ϰ� ���� �ڵ�� ������ �Լ��� ������ �������?
