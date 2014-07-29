#include <iostream>

using namespace std;

// multi dimension array

int multi_arr_sum(int m_arr[][2], int);

int main()
{
	int m_arr[2][2];
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cin >> m_arr[i][j];
		}
	}
	int sum = multi_arr_sum(m_arr, 2);
	cout << "Sum: " << sum << endl;
	return 0;
}

int multi_arr_sum(int m_arr[][2], int n)
{
	int sum = 0;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			sum += m_arr[i][j];
		}
	}
	return sum;
}