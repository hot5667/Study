//�̰����� �п� �����Դϴ�.
#include<iostream>

using namespace std;
int main()
{
	// �ڷ��� (ũ�� ����, byte) Data Type 
	// ������ : char(1), short(2), int(4), long(4), long long(8)
	// �Ǽ��� : float(4), double(8)

	int i = 0;

	// 1 ����Ʈ�� ����� ǥ��
	// 256 ���� -> 0 ~ 255
	unsigned char c = 0;

	c = 0;
	c = 255;


	// 1����Ʈ�� ���, ���� �Ѵ� ǥ��
	// -128 ~ 0 ~127
	char c1 = 0;
	c1 = 1;
	// �ڷ��� (ũ�� ����, byte) Data Type 
		// ������ : char(1), short(2), int(4), long(4), long long(8)
		// �Ǽ��� : float(4), double(8)

	int i = 0;

	// 1 ����Ʈ�� ����� ǥ��
	// 256 ���� -> 0 ~ 255
	unsigned char c = 0;
	/*c = 255;*/


	// 1����Ʈ�� ���, ���� �Ѵ� ǥ��
	// -128 ~ 0 ~127
	char c1 = 0;
	c1 = 1;

	// ���� ���� ã��(2�� ������)
	// �����Ǵ� ����� ��ȣ�� ���� ��, 1�� ���Ѵ�.

	int a = 4 + 4.0;

	//if ����

	int data = 0;

	//�� ������ 
	// == != < <= > >= 

	//���� �� ������
	//<=>

	//Ex 

	//class T {

	//	int m_Val;

	//public:
	//	explicit T(int val) : m_Val{ val } {}
	//	bool operator ==(const T& other) const { return m_Val == other.m_Val; } // < �κ��� �����ϸ�, !(*this < other || other < *this)�� �� �� �ֽ��ϴ�. �� < �� 2ȸ �ϹǷ� ��ȿ�����Դϴ�.
	//	bool operator !=(const T& other) const { return !(*this == other); } // == �κ��� ����
	//	bool operator <(const T& other) const { return m_Val < other.m_Val; }
	//	bool operator >(const T& other) const { return other < *this; } // < �κ��� ����
	//	bool operator <=(const T& other) const { return !(other < *this); } // < �κ��� ����
	//	bool operator >=(const T& other) const { return !(*this < other); } // < �κ��� ����
	//};

	//EXPECT_TRUE(T{ 10 } == T{ 10 });
	//EXPECT_TRUE(T{ 10 } != T{ 20 });
	//EXPECT_TRUE(T{ 10 } < T{ 20 });
	//EXPECT_TRUE(T{ 20 } > T{ 10 });
	//EXPECT_TRUE(T{ 10 } <= T{ 20 } && T{ 10 } <= T{ 10 });
	//EXPECT_TRUE(T{ 20 } >= T{ 10 } && T{ 10 } >= T{ 10 });

	/*-----------------------------------------------------------------------------------------------------------------*/

	//class T_20 {
	//	int m_Val;
	//public:
	//	explicit T_20(int val) : m_Val{ val } {}

	//	std::strong_ordering operator <=>(const T_20& other) const { return m_Val <=> other.m_Val; }
	//	bool operator ==(const T_20& other) const { return m_Val == other.m_Val; }
	//};

	//EXPECT_TRUE(T_20{ 10 } == T_20{ 10 });
	//EXPECT_TRUE(T_20{ 10 } != T_20{ 20 });
	//EXPECT_TRUE(T_20{ 10 } < T_20{ 20 });
	//EXPECT_TRUE(T_20{ 20 } > T_20{ 10 });
	//EXPECT_TRUE(T_20{ 10 } <= T_20{ 20 } && T_20{ 10 } <= T_20{ 10 });
	//EXPECT_TRUE(T_20{ 20 } >= T_20{ 10 } && T_20{ 10 } >= T_20{ 10 });

	if (0 && 200) //����
	{
		data = 1000;
	}




	return 0;
}