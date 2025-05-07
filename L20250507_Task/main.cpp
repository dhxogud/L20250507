#include <iostream>
#include <vector>
#include <bitset>


using namespace std;

int main()
{
	//// bit 연산을 사용하는 가장 큰 이유 => 메모리를 적게 쓰거나, 연산 성능 향상을 위해서
	//// 예를 들어, true나 false를 표현할때 Bool 형으로 쓰지않고 1비트만으로 0과 1로 추상화하고 싶다면
	//// 비트연산이 훨씬 효율적이다. (Bool 형은 1바이트 size를 가지고 있기 때문에)
	//// 언리얼엔진의 환경설정의 Engine->Collision의 Object Channel 도 bit 연산을 쓰고 있다.
	//unsigned char A = 5;	// 0000 0101
	//unsigned char B = 6;	// 0000 0110
	//unsigned char C = A ^ B;	// XOR
	//unsigned char D = ~A;		// NOT
	//unsigned char E = A & B;	// AND
	//unsigned char F = A | B;	// OR
	//unsigned char J = A >> 1;	// right shift operator
	//unsigned char K = 1 << B;	// left shift operator

	//cout << (int) C << endl;
	//cout << (int) D << endl;
	//cout << (int) E << endl;
	//cout << (int) F << endl;
	//cout << (int) J << endl;
	//cout << (int) K << endl;



	

	int N;

	cin >> N;

	vector<unsigned long long int> X_NPots;

	for (int i = 0; i < N; i++)
	{
		unsigned long long int X = 0;
		cin >> X;

		unsigned long long int Y = 1;
		for (; X >= Y; Y <<= 1);

		X_NPots.push_back(Y);
	}

	unsigned long long int K = X_NPots[0];

	for (int i = 1; i < X_NPots.size(); i++)
	{
		K = K ^ X_NPots[i];
	}

	cout << bitset<64>(K) << endl;

	return 0;
}