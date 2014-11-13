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

int main()
{
    int N;
    cin >> N;
    
    int arr[100];
    
    for(int i = 0; i < 100; i++)
    {
        arr[i] = 0;
    }
    
    int T = N;
    
    while(T--)
    {
        int tmp;
        cin >> tmp;
        
        arr[tmp] = arr[tmp]  + 1;
    }
    
    for(int i = 0; i < 100; i++)
    {
        cout << arr[i] << " ";
    }

    
    return 0;
}