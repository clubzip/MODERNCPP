#include <unordered_set>

// C 스타일 코드 - typedef 
// typedef int DWORD;
// typedef void(*F)(); 

// C++11 using : 아래 2줄은 위 2줄과 완전히 동일합니다.
// 장점 1. typedef 보다 보기 쉽고, 편리합니다.
//     2. type 뿐 아니라 template 도 alias 가능.
using DWORD = int;
using F = void(*)();

int main()
{
	DWORD n; // int n
	F     f; // void(*f)()
}