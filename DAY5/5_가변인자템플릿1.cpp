// 7_�����������ø�1 - 225 page
// �������� Ŭ���� ���ø�

template<typename T> class vector
{
};

// C++11 ���� ���ø� ���ڸ� "���� ����"�� ���� �����մϴ�.
template<typename ... Types> class tuple
{
};

int main()
{
	vector<int> v1;			// ok
//	vector<int, double> v2;	// error

	// tuple ���� Ÿ���� ��� ���� �����մϴ�.
	tuple<int> t1;			// Types : int
	tuple<int, double> t2;	// Types : int ,double
	tuple<> t0;
}