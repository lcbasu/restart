#include <iostream>

using namespace std;

#define MAX 100

int arr_sum(int *arr, int n);

int main()
{
	// passing array to function

	int arr[MAX];

	int n;
	cout << "Total numbers to be added: ";
	cin >> n;
	cout << endl;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int sum = 0;

	sum = arr_sum(arr, n);

	cout << "Sum: " << sum << endl;

	return 0;
}

int arr_sum(int *arr, int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += *(arr + i);
	}
	return sum;
}