#include <unordered_set>

typedef std::unordered_set<int>    SETI;
typedef std::unordered_set<double> SETD;

// 아래 처럼 할수 없을까요 ?
// => 타입이 아닌 템플릿 자체에 대한 별명
// typedef std::unordered_set SET; // error

// typedef     : 타입에 대한 별명 만 가능
// C++11 using : 타입에 대한 별명 + 템플릿에 대한 별명

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
