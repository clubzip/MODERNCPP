int main()
{
	int  n1 = 3.4;	// ok.. 에러는 아니고, 경고 발생
					// 그런데, 아주 나쁜 코드
					// C/C++을 제외한 거의 모든 언어는 에러

	char c1 = 500;	// ok.. 그런데, 오버 플로우 발생 
					// 나쁜 코드.

	// prevent narrow - 56 page 중간부분
	// => {} 초기화 문법에서는 데이타 손실이 발생하면 error

	int n2{ 3.4 };	// error. 
	char c2{ 500 }; // error.

	char c3 = { 500 }; // 복사 초기화도 역시 에러

}