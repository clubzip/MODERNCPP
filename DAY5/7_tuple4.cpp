// Step 3. 모든 값 보관하기 - 핵심!!! 

template<typename ... Types> struct tuple
{
	static constexpr int N = 0;
};

template<typename T, typename ... Types>
struct tuple<T, Types...> : public tuple<Types...>
{
	T value;

	tuple() = default;
	tuple(const T& n) : value(n) {}

	static constexpr int N = 1;
};

int main()
{
	tuple<> t0;						  // primary 버전 사용
	tuple<short> t1;				  // short 보관
	tuple<double, short> t2;		  // double 보관
	tuple<int, double, short> t3(10); // int 보관
}