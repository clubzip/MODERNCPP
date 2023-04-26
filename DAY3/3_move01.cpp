#include <iostream>
#include <string>
#include <vector>

// move 개념
// string 메모리 관리
// => 문자열의 길이가 작을때(보통 16자)는 객체 자체에 보관하고
// => 문자열의 길이가 긴 경우만 힙을 할당해서 문자열 보관
// SSO(small string optimization) 이라고 합니다.

int main()
{
	std::string s1 = "to be or not to be";
	std::string s2 = "to be or not to be";

	std::string s3 = s1;	// 깊은 복사(문자열 자체를 메모리 복사)
	std::string s4 = std::move(s2);
						// s2가 사용하던 문자열 자원을 s4가 사용
						// s2는 더이상 자원 없음.

	std::cout << s1 << std::endl; // "to be or not to be"
	std::cout << s2 << std::endl; // ""


}

