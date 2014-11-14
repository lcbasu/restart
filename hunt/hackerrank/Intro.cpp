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
    int V, N;
    
    cin >> V >> N;
    
    int count = 0;
    
    for(int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        if(tmp == V)
        {
            break;
        }
        count++;
    }
    
    cout << count;
    
    return 0;
}