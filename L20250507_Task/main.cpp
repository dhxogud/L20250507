#include <iostream>
#include <vector>
#include <bitset>


using namespace std;

int main()
{
	// bit ������ ����ϴ� ���� ū ���� => �޸𸮸� ���� ���ų�, ���� ���� ����� ���ؼ�
	// ���� ���, true�� false�� ǥ���Ҷ� Bool ������ �����ʰ� 1��Ʈ������ 0�� 1�� �߻�ȭ�ϰ� �ʹٸ�
	// ��Ʈ������ �ξ� ȿ�����̴�. (Bool ���� 1����Ʈ size�� ������ �ֱ� ������)
	// �𸮾����� ȯ�漳���� Engine->Collision�� Object Channel �� bit ������ ���� �ִ�.
	unsigned char A = 5;	// 0000 0101
	unsigned char B = 6;	// 0000 0110
	unsigned char C = A ^ B;	// OR
	unsigned char D = ~A;		// NOT
	unsigned char E = A & B;	// AND

	cout << (int) C << endl;
	cout << (int) D << endl;
	cout << (int) E << endl;


	

	/*int N;

	cin >> N;

	vector<unsigned long long int> X_NPots;

	for (int i = 0; i < N; i++)
	{
		unsigned long long int X = 0;
		cin >> X;

		unsigned long long int Y = 1;
		for (; X >= Y; Y *= 2);

		X_NPots.push_back(Y);
	}

	unsigned long long int K = X_NPots[0];

	for (int i = 1; i < X_NPots.size(); i++)
	{
		K = K ^ X_NPots[i];
	}

	cout << bitset<64>(K) << endl;

	return 0;*/
}