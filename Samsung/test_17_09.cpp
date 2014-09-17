//Simple test code for factorial, to test compiler setup.

#include <iostream>

using namespace std;

long long int fac(int n)
{
	long long int result = 1;

	for(int i = 1; i <= n; i++)
	{
		result *= i;
	}

	return result;
}

int main()
{
	cout << fac(6) << endl;
	return 0;
}