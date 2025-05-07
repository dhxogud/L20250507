#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	long long* X = new long long[N];
	long long Store = 0;

	for (int i = 0; i < N; ++i)
	{
		cin >> X[i];

		for (int j = 0; j < 63; ++j)
		{
			unsigned long long NPOT = 1 << j;

			if (NPOT > X[i])
			{
				if (Store == 0)
				{
					Store = NPOT;
				}
				else
				{
					Store = Store ^ NPOT;
				}
				break;
			}
		}
	}

	cout << bitset<64> (Store) << endl;

	delete X;
	X = nullptr;

	return 0;
}