#include <iostream>
#include <vector>

using namespace std;

int main()
{
	srand(time(NULL));

	int N;

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

	cout << K << endl;

	return 0;
}