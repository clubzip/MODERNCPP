#include <string>

int main()
{
	// move �� copy ���� ������ �����ϴ�.
	// C++ : ���簡 �⺻�̰�, move �� �ʿ��ϸ� std::move() ���

	std::string s1 = "to be or not to be";
	std::string s2 = s1; // ����(���� ����)
	std::string s3 = std::move(s1); // �̵�

	// move �� �⺻���� �ϰ�, ���Ҷ��� �����ϸ� ���� ?
	// �Ʒ� �ڵ尡 "Rust" �Դϴ�.
	let s1 = String::from("to be or not to be");
	let s2 = String::from("to be or not to be");

	let s3 = s1; // move!!
	let s4 = s2.clone(); // ����!!
}