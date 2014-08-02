#include <iostream>

using namespace std;

#define INF 9999999

int arr[100];

void merge_new(int arr[], int p, int mid, int r)
{
	int n1 = mid-p+1;
	int n2 = r-mid;
	int *left_arr = new int[n1+1];
	int *right_arr = new int[n2+1];
	left_arr[n1] = INF;
	right_arr[n2] = INF;

	for (int i = 0; i < n1; ++i)
	{
		left_arr[i] = arr[p+i];
	}

	for (int i = 0; i < n2; ++i)
	{
		right_arr[i] = arr[mid+1+i];
	}

	int i = 0;
	int j = 0;

	for (int k = p; k <= r; k++)
	{
		if (left_arr[i] <= right_arr[j])
		{
			arr[k] = left_arr[i];
			i++;
		}
		else
		{
			arr[k] = right_arr[j];
			j++;
		}
	}
}

void merge_sort(int arr[], int p, int r)
{
	if (p<r)
	{
		int mid = (p+r)/2;
		merge_sort(arr, p, mid);
		merge_sort(arr, mid+1, r);
		merge_new(arr, p, mid, r);
	}
}

int main()
{
	arr[0] = 5;
	arr[1] = 8;
	arr[2] = 3;
	arr[3] = 9;
	arr[4] = 2;
	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	merge_sort(arr, 0, 4);

	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;	
	return 0;
}