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
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, a, b;
        
        cin >> N >> a >> b;
        
        set<int> lastNumbers;
        
        int c1, c2;
        
        for (int i = 0; i < N; i++)
        {
            c1 = i;
            c2 = N-1-i;
            
            int tmp = c1*a + c2*b;
            
            lastNumbers.insert(tmp);
        }
        set<int>::iterator it;
        for(it = lastNumbers.begin(); it != lastNumbers.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    
    return 0;
}