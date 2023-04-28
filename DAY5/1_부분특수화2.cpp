#include <iostream>

// STL vector 의 구현원리를 생각해 봅시다.
template<typename T>
class vector
{
	T* buff;
public:
	vector(std::size_t sz)
	{
		buff = new T[sz];
	}
};

// vector<bool> 의 경우는 구현 방법을 변경합니다.
// => bool에 맞도록 최적화된 구현을 사용하자는 의미!
template<>
class vector<bool>
{
	int* buff;
public:
	vector(std::size_t sz)
	{
		buff = new int[(sz/32) + 1];
					// 0  ~ 31 : int 한개(4byte)
					// 32 ~ 63 : int 2개
					// vector<bool> v(100) 은 int 4개로 관리.
					// 100 바이트가 아닌 16바이트로 관리
	}
};


int main()
{
	vector<int>  v1(100);
	vector<bool> v2(100); // 이 순간을 생각해 봅시다.
}
