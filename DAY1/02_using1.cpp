#include <unordered_set>

// C ��Ÿ�� �ڵ� - typedef 
// typedef int DWORD;
// typedef void(*F)(); 

// C++11 using : �Ʒ� 2���� �� 2�ٰ� ������ �����մϴ�.
// ���� 1. typedef ���� ���� ����, ���մϴ�.
//     2. type �� �ƴ϶� template �� alias ����.
using DWORD = int;
using F = void(*)();

int main()
{
	DWORD n; // int n
	F     f; // void(*f)()
}