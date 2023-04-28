#include <iostream>
#include <string>
#include <vector>

// �ٽ� : Setter ����� #1

class People
{
private:
	std::string name;

public:
	// C++98 ������ �ڵ�
	// C++98 ���� : 100��
	// C++11 ���� : best �� �ƴմϴ�. move �����ȵǴ� setter
//	void set(const std::string& n) { name = n; } // �׻󺹻�
//	void set(const std::string& n) { name = std::move(n); }
									// n����� ��ü�̹Ƿ� �׻󺹻�

	// setter ���鶧 move ���� �Ϸ��� 2�� ������ �մϴ�.
	// C++11 ���Ŀ� �ּ��� �ڵ��Դϴ�.
	// �ذ�å 1. 2�� ���弼��
//	void set(const std::string& n) { name = n; }
//	void set(std::string&& n) { name = std::move(n); }

	// �ذ�å 2. T&& ����ϸ� �� 2���� �ڵ������մϴ�.
	template<typename T>
	void set(T&& n)
	{
		// ������ �´� ���� ?
		name = n;					// 1. �׻� ����
		name = std::move(n);		// 2. �׻� move
		name = std::forward<T>(n);	// 3. ����ڰ� set�����ڸ�
						// lvalue�� ������ ����
						// rvalue�� ������ move
	}

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


