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
        int N;
        
        cin >> N;
        
        //we have to find m and n such that 5t + 3f = N the 3 can occur t times and 5 can occur f times
        
        int t = 0;
        int f = 0;
        
        for(int i = 0; i < N/5; i++) //f
        {
            for(int j = 0; j < N/3; j++) //t
            {
                if(((5*i) + (3*j)) == N)
                {
                    if( (t == 0) && (f == 0))
                    {
                        f = i;
                        t = j;
                    }
                    else if( i > f) //for next greater value, because more the number of 5, greater the value
                    {
                        f = i;
                        t = j;
                    }
                }
            }
        }
        
        if( (f == 0) && (t == 0))
        {
            cout << -1;
        }
        else
        {
            for(int j = 0; j < 3*f; j++)
                cout << 5;
            for(int i = 0; i < 5*t; i++)
                cout << 3;
        }
        cout << endl;
    }
    
    return 0;
}