//이공간은 학원 전용입니다.
#include<iostream>

using namespace std;
int main()
{
	// 자료형 (크기 단위, byte) Data Type 
	// 정수형 : char(1), short(2), int(4), long(4), long long(8)
	// 실수형 : float(4), double(8)

	int i = 0;

	// 1 바이트로 양수만 표현
	// 256 가지 -> 0 ~ 255
	unsigned char c = 0;

	c = 0;
	c = 255;


	// 1바이트로 양수, 음수 둘다 표현
	// -128 ~ 0 ~127
	char c1 = 0;
	c1 = 1;
	// 자료형 (크기 단위, byte) Data Type 
		// 정수형 : char(1), short(2), int(4), long(4), long long(8)
		// 실수형 : float(4), double(8)

	int i = 0;

	// 1 바이트로 양수만 표현
	// 256 가지 -> 0 ~ 255
	unsigned char c = 0;
	/*c = 255;*/


	// 1바이트로 양수, 음수 둘다 표현
	// -128 ~ 0 ~127
	char c1 = 0;
	c1 = 1;

	// 음의 정수 찾기(2의 보수법)
	// 대응되는 양수의 부호를 반전 후, 1을 더한다.

	int a = 4 + 4.0;

	//if 문법

	int data = 0;

	//비교 연산자 
	// == != < <= > >= 

	//삼중 비교 연산자
	//<=>

	//Ex 

	//class T {

	//	int m_Val;

	//public:
	//	explicit T(int val) : m_Val{ val } {}
	//	bool operator ==(const T& other) const { return m_Val == other.m_Val; } // < 로부터 구현하면, !(*this < other || other < *this)로 할 수 있습니다. 단 < 을 2회 하므로 비효율적입니다.
	//	bool operator !=(const T& other) const { return !(*this == other); } // == 로부터 구현
	//	bool operator <(const T& other) const { return m_Val < other.m_Val; }
	//	bool operator >(const T& other) const { return other < *this; } // < 로부터 구현
	//	bool operator <=(const T& other) const { return !(other < *this); } // < 로부터 구현
	//	bool operator >=(const T& other) const { return !(*this < other); } // < 로부터 구현
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

	if (0 && 200) //거짓
	{
		data = 1000;
	}




	return 0;
}