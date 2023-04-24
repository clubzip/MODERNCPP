// 10_user_define_literal2
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std::chrono; 

using namespace std::literals; // ǥ���� �����ϴ� ���ͷ� ���̻�

void foo(const char* s) { std::cout << "const char*\n"; }
void foo(std::string s) { std::cout << "string\n"; }

int main()
{
	foo("hello");  // const char*
	foo("hello"s); // string
				// operator""s("hello") �� ��ȯ Ÿ���� 
				// string
				// ������ ���ͷ� ���̻� ���ڴ� unsinged long long
				// ���ڿ� ���ͷ��� const char*

	auto s1 = "hello";
	auto s2 = "hello"s;

	std::chrono::seconds s1(3); // 3��
	auto s2 = 3s;			    // ���� ����

	std::chrono::seconds s3 = 1h + 3min + 20s;

	std::cout << s3.count() << std::endl;

	// RUST �ڵ�
//	let n1 = 10_i32; // i32 Ÿ���� ���ͷ� 10
//	let n2 = 10_u32; // u32(unsigned int 32bit)
}



