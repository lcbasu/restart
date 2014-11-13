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

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        
        int gcdNum = 0;
        
        for(int i = 0; i < N; i++)
        {
            int tmp;
            cin >> tmp;
            
            gcdNum = gcd(gcdNum, tmp);
        }
        
        if(gcdNum == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}