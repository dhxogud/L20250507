#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>
#include <string>


using namespace std;

int main()
{
	char A = 'A'; // == 65 = 64 + 1 == 0100 0001
	
	// 0000 1010 == 10
	// 75 = 0100 1001
	cout << (A ^ 10) << endl;
	cout << ((A ^ 10) ^ 10) << endl;

	

	return 0;
}