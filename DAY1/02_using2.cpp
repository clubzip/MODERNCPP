#include <unordered_set>

typedef std::unordered_set<int>    SETI;
typedef std::unordered_set<double> SETD;

// �Ʒ� ó�� �Ҽ� ������� ?
// => Ÿ���� �ƴ� ���ø� ��ü�� ���� ����
// typedef std::unordered_set SET; // error

// typedef     : Ÿ�Կ� ���� ���� �� ����
// C++11 using : Ÿ�Կ� ���� ���� + ���ø��� ���� ����

template<typename T>
using SET = std::unordered_set<T>;

int main()
{
//	std::unordered_set<int>    s1;
//	std::unordered_set<double> s2;
	SETI s1;
	SETD s2;

	SET<int> s3; // => std::unordered_set<int>
}
