#include <iostream>

using namespace std;

#define NEG_INF -9999999

int arr[] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-2,15,-4,7};

int find_cross_sum(int arr[], int low, int mid, int high)
{
	int left_sum = NEG_INF;
	int sum = 0;
	for(int i = mid; i >= low; i--)
	{
		sum += arr[i];
		if(sum > left_sum)
			left_sum = sum;
	}

	int right_sum = NEG_INF;
	sum = 0;
	for(int j = mid+1; j <= high; j++)
	{
		sum += arr[j];
		if(sum > right_sum)
			right_sum = sum;
	}
	return left_sum+right_sum;
}

int max_sum(int arr[], int low, int high)
{
	if(low == high)
		return arr[low];
	else
	{
		int mid = (low+high)/2;
		int left_sum = max_sum(arr, low, mid);
		int right_sum = max_sum(arr, mid+1, high);
		int cross_sum = find_cross_sum(arr, low, mid, high);
		if((left_sum > right_sum) && (left_sum > cross_sum))
			return left_sum;
		else if((right_sum > left_sum) && (right_sum > cross_sum))
			return right_sum;
		else
			return cross_sum;
	}
}

int main()
{
	cout << max_sum(arr, 0, 15) << endl;
	return 0;
}