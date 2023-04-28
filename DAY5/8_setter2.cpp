#include <iostream>
#include <string>
#include <vector>

// 핵심 : Setter 만들기 #1

class People
{
private:
	std::string name;
	int age;

public:
	// C++98 시절의 코드
	void set(const std::string& n) { name = n; }
};


int main()
{
	std::string s1 = "kim";
	std::string s2 = "lee";

	People p;

	p.set(s1);
	p.set(std::move(s2));	

	std::cout << s1 << std::endl; // "kim"
	std::cout << s2 << std::endl; // ""

}








