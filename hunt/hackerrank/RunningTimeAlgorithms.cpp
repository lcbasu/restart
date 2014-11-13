#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


int shiftCount(int *arr, int N)
{
    int count = 0;
    
    for(int j = 1; j < N; j++)
    {
        int key = arr[j];
        int i = j-1;
        while(i>=0 && arr[i] > key)
        {
            count++;
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
    
    return count;
}

int main()
{
    int N;
    
    cin >> N;
    
    int *arr = new int[N];
    

    for(int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        arr[i] = tmp;
    }
    
    cout << shiftCount(arr, N);
    
    return 0;
}