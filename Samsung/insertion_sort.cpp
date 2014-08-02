#include <iostream>

using namespace std;

int arr[100];

void insertion_sort(int arr[], int n)
{
	int key;

	for (int j = 1; j < n; j++)
	{
		key = arr[j];
		int i = j - 1;
		while(i >= 0 && arr[i] > key)
		{
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1] = key;
	}
}

int main()
{
	arr[0] = 3;
	arr[1] = 1;
	arr[2] = 5;

	for (int i = 0; i < 3; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	insertion_sort(arr, 3);

	for (int i = 0; i < 3; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;	
	return 0;
}