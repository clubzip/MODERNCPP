// 04_beginend2.cpp
#include <vector>

// �����̳� ���� : �����̳��� begin �� �ٽ� ȣ��
template<typename T>
auto mybegin(T& c) { return c.begin(); }

// �迭 ���� : �ٽ��� ���ø�����Դϴ�.
// => �Ʒ� ���ڰ� ����� ���̽ø� "C���� �迭�� ����Ű�� ������"
//    �� ã�� ������
// => �迭�� ����Ű�� �����Ϳ� �迭�� ����Ű�� ������ ������ ���
template<typename T, unsigned int SZ>
T* mybegin( T(&arr)[SZ] ) { return arr; }

int main()
{
	std::vector<int> v = { 1,2,3 };
	int x[3] = { 1,2,3 };

	auto p1 = mybegin(v);
	auto p2 = mybegin(x);
	auto p3 = myend(x); // <== ����.. ����� ������.
}